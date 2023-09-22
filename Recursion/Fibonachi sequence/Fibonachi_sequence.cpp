#include <iostream>

using namespace std;

// Declaring an int recursion function that returns an int
int fibonachi(int n)
{
    // Declaring the base case that is if n==1 return 1 and if n==0 return 0
    if (n <= 1)
    {
        return n;
    }

    // Running the last i.e if f(n-1) and getting the answer
    int last = fibonachi(n - 1);
    // Running the slast i.e if f(n-2) and getting the answer
    int slast = fibonachi(n - 2);

    // Returning the last and slast sum
    return last + slast;
}

int main()
{
    int n = 4;
    int fib = fibonachi(n);
    cout << fib;

    return 0;
}