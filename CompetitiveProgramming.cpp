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

void solve() {
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
}

void solveB() {
    int t;
    cin >> t;
    int left, right, coin;
    vector<int> l, r, c;
    while(t--) {
        int n;
        cin >> n;
        int total = 0;
        for (int i = 0; i < n; i++) {
            cin >> left >> right >> coin;
            l.push_back(left);
            r.push_back(right);
            c.push_back(coin);
        }
        for(int i = 0; i < n; i++) {
            total += c[i];
            //cout << c[i] << " ";
            cout << total << "\n";
        }
        total = 0;
    }
    // while(t--) {
    //     int total = 0;
    //     for(int i = 0; i < c.size(); i++) {
    //         total += c[i];
    //     }
    //     cout << total << "\n";
    //     total = 0;
    // } 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solveB();
    
    return 0;
}