#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, s;
    float total = 0.0, avg;
    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        cin >> s;
        total += s;
    }

    avg = total / n;
    cout << fixed << setprecision(8) << avg;
}
