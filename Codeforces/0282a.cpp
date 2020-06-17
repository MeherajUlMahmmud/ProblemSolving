#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, x=0;
    cin >> T;

    while(T--) {
        string str;
        cin >> str;

        if (str[1] == '+') {
            x++;
        }
        if (str[1] == '-') {
            x--;
        }
    }

    cout << x;
}
