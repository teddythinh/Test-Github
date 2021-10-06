#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

void fizzBuzz(int n) {
    for(int i = 1; i <= n; i++) {
        if (i % 5 == 0 && i % 3 == 0) cout << "FizzBuzz" << endl;
        else if (i % 3 == 0) cout << "Fizz" << endl;
        else if (i % 5 == 0) cout << "Buzz" << endl;
        else cout << i << endl;
    }
}

void ngu(int n) {
    for(int i =  0; i < n; i++){
    
    }
}

int main()
{
    int n;
    cin >> n;
    fizzBuzz(n);

    return 0;
}
