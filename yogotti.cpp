#include <iostream>

using namespace std;
int main(){
    int time = 20;
    if ( time < 15) {
        cout << "Almost there";
    }else if (time < 10 ) {
        cout << "Not quite there.";
        
    } else {
        cout << "You made it";
    }
return 0;
}