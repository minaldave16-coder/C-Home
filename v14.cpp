#include <iostream>

int main(){

    //Ternary Operators ?: = Replacement to an if/else statement
    //condition ? exp1 : exp2;.................. exp1 executed if we have condition is true.. else exp2 is executed when the codition is false

    //int grade = 35;
    //grade >= 60 ? std::cout<<"You Pass!" : std::cout<<"You Fail";

   // int number = 6;
  //  number % 2 ? std::cout<<"ODD" : std::cout<<"EVEN";//Here it will check if number % 2 != 0 ... if true it will print odd..else it will print even

  bool hungry = true;
  std::cout<< (hungry ? "You are hungry" : "You are Full");

    return 0;
}