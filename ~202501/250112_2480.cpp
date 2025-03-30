#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;

    int money;
    if (a == b && b == c) {
        money = 10000 + a*1000;
    }
    else {
        if (a == b) money = 1000 + a*100;
        else if (a == c) money = 1000 + a*100;
        else if (b == c) money = 1000 + b*100;
        else {
            int m;
            m = max(a,max(b,c));
            money = m * 100;
        }
    }

    cout << money;
    return 0;
}