//tugas 8 nomer 1
#include <iostream>
using namespace std;

int main()
{
	int i;
	int input[10];
	
	cout<< "Masukkan nilai = " << endl;
	
	//masukan user
	for ( i=0; i< 10; i++ )
	{
		cin >> input[i];
	}
	
	//mencari nilai max
	int max;
	max = input[0];
	for ( i=0; i<10; i++)
	{
		if( max < input[i] )
		{
			max = input[i];
		}
	}
	cout << "nilai maximum = "<< max << endl;
	
	//mencari nilai min
	int min;
	min = input[0];
	for ( i=0; i<10; i++ )
	{
		if ( min > input[i] )
		{
			min = input[i];
		}
	}
	cout << "nilai minimum = "<< min << endl;
}

