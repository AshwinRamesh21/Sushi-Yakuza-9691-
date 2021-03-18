#include<iostream>
using namespace std;

void find(int arr[], int n)
{
    int found = 0;
    for (int i=0; i<n-2; i++)
    {
        for (int j=i+1; j<n-1; j++)
        {
            for (int k=j+1; k<n; k++)
            {
                if (arr[i]+arr[j]+arr[k] == 0)
                {
                    cout << arr[i] << " "
                         << arr[j] << " "
                         << arr[k] <<endl;
                    found = 1;
                }
            }
        }
    }
    if (!found)
        cout << " not exist "<<endl;
}

int main()
{
    int arr[100], n;
    cout<<"Enter the array limit:\n";
    cin>>n;
    cout<"Enter the array:\n";
    for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
    find(arr, n);
    return 0;
}
