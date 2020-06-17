#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, k, max, count = 0;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
	if(i + 1 == k) {
		max = arr[i];
	}
    }

    for(int i = 0; i < n; ++i) {
        if(arr[i] >= max && arr[i] > 0) {
            count++;
        }
    }
    cout << count;

	return 0;

}
