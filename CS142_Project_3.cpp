// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// rkapadia
#include <cmath>
#include <iostream>

double calculateAverage(double & firstnumber, double secondnumber);
bool isPrime(int num);
void howManyPrime(int num, int & count);
int printPrimeNumbers(int num);
char repeat = 'Y';
char repeat2= 'Y';

int main() //The purpose of the main function is to ensure that there is userinput, and correct looping for the program.
{
    std::cout<<"Welcome to Rayhan's Prime Calculator!"<<std::endl;
    while (repeat=='Y'){
        int f(0);
        int count(0);
        std::cout<<"Please enter a number: ";
        std::cin>>f;
        if(f==1 ||f==0)
        {
            std::cout<<"No prime numbers were found"<<std::endl;
            do
            	{
                	std::cout<<"Would you like to continue (Y)es or (N)o?"<<std::endl;
                    std::cin>>repeat;
                }while (repeat!='Y' && repeat != 'N');
        }
        if(f==2)
        {
            std::cout<<"2 is the smallest prime number!"<<std::endl;
        }
        if(f>2)
        {
       		howManyPrime(f, count);
       	 	if(isPrime(f)==false)
        {
            std::cout<<f<<" is not a prime number."<<std::endl;
        }
        if(isPrime(f)==true)
        {
            std::cout<<f<<" is a prime number."<<std::endl;
        }
            std::cout<<"There are "<<count<<" prime number(s) between 0 and "<<f <<"."<<std::endl;
            std::cout<<"Would you like to see all the numbers? - (Y)es or (N)o? ";
            std::cin>>repeat2;
        if(repeat2=='Y')
        {
            
                    
            std::cout<<"The number(s) are ";
            printPrimeNumbers(f);
            std::cout<<" "<<std::endl;
        }
        do
        {
        	std::cout<<"Would you like to continue - (Y)es or (N)o? ";
            std::cin>>repeat;
        }while (repeat!='Y' && repeat != 'N');
        }}
    std::cout<<"Thank you for running my program - goodbye!"<<std::endl;  
    return 0;
}

bool isPrime(int num) //The purpose of this method is to see if a number is prime. This function is critical in this entire project.
{
    if(num == 2)
    {
        return true;
    }
    if(num < 2)
    {
        return false;
    }
    if(num % 2 == 0)
    {
        return false;
    }
    for(int p=3; (p*p)<=num; p+=2)
        {
            if(num % p == 0 )
            {
                return false;
            }
        }
    return true;
}

int printPrimeNumbers(int num)//The purpose of this function is to loop through isPrime and see all the prime numbers from zero and the number selcted
{
    for(int q=2; q<=num; q++)
        {
            if(isPrime(q))
            std::cout<<" "<<q;
        }
    return num;
}

void howManyPrime(int num, int & count)
{
    for(int q=2; q<=num; q++)
        {
            if(isPrime(q))
            count++;
        }
}


