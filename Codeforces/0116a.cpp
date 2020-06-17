#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][2];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 2; ++j){
            cin >> arr[i][j];
        }
    }

    int total = 0, max = 0, remaining = 0;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 2; ++j){
            if(j == 0){
                remaining = total - arr[i][j];
            }
            else {
                total = remaining + arr[i][j];
                if (max < total) {
                    max = total;
                }
            }
        }
    }
    cout << max;
}
