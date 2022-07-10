// Prints an array.
 
#include <iostream>
 
template <class T>
void print(std::initializer_list<T> list)
{
    std::cout << "{ ";
 
    int i = 0;
    for (auto elem : list)
    {
        std::cout << elem;
        if (i != size(list) - 1)
        {
            std::cout << ',';
        }
        std::cout << ' ';
 
        i++;
    }
 
    std::cout << "}";
}
