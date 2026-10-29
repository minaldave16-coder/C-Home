#include <iostream>

int main(){

    double temp;
    char unit;

    std::cout<<"*****TEMPRATURE*CONVERSION*PROGRAM*****";
    std::cout<<"F = Farenheit\n";
    std::cout<<"C = Celcius\n";
    std::cout<<"What unit would you like to convert??: ";
    std::cin>>unit;

    if(unit == 'F' || unit == 'f'){
        std::cout<<"Enter the temprature in Celcius: ";
        std::cin>>temp;

        temp = ((9/5)*temp) + 32.0;
        std::cout<<"Temprature is: "<<temp<<"F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout<<"Enter the temprature in Farenheit: ";
        std::cin>>temp;

        temp = (5/9)*(temp - 32.0);
        std::cout<<"Temprature is: "<<temp<<"C\n";
    }
    else{
        std::cout<<"Enter a valid input";
    }
    std::cout<<"***************************************";

    return 0;
}