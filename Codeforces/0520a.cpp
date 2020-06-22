#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    if(n < 26)
        cout << "NO";
    else
    {
        set<char> ans;
        for(auto c : s)
        {
            ans.insert(tolower(c));
        }

        if(ans.size() == 26)
            cout << "YES";
        else
            cout << "NO";
    }
}
