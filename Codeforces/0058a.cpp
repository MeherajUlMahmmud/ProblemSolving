#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, x="hello";
    cin >> s;
    int j = 0, pass = 0;
    for(int i = 0; i < s.length(); ++i)
    {
        if(s[i] == x[j])
        {
            ++j;
            ++pass;
            if(j == 5)
            {
                break;
            }
        }
    }
    if(pass == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
