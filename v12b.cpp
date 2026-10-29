#include <iostream>

int main(){

   char grade;
   std::cout<<"Enter your Grade(A-F): ";
   std::cin>>grade;

   switch(grade){
      case 'A':
      std::cout<<"You did really great";
      break;
      case 'B':
      std::cout<<"You did good";
      break;
      case 'C':
      std::cout<<"You could do a little better";
      break;
      case 'D':
      std::cout<<"You Should try doing something nice";
      break;
      case 'E':
      std::cout<<"You just passed";
      break;
      case 'F':
      std::cout<<"Cool!! You failed";
      break;
      default:
      std::cout<<"Please enter letter from (A-F) only";
      break;
   }

   return 0;
}