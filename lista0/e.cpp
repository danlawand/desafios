#include<bits/stdc++.h>

using namespace std;

int main() {
    long long t, n, q, ai, x, zero;
    long long soma = 0, n_impares = 0, n_pares = 0;

    cin >> t;
    for (long long i = 0; i < t; i++) {
        cin >> n >> q;

        for (long long j = 0; j < n; j++) {
            cin >> ai;
            soma += ai;
            if (ai%2 == 0) n_pares++;
            else n_impares++;
        }

        for (long long j = 0; j < q; j++) {
            cin >> zero >> x;

            if (zero == 0) {
                soma += n_pares*x;
                if (x%2 != 0) {
                    n_impares += n_pares;
                    n_pares = 0;
                }
            } else {
                soma += n_impares*x;
                if (x%2 != 0) {
                    n_pares += n_impares;
                    n_impares = 0; 
                }
            }

            cout <<soma<< endl;
        }
        soma = 0;
        n_impares = 0;
        n_pares = 0;
    }
}
