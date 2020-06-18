#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    unordered_set<char> c;

    for(auto i : s) {
        c.insert(i);
    }

    if(c.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    }
    else {
        cout << "IGNORE HIM!" << endl;
    }
}
