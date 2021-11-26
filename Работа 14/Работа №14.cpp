#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	const int SIZE = 10;
    int arr[SIZE] = {15,12,16,77,57,54,7,6,78,76};
	for (int i = 0; i < SIZE; i++)
	{
		cout << "int [" << i + 1 << "]" << " - " << arr[i] << endl;
	}

	cout << endl;

	const short SIZE1 = 10;
	short arr1[SIZE1] = { 20,12,16,77,57,54,7,6,78,76 };
	for (int b = 0; b < SIZE1; b++)
	{
		cout << "short [" << b + 1 << "]" << " - " << arr1[b] << endl;
	}
	cout << endl;

	const long SIZE2 = 10;
	long  arr2[SIZE2] = { 15,12,16,77,57,54,7,6,78,76 };
	for (int a = 0; a < SIZE2; a++)
	{
		cout << "long [" << a + 1 << "]" << " - " << arr2[a] << endl;
	}

	cout << endl;

	const int SIZE3 = 10;
	float arr3[SIZE3] = { 15,12,16,77,57,469999,7,6,78,76 };
	for (int c = 0; c < SIZE3; c++)
	{
		cout << "float [" << c + 1 << "]" << " - " << arr3[c] << endl;
	}

	cout << endl;
	 
	const int SIZE4 = 10;
	double arr4[SIZE4] = { 15,12,16,77,57,54,7,6,78,76 };
	for (int u = 0; u < SIZE4; u++)
	{
		cout << "double [" << u + 1 << "]" << " - " << arr4[u] << endl;
	}

	cout << endl;
	 
	const int SIZE5 = 10;
	char arr5[SIZE5] = { '1','12','16','778','57','54','7','6','78','76'};
	for (int f = 0; f < SIZE5; f++)
	{
		cout << "char [" << f + 1 << "]" << " - " << arr5[f] << endl;
	}

	cout << endl;

	const int SIZE6 = 10;
	bool arr6[SIZE6] = { true,false,1,0,true};
	for (int l = 0; l < SIZE6; l++)
	{
		cout << "bool [" << l + 1 << "]" << " - " << arr6[l] << endl;
	}
	
	cout << endl;
	
    const int SIZE6 = 10;
	string arr7[size] = { "a","s","d","f","g","h","j","k","l","q" };
    for (int i = 0; i < 10; i++)
    {
        cout << "string [" << i + 1 << "] = " << arr7[s] << "\n";
    }
    cout << endl;
	
	return 0;
}