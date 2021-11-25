#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate total of fibonacci series
int fibonacci(int n)
{
    int a = 0, b = 1, c = 0;
    for (int i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main()  {
   
}
