#include <iostream>
#include <cmath> //루트를 쓰기 위해
using namespace std;

int main () {
    //소수를 찾는 알고리즘
    //n이 소수이려면 2~rootn까지의 수로 안 나눠져야 함

    int N; cin >> N;
    int result = 0; //소수의 개수
    while (N--) {
        int a; cin >> a;
        int rootA = (int) sqrt(a);
        bool isPrime = true;

        if (a == 1) continue;
        for (int i=2; i<=rootA; i++) {
            if ((a % i) == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime == true) result ++;
    }

    cout << result;
    return 0;
}