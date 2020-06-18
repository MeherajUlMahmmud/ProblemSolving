#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x, count=0;
    cin >> x;

    while(x != 0) {
        if(x >5) {
            x = x-5;
            count++;
        }
        else {
            x = x-x;
            count++;
        }
    }

    cout << count;
}
