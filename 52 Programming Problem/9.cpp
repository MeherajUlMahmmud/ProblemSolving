#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, count = 1;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;

        double sq_root = sqrt(n);
        if(ceil(sq_root) == floor(sq_root)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
