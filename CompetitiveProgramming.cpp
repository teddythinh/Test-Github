#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

typedef long long ll;

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        if (b >= 3*a) cout << a << endl;
        else if (a <= b && b < 3 * a) {
            int x = 0;
            x =
        }


        // if(a == b) {
        //     cout << a/2 << endl;
        // }
        // else if(a == 0 || b == 0) cout << 0 << endl;
        // else if(a == 4 || b == 4) cout << 0 << endl;
        // else {
        //     ll temp1 = (a<b)?a:b;
        //     ll temp2 = a + b - temp1;
        //     // temp1 *= 3;
        //     int res = 0;
        //     while(temp2 > temp1 && (temp1!=0 && temp2 != 0)) {
        //          temp2 -= 3;
        //          temp1 -= 1;
        //          res+= 1;
        //     }
        //     while(temp1> temp2 && (temp1!=0 & temp2 != 0)) {
        //         temp2 -= 1;
        //         temp1 -= 3;
        //         res += 1;
        //     }
        //     if(temp1 == temp2 && temp1 != 0) res+= temp1/2;
        //     cout << res << endl;
        // }
    }
}