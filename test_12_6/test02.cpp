#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a = 0, b = 0, c;
    cin >> c;
    for (int i = 1;  i <= c; i++) {
        b = i;
        for (int j = 1;  j <= c; j++) {
            a = j;
            
            if (a * a + b * b == c * c && a>0 && b>0 && c>0) {
               
                break;
            }
            else
            {
                continue;
            }
        }
    } 
    cout << a << " " << b;
    return 0;
}