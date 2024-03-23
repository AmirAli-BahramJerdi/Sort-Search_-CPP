#include <iostream>
using namespace std;

// binary search
/*
0 1 2 3 4 5 6 7 8 9

*/

int main()
{	int n;
    cout << "please enter the mount of the arrey: ";
    cin >> n;
    cout << endl;
	int arrey[n];
	
	for(int i=0; i<n; i++)
	{
		cout << "please eneter the mount of arrey" << "[" << i << "] :";
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
		cout << "arrey[" << j << "] = " << arrey[j] << "\t";
	}
	int x;
    cout << "\nplease enter the element of arrey that you want to search: ";
    cin >> x;
	int start = 0;
	int end = n-1;
	
	while( start <= end)
	{
		int mid = (start+end)/2;
		if(arrey[mid] == x)
		{
			cout << "the element X is in arrey["<< mid <<"]";
			break;
		}
		if(arrey[mid] < x)
		{
			start = mid + 1;
		}
		else if(arrey[mid] > x)
		{
			end = mid -1;
		}
	}
	
	if (start > end)
	{
		cout << " X does not exist.";
	}
	

}