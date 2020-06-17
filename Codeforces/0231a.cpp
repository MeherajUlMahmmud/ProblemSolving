#include<bits/stdc++.h>

using namespace std;

bool solve()
{
    int arr[3];
    for(int i = 0; i < 3; ++i){
        cin >> arr[i];
    }
    int count = 0;
    for(int i = 0; i < 3; ++i){
        if(arr[i] == 1){
            ++count;
        }
    }
    if (count > 1) {
        return true;
    }
    return false;
}

int main()
{
    int T, count = 0;
    cin >> T;
    cin.get();
    while(T--)
    {
        if (solve() == true) {
            count++;
        }
    };
    cout << count;
}
