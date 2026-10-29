#include <iostream>

int main(){
    //do-while loop = do some block of code first , then repeat again if the condition is true
    // --> say if a condition is  true & the code is supposed to be executed only once , then it will be executed twice.

    int number;
    do{
        std::cout<<"Enter a positive number: ";
        std::cin >> number;
    }while(number < 0);

    std::cout<<"The number is: "<<number;
    //it will be repeated till i enter a positive number

    return 0;
}