#include <iostream>
using namespace std;
int main()
{
    int day = 9;
    switch (day){
        case 1:
        cout << "Monday";
        break;
        case 2:
        cout << "Tuesday";
        break;
        case 3:
        cout << "Wednesday ";
        break;
        case 4:
        cout << "Thursday";
        break;
        case 5:
        cout << "Friday";
        break;
        case 6:
        cout << "Saturday";
        break;
        case 7:
        cout << "Sunday\n";
        break;
        default:
        cout << "Looking forward to the Weekend\n";

    }
    return 0;
}