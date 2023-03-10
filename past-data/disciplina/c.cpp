#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int max_subset_sum(int* sequence, int n) {
    int max = INT_MIN;
    int peso = 0;

    for (int i = 0; i < n; i++) {
        peso = peso + sequence[i];
        if (max < peso) max = peso;
        if (peso < 0) peso = 0;
    }
    return max;
}

int main() {
    int t, n;
    int *sequence;
    cin >> t;
    int answ[t];
    for (int i = 0; i < t; i++) {
        cin >> n;
        sequence = new int [n];
        for (int j = 0; j < n; j++) {
            cin >> sequence[j];
        }
        answ[i] = max_subset_sum(sequence, n);
    }
    for (int i = 0; i < t; i++) {
        cout << answ[i] << endl;
    }
}