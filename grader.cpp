// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// rkapadia
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
void calculateLetterGrade(double value, char & totalgrade);
void calculateLetterGrade(double value, char & totalgrade)
  {
   if(value>=90)
     {
       totalgrade = 'A';
     }
   else if(value>=80)
     {
       totalgrade = 'B';
     }
   else if(value>=70)
     {
       totalgrade = 'C';
     }
   else if(value>=60)
     {
       totalgrade = 'D';
     }
    else
     {
       totalgrade = 'F';
     }
  }
int main()
  {
    double value(0);
    char grade;
    std::string File("");
    std::cout << "Welcome to Rayhan's Grade Calculator!" << std::endl;
    std::cout << "Please enter the file you wish to open: ";
    std::cin >> File;
    std::ifstream input(File);
    if(input.is_open())
    {
      std::string line("");
   	  std::cout << "Reading from file " << File << "..."<<std::endl;
	    while (getline(input, line))
	      {
          	double percentage(0.0);
	        std::string section = line;
	       if (section == "Assignments")
	          {
	             percentage = 0.5; 
	          }
          	else if (section == "Participation")
	           {
	             percentage = 0.1;
	           }
          	 else if(section=="Final")
             {	
               percentage = 0.2;
             }

	         else if (section == "Midterm")
	           {
	             percentage = 0.2;
	           }
	       std::getline(input, line);
	       std::stringstream ss(line);
		   char space;
		   int tally(0);
	       double score(0.0);
           double total(0.0); 
	         while (ss >> score)
	           {
	             total += score;
	             tally++;
	             ss >> space;
	           }
	         if (tally != 0)
	           {
	             double average = total/tally;
	             value += (percentage*average);
	           }
	     }
     }
   else
     {
		  std::cout << "Sorry this file cannot be found." << std::endl;	
     }
  input.close();
  std::cout << "Calculating grades..."<<std::endl;
  calculateLetterGrade(value,grade);
  std::cout << "Save To (Filename): ";
  std::cin >> File;
  std::ofstream outputfile(File);
  outputfile << value;
  outputfile << " " << grade;
  std::cout << "Score & Letter Grade written to file: " << File <<std::endl;
  std::cout << "Thank you for using my program - good bye!" << std::endl;
  outputfile.close();
  return 0;
  }

