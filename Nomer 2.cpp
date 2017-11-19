//tugas 8 nomer 2
#include <iostream>
using namespace std;

int main()
{
	int n, i;
	int nilai[n];
	bool status = false;
	
	cout << "n : ";
	cin >> n;
	
	for ( i=0; i<n; i++ )
	{
		cout << "angka ke-" << i + 1 << " : ";
		cin >> nilai[i];
	}
	
	cout << "angka genap : " << endl;
	
	//kondisi genap atau tidak
	for ( i=0; i<n; i++ )
	{
		if ( nilai[i] % 2 == 0 )
		{	
			cout << nilai[i] << endl;
			status = true;
		}
	}
	if (!status)
	cout << "Tidak ada" << endl;
}
