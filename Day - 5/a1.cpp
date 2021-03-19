#include <bits/stdc++.h>
using namespace std;

int number_of_tower(int house[], int range, int n)
{
    sort(house, house + n);
    int numOfTower = 0;
    int i = 0;
    while (i < n)
    {
        numOfTower++;
        int loc = house[i] + range;
        while (i < n && house[i] <= loc)
        {
            i++;
        }
        --i;
        loc = house[i] + range;
        while (i < n && house[i] <= loc)
        {
            i++;
        }

    }
    return numOfTower;
}

int main()
{
    int house[] = { 7, 2, 4, 6, 5, 9, 12, 11 };
    int range = 2;
    int n = sizeof(house) / sizeof(house[0]);
    cout << number_of_tower(house, range, n);
}
