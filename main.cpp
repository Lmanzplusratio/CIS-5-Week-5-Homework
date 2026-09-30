#include <iostream>

// Isaiah Salvatierra - CIS 5
// Week 5 Homework - Conditionals

using std::cout;
using std::cin;

int main() {
 int lab = 0;
 int homework = 0;

cout << "What is your average lab scores? \n"; cin >> lab;
cout << "What is your average homework scores? \n"; cin >> homework;

bool passs = lab  >= 70; // Edge Value for pass is 70
bool pass = homework >= 70; // Anything under a score of 70 is not a pass

if (lab < 0 || lab > 100) {
 cout << "Result: Invalid Score\n";
}
else if (homework < 0 || homework > 100) {
 cout << "Result: Invalid Score\n";
}
else if (passs && pass) { // Using Ampersands includes both booleans and says if both are met, then this displays you passed
cout << "Result: Congrats You Passed the Class! \n";
} 
else if (passs || pass) { // Using Two Pipes includes one or the other booleans and says if at least one is met, this displays you have some work to do
cout << "Result: You passed one of these but still have some work to do. \n";
} 
else { // This is the last resort default is all other requirements above are not met, which means you did not pass the work that week
cout << "Result: You did not pass this weeks assignments, try again you got this! \n";
}
return 0;
}
