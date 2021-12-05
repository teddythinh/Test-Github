#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <iomanip>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int64_t n, b;
    cin >> n;
    vector<int64_t> a;
    while(n--) {
        cin >> b;
        a.push_back(b);
    }
    string s;
    cin >> s;
    int64_t sum = 0;
    int i = 0;
    int j = 0;
    while (i < s.size()) {
        while( j < a.size()) {

            if(s[i] == '0') {
                if(a[j] % 2 == 0) a[j] /= 2;
            }
            else if(s[i] == '1') {
                if(a[j] % 2 == 1) a[j] -= 1;
            }
            sum += a[j];
            j++;
        }
        cout << sum << endl;
        i++;
    }
}

// int main(){
//     int n;
//     string mine;
//     cin >>  mine;
//     cin >> n;
//     //vector<pair<int, int> value;
//     int min_pos = 0; long long min_value = 10000000000;
//     int swap_pos = 0;
//     for (int i = 0; i < mine.size(); i++){
//         long long value; int temp_swap_pos;
//         if (i == 0){
//             value = mine[i] + mine[i + 1];
//             temp_swap_pos = i + 1;
//         }
//         else if (i == mine.size() - 1){
//             value = mine[i] + mine[i - 1];
//             temp_swap_pos = i - 1;
//         }
//         else{
//             value = (mine[i - 1] <= mine[i + 1] ? mine[i - 1] + mine[i] : mine[i] + mine[i + 1]);
//             temp_swap_pos = (mine[i - 1] <= mine[i + 1] ? i - 1 : i + 1);
//         }
//         if (min_value > value || (min_value == value && mine[min_pos] > mine[i])){
//             min_pos = i;
//             min_value = value;
//             swap_pos = temp_swap_pos;
//         }
//     }
//     while (n--){
//         cout << mine[min_pos];
//         swap(min_pos, swap_pos);
//     }
// }



// int main() {
//     // freopen("2.in", "r", stdin);
//     // freopen("2.out", "w", stdout);

//     int A, H;
//     cout << fixed << setprecision(8);
//     cin >> A >> H;
//     // while(cin >> A >> H){
//         if(A == 100) cout << (double)((H-H/6)*100) << endl;
//         else if(A == 0) cout << (double)((H-H/3)*100) << endl;
//         else if(A < 100 && A > 0) {
//             double a = (100.0-A)*6/H;
//             double b = A-a*H/6.0;
//             //H/6 - H/3
//             double Amax = (H+b/a)*a/2.0;
//             double res;
//             if(Amax > (double)100) {
//                 res = (double)(H-H/3)*100;
//             }
//             else if(Amax <= (double)100 && Amax > (double)A)
//                 res = (double)((H-(Amax - b)/a)*Amax);
//             else if(Amax <= (double)A)
//                 res = (double)((H-H/6)*A);
//             cout << res << endl;
//         }
        // else if(A == 100)
        //     cout << (double)((H-H/6)*100) << endl;
        // else if(A == 0) {
        //     cout << (double)((H-H/3)*100) << endl;
        // }
    // }
// }