#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5][5], target_i, target_j, steps = 0;
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            cin >> arr[i][j];
            if(arr[i][j] == 1) {
                target_i = i;
                target_j = j;
            }
        }
    }

    int steps_i = 2 - target_i;
    if(steps_i < 0) steps_i = steps_i * (-1);

    int steps_j = 2 - target_j;
    if(steps_j < 0) steps_j = steps_j * (-1);

    steps = steps_i + steps_j;
    cout << steps;
}
