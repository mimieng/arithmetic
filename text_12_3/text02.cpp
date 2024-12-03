#include<iostream>
using namespace std;
int n, a[105];
int main()
{
    cin >> n;
    while (n--) {
        int m, sum = 0;
        cin >> m;
        for (int i = 1; i <= m; i++)cin >> a[i];
        for (int i = 1; i <= m; i++)
            for (int j = i; j <= m; j++)
                for (int k = j; k <= m; k++)
                    if (a[i] + a[j] == a[k])
                        sum++;
        cout << sum << endl;
    }
    return 0;
}