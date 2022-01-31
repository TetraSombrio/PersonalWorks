#include <iostream>
#include <vector>
#include <array>
#include <cmath>
using namespace std;
/* индексы: 
get - функции на взятие пром.результатов. vm - непосредственно операции над векторами*/

long int getvectorlenght(int a, int b, int c);
{
	int a, b, c;
	
	long int modulo = sqrt((a*a) + (b*b) + (c*c))
	
	cout << "lenght" << "work in progress" << endl;
	return modulo;
}

bool checkcollinear()
{
	
	
	cout << "kollinear" << "work in progress" << endl;
	return false;
}

int vm_sum();
{
	
	int promres1, promres2, vectorA, vectorB, vectorC;
	vectorA = get_vectorlenght(a, b, c);
	vectorB = get_vectorlenght(a2, b2, c2);
	vectorC = vectorA + vectorB;
	
	cout << "adder" << "work in progress" << endl;
	return vectorC;
}

long int vm_scalar(x, y, z, x2, y2, z2)
{
	int modA, modB, cosinus, r;
	int A[3], B[3];
	float cos;
	
	A[0] = x;
	A[1] = y;
	A[2] = z;
	B[0] = x2;
	B[1] = y2;
	B[2] = z2;
	
	
	modA = getvectorlenght();
	modB = getvectorlenght();
	
	Aprom = 0;
	Bprom = 0;
	
	cos = (((Aprom)*(Bprom))/((modA)*(modB)));
	
	r = modB * modA * cos;
}

int main()
{
	
	switch(select)
	{
		case 0:
			break;
		case 1:
			//vm_sum();
			cout << "a+b = " << vm_sum() << endl;
			continue;
		case 2:
			vm_multip();
			cout << "Array sorted for" << endl;
			continue;
		default:
            cout << "invalid value";
            return 0;
			break;
	}
	
	return 0;
}
