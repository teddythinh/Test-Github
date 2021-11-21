#include <iostream>
#include <string>
using namespace std;

int main()  {
    int n;
    cin >> n;
    for(int i = 0; i < n;i++) {
        int g;
        cin >> g;
        int a[g];
        for(int j = 0; j < g; j++) {
            cin >> a[j];
        }
        // print the element that is not repeated in the array
        int flag = 0;
        for(int j = 0; j < g; j++) {
            for(int k = j+1; k < g; k++) {
                if(a[j] == a[k]) {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0) {
            cout << a[0] << endl;
        }
        
        
    }
    return 0;

}