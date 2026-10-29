#include <iostream>

int main(){
    //The const keyword specifies that a variables's value is constant , tells the compiler to prevent from modifying anything in it
    //read-only

    const double PI = 3.14159;
    const double SPEED_LIGHT = 300;

    double radius = 10.34;
    double circumference = 2 * PI * radius;

    std :: cout << circumference << '\n';
    std :: cout << SPEED_LIGHT << '\n';

    return 0;
} 