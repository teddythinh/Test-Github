#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

long long revers(long long a) {
    stringstream ss;
    string temp;
    ss << a;
    temp = ss.str();
    reverse(temp.begin(), temp.end());
    return stoll(temp);
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    int res = 0;
    for (int i = a; i < ceil(sqrt(a))*ceil(sqrt(a)); i++)
    {
        if(i % 10 != 0) {
            long long sa = sqrt(i);
            if(sa*sa == i) {
                long long rev = revers(i);
                long long sre = sqrt(rev);
                if(sre * sre == rev) {
                    res++;
                }
            }
        }
    }
    for (long long i = ceil(sqrt(a)); i <= sqrt(b); i++)
    {
        if(i % 10 != 0 && i*i <= b) {
            long long s = revers(i*i);
            long long sa = sqrt(s);
            if(sa*sa == s) {
                res++;
            }
        }
    }
    cout << res << endl;
}

    