#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int n;
    cin >> n;
    
    for (int i = 0; i <= n; i++) {
        getline(cin, s);
        if (s.find("Simon says") != string::npos) {
            for(int j = 10; j < s.size(); j++){
                cout << s[j];
            }
        }
        else continue;
        cout << endl;
    }

    return 0;


}