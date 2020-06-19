#include<bits/stdc++.h>

using namespace std;

bool isVowel(char s)
{
    if(s == 'a' || s == 'e' || s == 'i'
            || s == 'o' || s == 'u' || s == 'y')
    {
        return true;
    }
    return false;

}

int main()
{
    string s;
    cin >> s;

    for(auto& c : s)
    {
        c = tolower(c);
        if(!isVowel(c))
        {
            cout << "." << c;
        }
    }
}
