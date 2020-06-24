/*Note that the first two characters of a match the first two characters of b. The third character of the string b again matches the second character of a (since it is the first character in the second substring, which contains the second and the third character of a). The fourth character b matches with the third character of a.

It is easy to notice that such a pattern continues further. That is, the string a
consists of the first character b and all characters at even positions in b.*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string b;
        cin >> b;
        string a = b.substr(0, 2);
        for(int i = 3; i < b.size(); i += 2)
        {
            a += b[i];
        }
        cout << a << endl;
    }
}
