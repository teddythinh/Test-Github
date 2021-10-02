#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
	vector<pair<string, int>> a, b;
	 

//     string a;
//     cin >> a;
//     int count = 0;
//     if(a == '_'){
//         a[]
//     }
//     int c = stoi(a);
//     if (c % 25 == 0)
//     {
//         count++;   
//     }
//     cout << count;
    const int MOD = pow(10, 9) + 7;

    long long n;
    vector<int> a;
    long long x;
    cin >> n;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
        ans += (x * (i + 1)) % MOD;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            ans += ((long long)gcd(i + 1, j + 1) % MOD) * ((long long)gcd(a[i], a[j]) % MOD) * 2;
        }
    }
    cout << ans;

    return 0;
}