#include <iostream>

int main(){

    int age;

    std::cout<<"Enter your age: ";
    std::cin>>age;

    if(age >= 100){
        std :: cout << "You are too damn old to enter this site!!!";
    }
    else if(age >= 18){
        std :: cout << "Welcome to this site!!!";
    }
    else if(age < 18 && age > 0){
        std :: cout << "Oops grow older till 18 and then enter!!!";
    }
    else if(age < 0){
        std :: cout << "Whoah! You haven't even been born yet!!!";
    }

    return 0;
}