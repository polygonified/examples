// Prints all of the arguments you pass in through recursion.
// Printed elements will be separated by spaces.
 
#include <iostream>
 
template <typename T>
void print(T t)
{
    std::cout << t << " ";
}
 
template <typename T, typename... Args>
void print(T t, Args... args)
{
    print(t);
    print(args...);
}
