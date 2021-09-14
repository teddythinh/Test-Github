#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if((c - b > d) || (c - a > d))
    {
        cout << "No";
    }
    else cout << "Yes";
    return 0;
}