#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, a[101];
    float sum, avg, flag = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] < 0) continue;
        flag++;
        sum += a[i];
        
    }
    avg  = sum / flag;
    cout << avg << endl;
    return 0;
}