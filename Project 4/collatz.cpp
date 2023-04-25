// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// rkapadia

#include <iostream>


int main()
{
    
    int upperValue(0);
    int lowerValue(0);
    int sequence(0);
    int size(0);
    int total(0);
    int number(0);
    char answer = 'Y';
    do{

        
        upperValue = 0;
        lowerValue = 0;
        size = 0;
        total = 0;
        
    std::cout<<"Please enter a lower value"<<std::endl;
    std::cin>>lowerValue;
    std::cout<<"Please enter an upper value"<<std::endl;
    std::cin>>upperValue;
    
    for (int i= lowerValue; i<=upperValue; i++)
    {
        
        int n = i;
        sequence = 0;
        
        while(n!=1){
            sequence++;
            if (n % 2 != 0)
                {
                    
                    n = 3 * n +1;
                }
            else
                {
                    n = n/2;
                    
                }
        }
        if (sequence> size)
        {
            number = i;
            size=sequence+1;
            total=n;
        }

    }
    std::cout<<"The maximum cycle length between "<<lowerValue<< " and "<< upperValue<<" is: "<<size<<std::endl;
    std::cout<<"The value between "<<lowerValue<< " and "<< upperValue<<" is: "<<number<<std::endl;

        do
        {
            std::cout<<"Would you like to enter another number (Y or N)"<<std::endl;
            std::cin>>answer;
        }while (answer!='Y' && answer != 'N');

    }while (answer == 'Y');
    
    return 0;
}


