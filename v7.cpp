#include <iostream>

int main(){

    //type conversion = conversion of a value of one data type to another
    //       Implicit = auttomatic
    //       Explicit = precede the value with new data type

    double x = (int) 3.14;
    std:: cout << x;

    int correct = 8;
    int questions = 10;
    int score = correct / (double)questions * 100;
    std :: cout << '\n' << score << '%';

    return 0;
}