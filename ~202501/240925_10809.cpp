/*
#include <iostream>
//#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int results[26]; //알파벳 개수만큼의 배열 생성
    std::fill_n(results, 26, -1); //전부 -1로 초기화
    for (int i =0; i< S.size(); i++) {
        char num = S[i];
        num= num-97; //a~z의 아스키 값은 97~122
        if (results[num] == -1) results[num] = i; //조건문을 걸어서 여러 번 나오는 문자에 대한 처리
    }
    for (int i=0; i<26; i++) {
        cout << results[i]<< " ";
    }
    return 0;
}
*/
