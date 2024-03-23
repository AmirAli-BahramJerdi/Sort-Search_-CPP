#include <iostream> 
using namespace std;
 
int main()
{
    int i,j,n,loc,temp,min,arrey[n];
    cout << "please enter the mount of the arrey:";
    cin >> n;
    
 
    for(i=0;i<n;i++)
    {
       cout << "please eneter the mount of arrey" << "[" << i << "] :";
	   cin>>arrey[i];
    }
 
    for(i=0;i<n-1;i++)
    {
        min=arrey[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>arrey[j])
            {
                min=arrey[j];
                loc=j;
            }
        }
 
        temp=arrey[i];
        arrey[i]=arrey[loc];
        arrey[loc]=temp;
    }
 
    cout << "The sorted arrey = " << endl;	
    for(i=0;i<n;i++)
    {
        cout << "arrey["<< i <<"] = " << arrey[i] << "\t";
    }
}

