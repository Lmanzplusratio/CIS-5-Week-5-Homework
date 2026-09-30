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






















If its true, it runs, if not it doesn't run

IF - If true, it runs (1st Option)
ELSE IF - It runs because (Option 1) fails, (2nd Option)
ELSE - Default if all else fails

What is a bool?
  Bool stands for Boolean, just means (True or False)
  Last week, we just had it be 0 or 1, now we are going to use it because last time it didn't really make sense

int age = 20;
bool adult = age >= 18;
std::cout << adult; // 1 or 0 // Recall 0 is True, 1 is False

double gpa = 3.8;
bool honors = gpa >= 3.5
if (honors) { . . . }

== (Is Equal to?) - This is a comparsion, it is not the same as assigning something with just one = sign
  
!= (is not equal to?) - NOTE: ! is an inverse, so !False = True, so context clues, != is not equal to?
  
<  (Less Than?)

>  (Greater Than?)

  ETC.....

  A single = stores, double == asks

  Ex.
  if (age = 18) { // stores 18, always true
    std::cout << "Exactly 18";
}
          THIS IS WRONG
if (age == 18) { // asks: is age 18?
std::cout<< ""}

If is ALWAYS followed by else

Int main() {
  int age = 0;
  std::cout << "Age? ";
  std::cin >> age;

  if (age >= 18) {
      std::cout << "You can register to vote . \n";
  } else {
    std::cout << "Not Yet." << (18 - age) << " more years. \n";
  }
  return 0;
}

if (age >= 18) {

} else { 
  return 0;
}

if (score >= 90)
  std::cout << "A\n";
  std::cout << "Great Job!\n";

THIS ONE ABOVE ONLY RUNS THE FIRST COUT
SO THIS FIX WE MUST PUT THE CODE OF IF IN CURLY BRACKETS


int score = 0;
std::cout << "Score 0-100? ";
std::cin >> score;

if (score >= 90) {
std::cout << "Letter : A\n";
} else if (score >= 80) {
std::cout << "Letter: B\n";
} else if (score >= 70) {
std::cout << "Letter: C\n";
} else {
std::cout << "Letter: below C\n";
}
return 0;
 } 


if (score >= 85) {
 std::cout
}

LOGICAL OPERATORS

Ampersands - && (and) boths sides are true, EX. Apple , TART AND GREEN
age >= 18 && gpa >= 3.5
Both must be true 0

Two Pipes - || (or) at least one side is true - 
 score < 0 || score > 100
 Has to be at least one, so this is between 0 - 100

! (not) the side is false
!adult, not adult

SO WHEN DO WE USE THESE LOGICAL OPERATORS

&& is usually used for range
|| is usually a reject ( Think of examples like putting passwords into a computer, if it wrong it rejects it because it is out of the bounds of the passwords)

if (score >= 80 && score <= 89) {
std::cout << "B\n";
}


if (score < 0 || score > 100) {
 std::cout << "Invalid score\n";
}
THIS SAYS SCORE IS OUT OF BOUNDS SO WE WANT TO REJECT IT

The ! Operator 
bool adult = age >= 18;
if (!adult) {
 std::cout << "Minor\n";
}

This reads, "If not adult"
This makes it invalid and makes it not true

Can be rewritten as
if (!(age >= 18)) { . . . }
// same as:
if (age < 18) { . . . }

if (!adult) {
 std::cout << "Minor\n";
} else if {
 std::cout << "Yes\n";
}

int age = 0;
 double gpa = 0.0;
std::cout << "Age? "; std::cin >> age
std::cout << "GPA? "; std::cin >> gpa;

bool adult = age >= 18;
bool honors = gpa >= 3.5;

if (adult && honors) {
 std::cout << "Eligible for the honors program"
 
 }
