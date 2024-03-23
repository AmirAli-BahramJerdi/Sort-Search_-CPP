#include <iostream>
using namespace std;

//  Sort

/*
35, 33, 42, 10, 14, 19, 27, 44, 15

33, 35
33, 35, 42
33, 35, 10, 42
33, 35, 10, 14, 42
33, 35, 10, 14, 19, 42
33, 35, 10, 14, 19, 27, 42
33, 35, 10, 14, 19, 27, 42 , 44

33, 35, 10, 14, 19, 27, 42 , 15, 44    44 is the bigest number

33, 35
33, 10, 35
33, 10, 14, 35
33, 10, 14, 19, 35
33, 10, 14, 19, 27, 35
33, 10, 14, 19, 27, 35, 15, 42         42 is one to last part of arrey

10, 33
10, 14, 33
10, 14, 19, 27, 33
10, 14, 19, 27, 15, 33                33  is two to last part of arrey

10, 14, 19, 15, 27                    27 is three to last part of arrey

10, 14, 15, 19                        19 is four to last part of arrey


10, 14, 15, 19, 27, 33, 42, 44        " This is output. "
*/

int main()
{	int n;
    cout << "please enter the mount of the arrey: ";
    cin >> n;
    cout << endl;
	int arrey[n];
	
	for(int i=0; i<n; i++)
	{
		cout << "please eneter the mount of arrey" << "[" << i+1 << "] :";
		cin >> arrey[i];
		cout << endl;
	}

	for(int i=0; i<=n-1; i++)
	{
		for(int j=0; j<n-1-i; j++)
		{
			if(arrey[j+1] < arrey[j])
			{
				int temp = arrey[j];
				arrey[j] = arrey[j+1];
				arrey[j+1] = temp;
			}
		}
	}
 
 cout << "The sorted arrey = " << endl;	
	for(int j=0; j<n; j++)
	{
		cout << arrey[j] << "\t";
	}
}

