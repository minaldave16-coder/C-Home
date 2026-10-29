#include <iostream>

//Namespace : Provides a solution for prevention of name conflicts in larger projects...Each entity needs a unique name.
//A namespace allows identically named entities as long as they have different namespaces.

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){
    // int x = 0;

    // std :: cout << x << '\n';
    std :: cout << first :: x << '\n';
    std :: cout <<second :: x << '\n';

    using namespace first;
    std :: cout << x << '\n';

    return 0;
}