#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll n, count = 0, ln;
    cin >> n;
    string s = to_string(n);
    ln = s.length();
    for(ll i = 0; i < ln; ++i) {
        if(s[i] == '4' || s[i] == '7') {
            count++;
        }
    }
    if(count == 4 || count == 7)
        cout << "YES";
    else
        cout << "NO";
}
