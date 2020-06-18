#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int lower = 0, upper = 0;
    cin >> s;
    for(int i = 0;  i < s.length(); ++i)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            lower++;
        }
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            upper++;
        }
    }
    if(upper > lower)
    {
        for (int i = 0; i < s.length(); i++)
        {
            int c = s[i];
            s[i] = toupper(c);
        }
        cout << s;
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            int c = s[i];
            s[i] = tolower(c);
        }
        cout << s;
    }
}
