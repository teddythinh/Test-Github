#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cmath> 
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int ans;
    if(b % 2 == 0){
        ans = ((b - a) + 1) / 2;
    }
    else {
        ans = ((b - a) + 2) / 2;
    }
    cout << ans;
    return 0; 
}