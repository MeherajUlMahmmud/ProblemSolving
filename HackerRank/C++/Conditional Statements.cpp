#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    if(n == 1)
        cout << "one";
    if(n == 2)
        cout << "two";
    if(n == 3)
        cout << "three";
    if(n == 4)
        cout << "four";
    if(n == 5)
        cout << "five";
    if(n == 6)
        cout << "six";
    if(n == 7)
        cout << "seven";
    if(n == 8)
        cout << "eight";
    if(n == 9)
        cout << "nine";
    if(n > 9)
        cout << "Greater than 9";

    return 0;
}
