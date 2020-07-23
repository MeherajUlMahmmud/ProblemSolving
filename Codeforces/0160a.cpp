#include<bits/stdc++.h>

using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int n, total = 0, mine = 0;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        total += arr[i];
    }

    sort(arr, arr+n, cmp);

    int i = 0;
    while(mine <= total/2)
    {
        mine += arr[i];
        i++;
    }


    cout << i;
}
