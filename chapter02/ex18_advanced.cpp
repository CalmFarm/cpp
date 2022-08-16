#include <iostream>

using namespace std;

int main(){
    int list[] = {1,2,3,4,5,6,7,8,9,10};
    int sum =0;

    for(int i : list){
        sum += i;
    }
    cout<< sum << endl;

    cout<< endl;
    for(auto& i : list){
        cout << i << " ";
    };
    return 0;
}