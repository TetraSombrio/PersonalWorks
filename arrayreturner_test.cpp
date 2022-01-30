#include <iostream>
using namespace std;

int *arrayreturner(int n)
{
	int *array = new int [n];
	int randovalue, i;
	
	srand(randovalue);
	for(i = 0; i < n; i++)
	{
		auto tmprand = 1 + rand();
		randovalue++;
		array[i] = tmprand;
	}
	
	return array;
}

int main()
{
	int n, k, i;
	cout << "write numbers of elements in array" << endl;
	cin >> n;
	//if (n <= 0)
	//	return 1;

	int* glob = arrayreturner(n);

	for(i = 0; i < n; i++)
    {
        cout << glob[i] << "\t";
    }
    
    delete[] glob;
    return 0;
}