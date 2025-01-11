#include <iostream>
using namespace std;

int main () {
    int N; cin >> N; //참가자의 수 N
    int shirts[6]; //각 사이즈별 필요한 티셔츠 수
    for (int i=0; i<6; i++) {
        cin >> shirts[i];
    }
    int t,p; cin >> t >> p; //티셔츠, 펜 한 묶음 단위

    int shirt =0; //티셔츠의 최소 묶음 수
    int pen =0; //펜의 최대 묶음 수
    int pen_solo = 0; //한 자루씩 구매하는 펜 수

    for (int i=0; i<6; i++) {
        shirt += (shirts[i]/t);
        if (shirts[i]%t != 0)  shirt += 1;
    }

    pen = N/p;
    pen_solo = N%p;

    cout << shirt << "\n";
    cout << pen << " " << pen_solo << "\n";
}