#include<bits/stdc++.h>

using namespace std;

int main()
{
    unordered_set<int> s;
    int a, n = 4;
    while(n--) {
        cin >> a;
        s.insert(a);
    }

    cout << 4-s.size();
}
