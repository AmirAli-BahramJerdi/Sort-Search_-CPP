#include <iostream>
using namespace std;
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
	
	for(int j=0; j<n; j++)
	{
		cout << "arrey[" << j << "] = " << arrey[j] << "\t";
	}
	int x , i=0;
	bool flag;
    cout << "\nplease enter the element of arrey that you want to search: ";
    cin >> x;
    while(i<n)
    {
    	if(arrey[i] == x)
    	{
    		cout << "the element X is in arrey["<< i <<"]";
    	    flag = true;
    	    break;
		}
		i++;
	}
   
   if (flag == false)
   {
   	cout << " X does not exist.";
   }
}
	
