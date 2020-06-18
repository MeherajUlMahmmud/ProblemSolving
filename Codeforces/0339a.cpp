#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[100];
    int arr[100], size, j = 0;
    cin >> s;
    size = strlen(s);
    for(int i = 0; i < size; ++i)
    {
        if(i % 2 == 0)
        {
            arr[j] = (int) s[i];
            ++j;
        }
    }
    for(int i = 1; i < j; ++i)
    {
        for(int k = 0; k < (j - i); ++k)
        {
            if(arr[k] > arr[k + 1])
            {
                int temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }
    for(int i = 0; i < j; ++i) {
        if(i == j-1) {
            cout << (char)arr[i];
        }
        else {
            cout << (char)arr[i] << "+";
        }
    }
}
