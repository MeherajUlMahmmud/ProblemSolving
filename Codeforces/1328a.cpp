#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    long long int a, b;
    while(t--)
    {
        cin >> a >> b;

        if(a % b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int div = a / b;
            int ans = (div + 1) * b;
            cout << ans - a << endl;
        }
    }
}
