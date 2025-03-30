
#include <iostream> 
using namespace std;

int swap (int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
	int a,b,c; cin >> a >> b >> c;
    int temp;

    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (a < c) {
        temp = a;
        a = c;
        c = temp;
    }

    if (b < c) {
        temp = b;
        b = c;
        c = temp;
    }

    cout << c << " " << b << " " << a;
    return 0;
}
