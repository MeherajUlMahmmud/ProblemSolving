#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    char s[n];
    cin >> s;

    for(int i = 1; i < n; ++i) {
        if(s[i-1] == s[i]) {
            count++;
        }
    }
    cout << count;
}
