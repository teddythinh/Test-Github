#include <iostream>
using namespace std;

// Function to calculate triangle area with given base and height
double triangleArea(double base, double height)
{
    return (base * height) / 2;
}

int main(){
    double base, height;
    cin >> base >> height;
    cout << triangleArea(base, height) << endl;
    return 0;
}