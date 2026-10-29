#include <iostream>
#include <string>

int main(){

    std::string name;

    std::cout<<"Enter Your Name: ";
    std::getline(std::cin , name);

    if(name.length() > 50){
        std::cout<<"Your name is too long.";
    }
    else{
        std::cout<<"Hello "<<name<<"\n";
    }

    if(name.empty()){
        std::cout<<"Please enter your name";
    }
    else{
        std::cout<<"How are you "<<name<<"\n";
    }

    name.clear();
    std::cout<<"Hello "<<name<<"\n";

    name.append("Engineer");
    std::cout<<"Your username will be "<<name<<"\n";

    std::cout<<name.at(0)<<"\n";//Defines what is the value of string at that point

    name.insert(0 , "$");
    std::cout<<name<<"\n";

    std::cout<<name.find(' ')<<"\n";

    name.erase(0 , 4);//erases the value stored from index 0 to index 4
    std::cout<<name<<"\n";

    return 0;
}