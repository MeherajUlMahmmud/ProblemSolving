#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, q, count = 0;
    cin >> n;
    while(n--) {
        cin >> p >> q;
        if(q-p > 1) {
            count++;
        }
    }
    cout << count;
}
