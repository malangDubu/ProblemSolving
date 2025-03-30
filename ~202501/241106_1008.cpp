#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double A, B; cin >> A >> B;
    double res = A/B;
    cout << fixed << setprecision(9) << res;
    return 0;
}
