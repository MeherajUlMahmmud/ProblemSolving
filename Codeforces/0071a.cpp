#include<bits/stdc++.h>

using namespace std;

void solve()
{
    string str;
    getline(cin, str);
        int size = str.size();
        if(size > 10) {
            cout << str[0] << size-2 << str[size-1] << endl;
        }
        else {
            cout << str << endl;
        }
}

int main()
{
    int T;
    cin >> T;
    cin.get();
    while(T--)
    {
        solve();
    };
}
