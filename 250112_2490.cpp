
#include <iostream>
using namespace std;

int main() {
    for (int i=0; i<3; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int one = a+b+c+d; //1(등)의 개수

        if (one == 3) cout << "A" << "\n";
        if (one == 2) cout << "B" << "\n";
        if (one == 1) cout << "C" << "\n";
        if (one == 0) cout << "D" << "\n";
        if (one == 4) cout << "E" << "\n";

    }
    return 0;
}
