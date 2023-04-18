// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// rkapadia

#include <iostream>
#include <string>
#include <cstring>
void reversedWord(char input[], int size);
int main()
{
  std::cout<<"Welcome to Rayhan's Word Reversal Program! ";
  int size;
  //Declare character array of size 100
  char word[100];
  char answer = 'Y';

    do 
    {
      std::cout<<"Please enter a word (100 Characters or Less): ";
      std::cin>>word;
      std::cout<<"Your word spelled backwards is: ";
      //This is the function call
      //strlen will find the length of a string and use it as word
      reversedWord(word, strlen(word));
	    std::cout<<word<<std::endl;
      std::cout<<"Would you like to continue? (Y or N)";
      std::cin>>answer;
    } 
    while (answer != 'N'&& answer =='Y');
  std::cout<<"Thank you! Goodbye!"<<std::endl;
  return 0;
}
void reversedWord(char input[], int size)
{
  //This is the base case and will allow us to go through the array
  if(size<2)
  {
	  return;
  }
  else
  {
    char i = input[0];
    input[0] = input[size-1];
    input[size-1] = i;
   reversedWord(input+1, size-2);
  }
}
