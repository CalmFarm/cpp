#include <iostream>

using namespace std;

int main(){
    const int STUDENTS = 5;
    int scores[STUDENTS] = {
        100,200,300,400,500
    };

    int sum = 0;
    int i,average;

    // for(i=0;i<STUDENTS;i++){
    //     cout << "학생들의 성적을 입력하시요 : ";
    //     cin >> scores[i];
    // }

    for(i=0;i<STUDENTS;i++){
        sum += scores[i];
    }

    average = sum / STUDENTS;
    cout << "성적평균 = " << average << endl;

    return 0;
}