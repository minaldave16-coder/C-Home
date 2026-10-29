#include <iostream>

int main(){
    //integer(whole number included)
    int age = 21;
    int year = 2023;
    int days = 7;

    std :: cout << "This is integer" <<'\n';

    std :: cout << days <<'\n';
    std :: cout << year <<'\n';
    std :: cout << age <<'\n';

    //double(number including decimal)
    double price = 10.99;
    double cgpa = 2.5;
    double temprature = 25.14;

    std :: cout << "This is double" <<'\n';

    std :: cout << price <<'\n';
    std :: cout << cgpa <<'\n';
    std :: cout << temprature <<'\n';

    //char(single characters)
    char grade = 'A';
    char initial = 'C';
    char dollarSign = '$';

    std :: cout << "This is a character" <<'\n';

    std :: cout << grade <<'\n';
    std :: cout << initial <<'\n';
    std :: cout << dollarSign <<'\n';

    //boolean
    bool student = false;
    bool power = true;
    bool forSale = false;

    std :: cout << "This is boolean" <<'\n';

    std::cout << std::boolalpha; 
    std :: cout << student <<'\n';
    std :: cout << power <<'\n';
    std :: cout << forSale <<'\n';

    return 0;
}
