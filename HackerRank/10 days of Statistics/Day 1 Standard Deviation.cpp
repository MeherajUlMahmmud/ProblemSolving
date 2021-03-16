#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int arr[n], sum = 0;
    double mean = 0.0, result = 0.0, variance = 0.0, stdDeviation = 0.0;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        sum += arr[i];
    }
    mean = sum / (n*1.0);
    for(int i = 0; i < n; ++i){
        result += pow((arr[i] - mean), 2);
    }
    variance = result / (n*1.0);
    stdDeviation = sqrt(variance);
    printf("%.1f", stdDeviation);
    return 0;
}
