#include <iostream>
#include <vector>

typedef std :: vector <std:: pair <std :: string , int >> pairlist_t;
typedef std :: string text_t;
typedef int num_t;


int main(){

    text_t firstName = "Bro";
    num_t age = 21;

    std :: cout << firstName << " you are " << '\n';
    std :: cout << age << " years old" << '\n';

    return 0;
}