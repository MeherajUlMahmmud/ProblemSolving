#include<bits/stdc++.h>

using namespace std;

int main()
{
	string one, two;
    cin >> one >> two;

    for(auto& i : one) {
        i = tolower(i);
    }
    for(auto& i : two) {
        i = tolower(i);
    }


	if (one < two)
        cout << -1;
	if (one > two)
        cout << 1;
	if (one == two)
        cout << 0;
}
