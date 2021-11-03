#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
// Complete the solve function below.
void solve(vector<int> arr) {
    int n = arr.size();
    int max_sum = 0;
    int max_index = 0;
    int min_index = 0;
    int min_sum = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum > max_sum){
            max_sum = sum;
            max_index = i;
        }
        if(sum < min_sum){
            min_sum = sum;
            min_index = i;
        }
    }
    cout << max_index + 1 << " " << min_index + 1 << endl;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    solve(arr);
    return 0;
}