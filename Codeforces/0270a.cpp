#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, a;
    cin >> T;
    while(T--) {
        cin >> a;
        if (360 % (180-a) == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
