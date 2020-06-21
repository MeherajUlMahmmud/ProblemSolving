#include<bits/stdc++.h>

using namespace std;

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
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] > arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int i = 0;
    while(mine <= total/2)
    {
        mine += arr[i];
        i++;
    }


    cout << i;
}
