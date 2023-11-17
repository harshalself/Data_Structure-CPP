// NAME : HARSHAL PATIL
// ROLL NO : 44

// Assignment 9 : String Operations using Stack

#include <iostream>
#include <stack>
#include <cctype>
#include <string>
using namespace std;

void originalAndReversedString(const string &input)
{
   stack<char> charStack;

   for (char c : input)
   {
      if (isalnum(c))
      {
         charStack.push(tolower(c));
      }
   }

   cout << "The original string is : " << input << endl;
   cout << "Reversed string is : " << endl;

   while (!charStack.empty())
   {
      cout << charStack.top();
      charStack.pop();
   }
   cout << endl;
}

bool isPalindrome(const string &input)
{
   stack<char> charStack;
   string in;
   string reversedString;
   for (char c : input)
   {
      if (isalnum(c))
      {
         in += tolower(c);
         charStack.push(tolower(c));
      }
   }

   while (!charStack.empty())
   {
      reversedString += charStack.top();
      charStack.pop();
   }

   return in == reversedString;
}

int main()
{
   string input;
   cout << "Enter the string : " << endl;
   getline(cin, input);

   originalAndReversedString(input);

   if (isPalindrome(input))
   {
      cout << "The string is palindrome !!!" << endl;
   }
   else
   {
      cout << "The string is not palindrome !!!" << endl;
   }

   return 0;
}