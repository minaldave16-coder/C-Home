#include <iostream>

int main()
{
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            std::cout << j << ' ';
        }
        std::cout<<'\n';
    }

    return 0;
}