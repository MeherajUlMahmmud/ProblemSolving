#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, sum = 0;
    cin >> n;
    while(n--) {
        cin >> i;
        sum = sum + i;
    }

    if(sum == 0) cout << "EASY";
    else cout << "HARD";
}
