#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {
    int arr[9];
    for (int i=0; i<9; i++) {
        cin >> arr[i];
    }
    int maxNum = arr[0];
    int maxIndex = 0;
    for (int i=0; i<9; i++) {
        if (maxNum < arr[i]) {
            maxNum = arr[i];
            maxIndex = i;
        }
    }

    cout << maxNum << "\n" << maxIndex+1 << "\n";
}