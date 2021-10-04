#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    string a, temp1, temp2;
    cin >> n;
    while(n--){
        cin >> a;
        int ans;
        if(a == "P=NP") cout << "skipped" << endl;
        else{
            stringstream ss(a);
            getline(ss, temp1, '+');
            getline(ss, temp2);
            ans = stoi(temp1) + stoi(temp2);
            cout << ans << endl;
        }
    }
}