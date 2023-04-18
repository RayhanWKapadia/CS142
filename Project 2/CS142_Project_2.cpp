// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// rkapadia
#include <iostream>
#include <iostream>
int main() {
    std::string name;
    std::string color;
    int answer1(0);
    double answer2(0.0);
    std::cout<<"Welcome to Rayhan's Monty C++ Text-based Adventure!"<<std::endl;
    std::cout<<"WHAT is your name? ";
    std::cin>>name;
    std::cout<<"Welcome Sir "<<name<<"!"<<std::endl;
    std::cout<<"WHAT is the result of 1+1? ";
    std::cin>>answer1;
    if (answer1 == 2)
    {
        std::cout<<"CORRECT Sir "<<name<<"!"<<std::endl;
        std::cout<<"WHAT is the result of 2+2*10/(1+1)? ";
        std::cin>>answer2;
        if (answer2 == 12)
        {
            std::cout<<"CORRECT Sir "<<name<<"!"<<std::endl;
            std::cout<<"WHAT is your favorite color? ";
            std::cin>>color;
            if (color == "blue" || color=="Blue")
            {
                std::cout<<"CORRECT Sir "<<name<<"!"<<std::endl;
                std::cout<<"WHAT is the airspeed velocity of an unladen swallaow? ";
                std::cin>>answer1;
                if (answer1 % 2 == 0)
                {
                    std::cout<<"I...I don't know that!"<<std::endl;
                    std::cout<<"<BOING>"<<std::endl;
                    std::cout<<"The CPU Wizard is cast into the Gorge of Eternal Peril!"<<std::endl;
                    std::cout<<"Congratulations Sir "<<name<<" you won!!"<<std::endl;
                    std::cout<<"Thank you for playing my Monty C++ game Sir "<<name<<". Intermission..."<<std::endl;


                
                }
                else
                {
                    std::cout<<"Confused Look - I bet you code using namespace std;..."<<std::endl;
                    std::cout<<"<BOING>"<<std::endl;
                    std::cout<<"You have been cast into the Gorge of Eternal Peril!"<<std::endl;
                    std::cout<<"Thank you for playing my Monty C++ game Sir "<<name<<". Intermission...."<<std::endl;
                }
                
            }
            else
            {
                std::cout<<"Confused Look - I bet you code using namespace std;..."<<std::endl;
                std::cout<<"<BOING>"<<std::endl;
                std::cout<<"You have been cast into the Gorge of Eternal Peril!"<<std::endl;
                std::cout<<"Thank you for playing my Monty C++ game Sir "<<name<<". Intermission...."<<std::endl;
            }
        

        
        }
        else
        {
            std::cout<<"Confused Look - I bet you code using namespace std;..."<<std::endl;
            std::cout<<"<BOING>"<<std::endl;
            std::cout<<"You have been cast into the Gorge of Eternal Peril!"<<std::endl;
            std::cout<<"Thank you for playing my Monty C++ game Sir "<<name<<". Intermission...."<<std::endl;

        }
    }
    else
    {
        std::cout<<"Confused Look - I bet you code using namespace std;..."<<std::endl;
        std::cout<<"<BOING>"<<std::endl;
        std::cout<<"You have been cast into the Gorge of Eternal Peril!"<<std::endl;
        std::cout<<"Thank you for playing my Monty C++ game Sir "<<name<<". Intermission...."<<std::endl;


    }
    return 0;
}
