#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >>t;

    while(t--)
    {
        string s;
        cin >> s;
        char ans[1000];
        if(s.length() > 2)
        {
            int j = 0;
            ans[j] = s[0];
            j = 1;
            for(int i = 1; i < s.length(); ++i)
            {
                if(s[i] == s[i+1])
                {
                    ans[j] = s[i];
                    j++;
                    i++;
                }
                else
                {
                    ans[j] = s[i];
                    j++;
                }
            }
            ans[j] = s[s.length()];
            cout << ans << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
}
