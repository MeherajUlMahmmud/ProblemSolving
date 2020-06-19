#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int o = 0, z = 0;

    int size = s.length();
    if(size < 7)
        cout << "NO";

    else {
        for(auto c : s) {
            if(c == '1') {
                o++;
                z = 0;
            }
            if(c == '0') {
                z++;
                o = 0;
            }
            if(o == 7 || z == 7) {
                cout << "YES";
                return 0;
            }
        }
        cout << "NO";
    }
}
