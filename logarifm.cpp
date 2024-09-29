#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    
    double ln = 0;
    int sign = 1;
    for (int i = 1; i <= n; ++i) {
        ln += sign * 1.0 / i;
        sign *= -1;
    }
    cout << ln << endl;
}