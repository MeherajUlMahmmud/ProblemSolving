#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    bool lock = true;
    for(int i = 1; i < s.length(); ++i) {
        if(islower(s[i])) {
            lock = false;
        }
    }
    if(lock) {
        for(auto c : s) {
            if(isupper(c))
                cout << (char)tolower(c);
            if(islower(c))
                cout << (char)toupper(c);
        }
    }
    else
        cout << s;
}
