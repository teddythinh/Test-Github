#include <iostream>
using namespace std;
int main(){
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    if(a != 0 && b != 0 && c != 0 && (a + b + c) >= n && 3 <= n){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}