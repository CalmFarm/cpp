#include <iostream>
using namespace std;

class Time{
    public:
    int hour;
    int minute;
    
    //»ı¼ºÀÚ
    Time();
    Time(int h,int m);

    void print();
};

void Time::print(){
    cout << hour << ":" << minute << endl;
};

Time::Time(){
    hour = 0 ;
    minute = 0 ;
};

Time::Time(int hour ,int minute) : hour(hour), minute(minute){
    // this->hour = hour;
    // this->minute = minute;
};

int main(){
        Time b(10,25);
        b.print();
        return 0;
};