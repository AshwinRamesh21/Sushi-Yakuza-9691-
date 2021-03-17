#include<iostream>
using namespace std;

void reverseArray(int a[], int n)
{
    int b[100], temp, i;

    for(int i = 0; i < n; i++)
        b[i] = a[n-1-i];

    cout<<"\nReversed Array is:\n";
    for(i = 0;i < n; i++)
        cout<<b[i]<<"\n";
}

int main()
{
    int i = 0, n, a[100];
    cout<<"Enter your limit:\n";
    cin>>n;
    cout<<"\nEnter your array:\n";
    for(; i < n; i++)
        cin>>a[i];
    cout<<"\nThe array is:\n";
    for(i = 0; i < n; i++)
        cout<<a[i]<<" ";
    reverseArray(a, n);
    return 0;
}
