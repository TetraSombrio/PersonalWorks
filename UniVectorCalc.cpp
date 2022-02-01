#include <iostream>
#include <vector>
#include <array>
#include <cmath>
using namespace std;
/* индексы: 
get - функции на взятие пром.результатов. vm - непосредственно операции над векторами. Размер массива всегда три. */

int getvectorbypoints(int *A[3], int *B[3])
{
	int AB[3];
	
	for(int i = 0; i < 3; ++i)
	{
		AB[i] = B[i] - A[i];
	}
	//return AB;
}

int getvectorlenght(int *A[3], int *B[3])
{
	int AB[3];
	for(int i = 0; i < 3; ++i)
	{
		AB[i] = getvectorbypoints(*A[i], *B[i]);
	}
	
	long int modulo = sqrt((AB[0]*AB[0]) + (AB[1]*AB[1]) + (AB[2]*AB[2]));
	return modulo;
}

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

float vm_scalar(int *A[3], int *B[3])
{
	int modA, modB, cosinus, ABprom;
	float cos, r;
	
	modA = getvectorlenght(A[0], A[1], A[2]);
	modB = getvectorlenght(B[0], B[1], B[2]);
	
	ABprom = (A[0]*B[0])+(A[1]*B[1])+(A[2]*B[2]);
	
	cos = (((ABprom))/((modA)*(modB)));
	
	r = modB * modA * cos;
	return r;
}

int main()
{
	int select;
	int *A[3], *B[3];
	cin >> select;
	
	switch(select)
	{
		case 0:
			break;
		case 1:
			//vm_sum();
			cout << "a+b = " << vm_sum(A, B) << endl;
			//continue;
		case 2:
			//vm_scalar();
			cout << "scalar a*b = " << vm_scalar(A, B) << endl;
			//continue;
		case 3:
			//vm_scalar();
			cout << "Array sorted for" << endl;
			//continue;
		case 4:
			//vm_scalar();
			cout << "Array sorted for" << endl;
			//continue;
		default:
            cout << "invalid value";
            return 0;
			break;
	}
	
	return 0;
}
