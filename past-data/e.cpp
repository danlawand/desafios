#include <iostream>

using namespace std;

int earliest(int* ants_position, int l, int n) {
    int left, rigth;
    left = 0;
    rigth = 0;
    double middle;
    middle = l/2;
    for (int i = 0; i < n; i++) {
        if (double(ants_position[i]) <= middle) {
            if(left <= ants_position[i]) {
                left = ants_position[i];
            }
        }
        if (double(ants_position[i]) > middle) {
            if (rigth <= l - ants_position[i]) {
                rigth = l - ants_position[i];
            }
        }
    }
    return max(left, rigth);
}

int main() {
    int t, l, n;
    int* ants_position;
    cin >> t;
    int early[t];
    int last[t];
    for (int i = 0; i < t; i++) {
        cin >> l >> n;
        ants_position = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> ants_position[j];
        }
        early[i] = earliest(ants_position, l, n);
        last[i] = lastest(ants_position, l, n);
    }
    for (int i = 0; i < t; i++) {
        cout << early[i] << endl;
    }
}