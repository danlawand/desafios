#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (m == 0 || n == 0) {
        cout << 0 <<endl;
    } else if (n >= m*2) {
        cout << m << endl;
    } else if (m >= n*2) {
        cout << n << endl;
    } else {
        cout << (n+m)/3 << endl;
    }
}
