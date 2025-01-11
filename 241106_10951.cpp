#include <iostream>
using namespace std;

int main() {
    int a, b;

    // cin >> a >> b는 올바른 값이 들어왔을 때만 true
    while (cin >> a >> b) {
        cout << a + b << endl;
    }

    return 0;
}