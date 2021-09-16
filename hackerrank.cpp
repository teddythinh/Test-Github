#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, x, flag = 1, start = 0;
    cin >> n;
    vector<int> a;
    while (cin >> x)
    {
        a.push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        if (i != a[start])
        {
            flag = 0;
            cout << i << endl;
        }
        else if (start + 1 == a.size() && a[start] != n)
        {
            for (int j = i; j <= n; j++)
                cout << i << endl;
            break;
        }
        else
            start++;
    }

    if (flag == 1)
        cout << "good job";
    return 0;
}