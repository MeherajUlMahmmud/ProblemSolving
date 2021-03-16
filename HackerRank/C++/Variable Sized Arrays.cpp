#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, q;
    cin >> n >> q;
    
    vector<vector<int>> two_d;
    for (int i = 0; i < n; i++) {
        int size;
        cin >> size;
        vector<int> one_d;
        for(int j = 0; j < size; j++) {
            int value;
            cin >> value;
            one_d.push_back(value);
        }
        two_d.push_back(one_d);
    }
    for (int i = 0; i < q; i++) {
        int x, index;
        cin >> x >> index;
        cout << two_d[x][index] << endl;
    }
    return 0;
}
