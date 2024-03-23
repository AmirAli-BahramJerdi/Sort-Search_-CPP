#include <iostream>
using namespace std;

int partition(int arrey[], int p, int q)  
{
    int temp;
    int x = arrey[p]; // onsor mehvar
    int i = p;
    for (int j = p + 1; j <= q; j++)
    {
        if (arrey[j] <= x)
        {
            i++;
            temp = arrey[j];
            arrey[j] = arrey[i];
            arrey[i] = temp;
        }
    }
    temp = arrey[i];
    arrey[i] = arrey[p];
    arrey[p] = temp;
    return i;
}

void Quick_sort(int arrey[], int p, int r)
{
    int q;
    if (p < r)
    {
        q = partition(arrey, p, r);   //partision bandi
        Quick_sort(arrey, p, q - 1);  //zir arrey samt chap <= anasor mehvar
        Quick_sort(arrey, q + 1, r);  //zir arrey samt rast >= anasor mehvar
    }
}
 
int main()
{
    int i , n;
    cout << "please enter the mount of the arrey:";
	cin >> n; 
    int arrey[n];
 
    for (int i = 0; i < n; i++)
    {
        cout << "please eneter the mount of arrey" << "[" << i+1 << "] :";
        cin >> arrey[i];
    }
    cout << endl;
 
    Quick_sort(arrey, 0, n-1);
 
    for (int i = 0; i < n; i++)
    {
        cout << "arrey["<< i <<"] = " << arrey[i] << "\t";
    }
    cout << endl;
}
