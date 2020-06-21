#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;
    int min(a), max(a), min_index(0), max_index(0);

    for(int i = 1; i < n; ++i)
    {
        cin >> a;
        if(a > max)
        {
            max = a;
            max_index = i;
        }

        if(a <= min)
        {
            min = a;
            min_index = i;
        }
    }

    cout << max_index + (n - 1 - min_index) - (min_index < max_index ? 1 : 0);
}
