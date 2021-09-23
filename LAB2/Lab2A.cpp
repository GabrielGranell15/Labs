#include<iostream>
using namespace std;

void practiceCharMethod1(char c);
void practiceCharMethod2(char c);
void practiceCharMethod3(char c);
void practiceCharMethod4(char c);

int main()
{
  practiceCharMethod1('f'); // Test with different characters
  
  practiceCharMethod2('%'); // Test with different characters
  
  practiceCharMethod3('L'); // Test with different characters
  
  practiceCharMethod4('a'); // Test with different characters
  
  return 0;
}

// ONLY COPY & PASTE THE SPECIFIC METHOD AS YOUR ANSWER

/* The function must print the inverse capitalization of the character passed as an argument */
  
void practiceCharMethod1(char character)
{
  int result = 0;
    
  if(islower(character)){
    result=toupper(character);//YOUR CODE GOES HERE
  }

  else{
    result=tolower(character);
  }
  cout << "Inverse Capitalization: " << (char) result << endl;
}
  
/* Print only digits or alphanumeric characters. If other print "none". */
  
void practiceCharMethod2(char character)
{
  cout << "The character is: ";
  
  if(isalnum(character)){
    cout<<character<<endl;
  }

  else{
    cout<<"none"<<endl;
  }
  //YOUR CODE GOES HERE
  
}

/* You will need to verify the character passed as an argument. 
  Some times it can only be a space or a punctuation character. Validate it before using it. 
  If the character is other than a space or a punctuation, then it is okay to use it.
*/
  
void practiceCharMethod3(char character)
{
  bool okToUse;

  if(isalnum(character)){
    okToUse=true;
  }
  
  else{
     okToUse=false;
  }

  //YOUR CODE GOES HERE
    
  cout << (okToUse ? "Character is valid" : "Character is not valid") << endl;
}
  
/* You will need to verify if the character passed as an argument is equal to 'a', 'b', or 'c'
  and if so, print "first three letters". 
  It must be CASE INSENSITIVE, so if 'A', 'B' or 'C' is given, it must also print "first three letters". 
*/
  
void practiceCharMethod4(char character)
{
  if(character=='A'||character=='a'||character=='B'||character=='b'||character=='C'||character=='c'){
    cout<<"first three letters"<<endl;
  }

  else{
    cout<<"none"<<endl;
  }
  // YOUR CODE HERE
  
}
