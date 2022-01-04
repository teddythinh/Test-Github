#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
#include <ctime>
#include <fstream>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (ceil((1.0 * n / 2 )) < k) cout << "-1\n";
        else {
            int count = 0;
            bool flag = false;
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) {
                    int check = 1;
                    for(int j = 0 ; j < n; j++) {
                        if (flag == false && check == 1 && j == 2 * count) {
                            cout << "R";
                            count++;
                            check = 0;
                            if (count == k) {
                                flag = true;
                                count = 0;
                            }
                        }
                        else cout << ".";
                    }
                }
                else {
                    for (int j = 0; j < n; j++) {
                        cout << ".";
                    }
                }
                cout << "\n";
            }
        }
    }
    return 0;
}