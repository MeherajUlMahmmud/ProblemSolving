#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int count = d;
    if(k == 1 || l == 1 || m == 1 || n == 1)
    {
        cout << count;
    }
    else
    {
        for(int i = 1; i <= d; ++i)
        {
            if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0)
            {
                count--;
            }
        }
        cout << d - count;
    }
}
