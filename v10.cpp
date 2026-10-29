#include <iostream>
#include <cmath>

int main(){

    double a , b , c;

    std::cout<<"Enter side A: ";
    std::cin>>a;

    std::cout<<"Enter side B: ";
    std::cin>>b;

    c = sqrt(pow(a , 2) + pow(b , 2));

    std::cout<<"The hypotenuse of this triangle is: "<<c;

    return 0;
}