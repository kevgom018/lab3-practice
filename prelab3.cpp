#include <iostream>
#include <string>

using namespace std;

string switchDayName(int num);

int main(){
    string inv = switchDayName(9);
    string mon = switchDayName(2);
    cout << inv << endl;
    cout << mon << endl;
    return 0;
}

string switchDayName(int num){
    switch(num){
        case 1:
        return "Sunday";
        case 2:
        return "Monday";
        case 3:
        return "Tuesday";
        case 4:
        return "Wednesday";
        case 5:
        return "Thursday";
        case 6:
        return "Friday";
        case 7:
        return "Saturday";
        default:
        return "Invalid number";
    }
}