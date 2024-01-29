#include <iostream>
using namespace std;
int main()
{
  string name;
  cout << "Enter your name: ";
  getline(cin, name);

  int age ;
  cout << "How old are you: ";
  cin >> age;




  cout << "Hello " << name;
  cout << "\nYou are " << age << "years old";


  return 0;



}
