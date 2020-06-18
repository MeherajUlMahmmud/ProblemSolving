#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    char s[n];
    cin >> s;
    int ln = strlen(s);
    for(int i = 0; i < t; ++i)
    {
        for(int j = 0; j < ln;)
        {
            if(s[j]<s[j+1])
            {
                char temp = s[j+1];
                s[j+1] = s[j];
                s[j] = temp;
                j+=2;
            }
            else {
                j++;
            }
        }
    }

    cout << s;
}
