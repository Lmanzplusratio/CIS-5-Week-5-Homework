#include <iostream>

// Isaiah Salvatierra - CIS 5
// Week 5 Homework - Conditionals

using std::cout;
using std::cin;

int main() {
 int lab = 0
 double homework = 0

 cout << "What is your average Lab Scores? \n"; cin >> lab;
 cout << "What is your average Homework Scores? \n"; cin >> homework;

 bool pass = lab >= 70
 bool pass = homework >= 70 // Edge Value for pass is 70, anything under that is not a pass

 if (lab && homework) {
  cout << "Congrats You Passed the Class! \n";
 } else if (lab || homework) {
  cout << " You passed one of these but still have some work to do. \n";
 } else {
  cout << "You did not pass, try again you got this! \n";
 }
 return 0;
}