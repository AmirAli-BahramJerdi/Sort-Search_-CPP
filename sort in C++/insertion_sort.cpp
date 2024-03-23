#include<iostream>
 
using namespace std;
 
int main()
{
    int i,j,n,temp;
    cout << "please enter the mount of the arrey:";
    cin >> n;
    int arrey[n];
    
 
    for(i=0;i<n;i++)
    {
        cout << "please eneter the mount of arrey" << "[" << i+1 << "] :";
		cin>>arrey[i];
    }
 
    for(i=0;i<n;i++)
    {
        temp=arrey[i];
        j=i-1;
 
        while((temp<arrey[j])&&(j>=0))
        {
            arrey[j+1]=arrey[j];    
            j=j-1;
        }
 
        arrey[j+1]=temp;    
    }
 
    cout << "The sorted arrey = " << endl;
    for(i=0;i<n;i++)
    {
        cout << "arrey["<< i <<"] = " << arrey[i] << "\t";
    }
 
    return 0;
}

