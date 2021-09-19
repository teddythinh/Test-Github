#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    while (a != 1 || b != 2 || c != 3 || d != 4 || e != 5)
    {
        if (a > b)
        {
            swap(a, b);
            cout << a << " " << b << " " << c << " " << d << " " << e << endl;
        }
        if (b > c)
        {
            swap(b, c);
            cout << a << " " << b << " " << c << " " << d << " " << e << endl;
        }
        if (c > d)
        {
            swap(c, d);
            cout << a << " " << b << " " << c << " " << d << " " << e << endl;
        }
        if (d > e)
        {
            swap(d, e);
            cout << a << " " << b << " " << c << " " << d << " " << e << endl;
        }
    }
}