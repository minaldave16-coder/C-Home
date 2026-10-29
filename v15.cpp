#include <iostream>

int main(){

    //&& = check if two conditions are true
    // || = che k if atleast one of the conditions is true
    // ! = reverse the logical state of operand.. acts as a not gate

    int temp , number;

    std::cout<<"Enter temprature: ";
    std::cin>>temp;

    if(temp > 0 && temp < 30){
        std::cout<<"The  temprature is good!\n";
    }
    else if(temp <= 0 || temp >= 30){
        std::cout<<"The temprature is bad!!\n";
    }

    std::cout<<"Enter number: ";
    std::cin>>number;

    if(number % 2 != 0){
        std::cout<<"The number is odd number.";
    }
    else{
        std::cout<<"The number is even";
    }

    return 0;
}