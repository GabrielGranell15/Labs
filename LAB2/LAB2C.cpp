#include<iostream>
#include<string>
using namespace std;

void stringPractice1(string password);
void stringPractice2(string name, string department, string college);
void stringPractice3(string twoWords);
void stringPractice4(string word);

int main() {
  stringPractice1("1234");
  stringPractice2("Pedro", "CIIC", "Engineering");
  stringPractice3("Two Words");
  stringPractice4("Vehicle");
  
  return 0;
}

/* The function must verify the length of the string passed as an argument. 
  If it is too short (less than 8), it should print "password is too short”.
*/

void stringPractice1(string password) {
  
  if(password.length()<8){
     cout << "password is too short" << endl;
  }

  else{
    cout << "none" << endl;
  }
  
 
}

/* The function must concatenate the string arguments in order to print a string in the following way:
"Welcome <name> to the <department> department in the College of <college>"
So if the name were "Pedro", the department were "CIIC", and the college were "Engineering", your function would print:
"Welcome Pedro to the CIIC department in the College of Engineering"
*/

void stringPractice2(string name, string department, string college) {
  cout << "Welcome " + name + " to the " + department + " department in the College of " + college << endl;
}

/* The function must receive the string and replace the space in it with "_"  (you may assume that the string has only one space) and then print the word with the space replaced by “_”
*/

void stringPractice3(string twoWords) {
  // YOUR CODE HERE
  twoWords=twoWords.replace(twoWords.find(" "),1,"_");
  cout << twoWords << endl;
}

/* This function must erase the first 3 characters of a string, and append "---" at the end of the string.
If given the word is "Vehicle", the result would be: "icle---".
The altered string must be printed.
*/

void stringPractice4(string word) {
  word=word.erase(0,3);
  word=word.append("---");
  // YOUR CODE HERE
  cout << word << endl;
}