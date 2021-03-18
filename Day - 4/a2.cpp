#include <iostream>
using namespace std;

void search2D(int a[50][50], int m, int ele)
{
    int i = 0, j = m-1;
    while ( i < m && j >= 0 )
    {
        if ( a[i][j] == ele )
        {
            cout<<"\nThe element "<<ele<<" found at the row "<<i+1<<" and column "<<j+1;
            break;
        }
        if ( a[i][j] < ele )
            j--;
        else
            i++;
   }
   cout<<"\nThe given element not found in the 2D array.";
}

int main()
{
    int a[50][50], m, ele;
    cout<<"Enter row and column limit:\n";
    cin>>m;
    cout<<"Enter the Array:\n";
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
        {
           cin>>a[i][j];
        }
    }
    cout<<"Enter the element to search:\n";
    cin>>ele;
    cout<<"The array is:\n";
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    search2D(a, m, ele);
    return 0;
}
