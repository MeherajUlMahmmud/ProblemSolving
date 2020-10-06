#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    while(d--)
    {
        int temp = arr[0], i = 0;
        for(i = 0; i < n-1; i++)
            arr[i] = arr[i+1];
        arr[i] = temp;
    }

    for(int j = 0; j < n; j++)
        cout << arr[j] << " ";
}
