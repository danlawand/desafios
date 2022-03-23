#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    int soma[n];

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        soma[i] = a + b;
    }
    for (int i = 0; i < n; i++) {
        cout << soma[i] << endl;
    }
}