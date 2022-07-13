// Takes in a function and calls it.
// You can pass in arguments to the function after passing in the function.
// Returns the output of the function called.
 
template <typename T, typename... Args>
T invoke(T (*f)(Args...))
{
    return (*f)(Args...);
}
