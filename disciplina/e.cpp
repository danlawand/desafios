#include <iostream>
using namespace std;


int main() {
    long t, l, n;
    long pn1, pn2;
    long menor_distancia = -1, maior_distancia = -1;
    cin >> t;
    long early[t];
    long last[t];
    for (long i = 0; i < t; i++) {
        cin >> l >> n;

        for (long j = 0; j < n; j++) {
            cin >> pn1;
            pn2 = pn1;

            // Menor distância à borda
            pn1 = min(pn1, l-pn1);
            if (pn1 > menor_distancia) {
                menor_distancia = pn1;
            }

            // Maior distância à borda
            pn2 = max(pn2,l-pn2);
            if (pn2 > maior_distancia) {
                maior_distancia = pn2;
            }
        }

        early[i] = menor_distancia;
        last[i] = maior_distancia;
        menor_distancia = -1;
        maior_distancia = -1;
    }
    for (long i = 0; i < t; i++) {
        cout << early[i] << " " << last[i] << endl;
    }
}