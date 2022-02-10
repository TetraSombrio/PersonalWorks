#include <iostream>
#include <vector>
#include <array>
#include <cmath>
#include <algorithm>
using namespace std;
/* индексы: 
get - функции на взятие пром.результатов. vm - непосредственно операции над векторами. Размер массива всегда три. */

array<int,3> getvectorbypoints(array<int,3> &As, array<int,3> &Ae)
{
    array<int,3> Ac;
    int tmp1, tmp2;
    
    for(int i = 0; i < 3; ++i)
    {
    		
    	tmp1 = Ae[i];
    	tmp2 = As[i];
    	Ac[i] = Ae[i] - As[i];
    }
    
    return Ac;
}

int getvectorlenght(array<int,3> &As, array<int,3> &Ae)
{
	array<int,3> Ac;
    int tmp1, tmp2;
    
    for(int i = 0; i < 3; ++i)
    {
    		
    	tmp1 = Ae[i];
    	tmp2 = As[i];
    	Ac[i] = Ae[i] - As[i];
    }
	
	int modulo = pow((Ac[0]*Ac[0]) + (Ac[1]*Ac[1]) + (Ac[2]*Ac[2]), 0.5);
	return modulo;
}
/*
bool checkcollinear()
{
	
	
	cout << "kollinear" << "work in progress" << endl;
	return false;
}


int vm_sum(int *A[3], int *B[3])
{
	
	int promres1, promres2, vectorA, vectorB, vectorC;
	vectorA = getvectorlenght(A[0], A[1], A[2]);
	vectorB = getvectorlenght(B[0], B[1], B[2]);
	vectorC = vectorA + vectorB;
	
	cout << "adder" << "work in progress" << endl;
	return vectorC;
}
*/
float vm_scalar(array<int,3> &As, array<int,3> &Ae, array<int,3> &Bs, array<int,3> &Be)
{
	int modA, modB, ABprom;
	float cosi, r;
	
	array<int,3> vectorA = getvectorbypoints(As, Ae);//здесь берём длинну(модуль) вектора по формуле.
	array<int,3> vectorB = getvectorbypoints(Bs, Be);
	
	ABprom = (vectorA[0]*vectorB[0])+(vectorA[1]*vectorB[1])+(vectorA[2]*vectorB[2]);
	
	cosi = std::cos(static_cast<float>(ABprom));
	//cos = (((ABprom))/((modA)*(modB)));
	
	r = modB * modA * cosi;
	return r;
}

int main()
{
	int select;
	
	array<int,3> *As = new array<int,3>;
	array<int,3> *Ae = new array<int,3>;
	
	array<int,3> *Bs = new array<int,3>;
	array<int,3> *Be = new array<int,3>;
	
    array<int,3> Ac;
    
    int A1[3], A2[3], B1[3], B2[3];
    
	cin >> select;
	
	switch(select)
	{
		case 0:
			break;
		case 1:
			//vm_sum();
			//cout << "a+b = " << vm_sum(*As, *Be) << endl;
			//continue;
		case 2:
			//vm_scalar();
			cout << "enter xyz coords for 1 and 2 point in vector A" << endl;
			cin >> A1[0] >> A1[1] >> A1[2] >> A2[0] >> A2[1] >> A2[2];
			cout << "enter xyz coords for 1 and 2 point in vector B" << endl;
			cin >> B1[0] >> B1[1] >> B1[2] >> B2[0] >> B2[1] >> B2[2];
			
			for(int i = 0; i < 3; i++)
			{
				As[i] = std::to_array(A1);
				Ae[i] = std::to_array(A2);
				
				Bs[i] = B1[i];
				Be[i] = B2[i];
			}
			
			cout << "scalar a*b = " << vm_scalar(*As, *Ae, *Bs, *Be) << endl;
			//continue;
		case 3:
			//vm_scalar();
			cout << "" << endl;
			//continue;
		default:
            cout << "invalid value";
            return 0;
			break;
	}
	
	delete[] As;
    delete[] Ae;
    delete[] Bs;
    delete[] Be;
	return 0;
}
