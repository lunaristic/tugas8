//tugas 8 nomer 4
#include <iostream>
using namespace std;

int main()
{
	int i, j, k;
	int a[3][3];
	int b[3][3];
	
	cout << "masukan matrix pertama : " << endl;	
	
	//matriks pertama
	for ( i=0; i<3; i++ )
	{
		for ( j=0; j<3; j++ )
		{
			cin >> a[i][j];
		}
	}
	
	cout << "------------------------" << endl;
	
	cout << "matriks pertama" << endl;
	
	//membentuk matriks pertama
	for ( i=0; i<3; i++ )
	{
		for ( j=0; j<3; j++ )
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "------------------------" << endl;
		
	cout << "masukan matrix kedua : " << endl;
	
	//matriks kedua
	for ( i=0; i<3; i++ )
	{
		for ( j=0; j<3; j++ )
		{
			cin >> b[i][j];
		}
	}
	
	cout << "------------------------" << endl;;
	
	cout << "matriks kedua" <<endl;
	
	//membentuk matriks kedua
	for ( i=0; i<3; i++ )
	{
		for ( j=0; j<3; j++ )
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "------------------------" << endl;
	
	//perkalian matriks
	int perkalianMatriks = 0;
	int hasil[i][j];
	
	cout << "Perkalian Matriks = " << endl;
	
	//perkalian
	for (int i = 0; i < 3; i++) 
	{
    	for (int j = 0; j < 3; j++) 
			{
      			perkalianMatriks = 0;
      			for (int k = 0; k < 3; k++) 
				  {
        			perkalianMatriks += a[i][k] * b[k][j];
     			  }
      			hasil[i][j] = perkalianMatriks;
    		}
    }
	
	//membentuk matriks
	for (int i = 0; i < 3; i++) 
	  {
   		for (int j = 0; j < 3; j++) 
		{
      		cout << hasil[i][j] << " " ;
   		}
   		cout << endl;
	}
}

