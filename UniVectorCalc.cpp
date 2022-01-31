#include <iostream>
#include <vector>
#include <array>
#include <cmath>
using namespace std;
/* индексы: 
get - функции на взятие пром.результатов. vm - непосредственно операции над векторами*/

long int get_vectorlenght(int a, int b, int c);
{
	int a, b, c;
	
	long int modulo = sqrt((a*a) + (b*b) + (c*c))
	
	cout << "lenght" << "work in progress" << endl;
	return modulo;
}

bool get_kollinearcheck()
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