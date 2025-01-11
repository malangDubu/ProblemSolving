#include <iostream>
#include <vector>
using namespace std;

int main () {
    int N; string num;
    cin >> N >> num;

    vector <int> nums;
    for (int i=0; i<N; i++) {
        nums.push_back((int)num[i] -48); //문자 1의 값은 49
    }

    int result=0;
    for (int i=0; i<N; i++) {
        result+=nums[i];
    }

    cout <<result;
    return 0;
}