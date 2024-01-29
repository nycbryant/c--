#include <iostream>
using namespace std;
int main()
{
    int age;

    cout << "How old are you? ";
    cin >> age;

    if (age < 30){
        cout << "You cant got to the club hahaha\n";

    }else if  ( age < 50){
        cout << "HAHAHA YOU STILL CANT DRIVE YETTT!!\n";

    } else{
        cout << "You are able to anything you are past the age limit in America\n";

    }
    return 0;
}