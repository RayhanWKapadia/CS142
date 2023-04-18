// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// rkapadia
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
int main(int argc, const char * argv[]) {
    int shape;
    int side1(0);
    int side2(0);
    do{
        std::cout << "\n 1. Rhombus \n 2. Square \n 3. Rectangle \n 4. Triangle \n 5. Circle \n 6. Hexagon \n 7. Octagon \n 8. Leave program\n";
        ;
        std::cout<<"Pick a number: ";
        std::cin >> shape;
    if (shape == 3)
    {
        std::cout<<"Please enter the length: ";
        std::cin>>side1;
        std::cout<<"Please enter the width: ";
        std::cin>>side2;
        std::cout<<"The area of the rectangle is: " << side1*side2<<"\n";

        
    }
    else if (shape == 2)
    {
        std::cout<<"Please enter the side: ";
        std::cin>>side1;
        std::cout<<"The area of the square is: " << side1*side1<<"\n";

            
    }
    else if (shape ==1)
    {

        std::cout<<"Please enter the diagonal: ";
        std::cin>>side1;
        std::cout<<"Please enter the diagonal: ";
        std::cin>>side2;
        std::cout<<"The area of the rhombus is " <<(side1*side2)/2.0<<"\n";
    }
    
    else if (shape ==4)
    {

        std::cout<<"Please enter the base: ";
        std::cin>>side1;
        std::cout<<"Please enter the height: ";
        std::cin>>side2;
        std::cout<<"The area of the triangle is: " <<(0.5*side1*side2)<<"\n";
        
    }
    else if (shape ==5)
    {
        std::cout<<"Please enter the radius: ";
        std::cin>>side1;
        std::cout<<"The area of the circle is: " <<(side1*side1*M_PI)<<"\n";
    }
    else if (shape ==6)
    {
        int side1;
        std::cout<<"Please enter the side: ";
        std::cin>> side1;
        std::cout<<"The area of the hexagon is: " <<(((sqrt(3)*3)/2))*side1*side1<<"\n";

    }
    else if (shape ==7)
    {
        std::cout<<"Please enter the side: ";
        std::cin>> side1;
        std::cout<<"The area of the octagon is: " <<(2*(1+sqrt(2))*side1*side1)<<"\n";
    }
    } while (shape != 8);
}

