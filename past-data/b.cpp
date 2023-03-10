#include <iostream>
#include <string>
using namespace std;

void calcula_sim_nao(string* map, int index) {
    int r, g, b;
    r = 0;
    g = 0;
    b = 0;
    for (int j = 0; j < 6; j++) {

        if (map[index][j] == 'r') {
            r = 1;
        } else if (map[index][j] == 'g') {
            g = 1;
        } else if (map[index][j] == 'b') {
            b = 1;
        } else if (map[index][j] == 'R' && r == 0) {
            cout << "NO" << endl;
            return;
        } else if (map[index][j] == 'G' && g == 0) {
            cout << "NO" << endl;
            return;
        } else if (map[index][j] == 'B' && b == 0) {
            cout << "NO" << endl;
            return;
        }
        if (r + g + b == 3) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}

int main() {
    int n, r, g, b;
    cin >> n;
    string map[n];
    for (int i = 0; i < n; i++) {
        cin >> map[i];
    }
    for (int i = 0; i < n; i++) {
        calcula_sim_nao(map, i);
    }
}