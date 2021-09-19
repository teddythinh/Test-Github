#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double c, n, a[1000], sum, count = 0, avg, ans;
    cin >> c;

    for(int i = 0; i < c; i++) {
        cin >> n;
        for(int j = 0; j < n; j++) {
            cin >> a[j];
            sum = sum + a[j];
            avg = sum / n;
            if(a[j] > avg) {
                count++;
            }
            ans = (count / n) * 100;
        }
        for(int j = 0; j < n; j++) {
            if(a[j] > avg) {
                count++;
            }
            ans = (count / n) * 100;
        }
        cout << fixed << setprecision(3) << ans << "%" << endl;
        sum = 0;
        avg = 0;
        count = 0;
        ans = 0;
    }
    return 0;
}