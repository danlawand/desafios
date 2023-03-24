// ideia é :
// h ---------------- h + (distancia_da_soma_de_corrente_de_ar)

#include <bits/stdc++.h>

using namespace std;

/*
* Esse programa por enquanto, calcula o quanto o glider andará dado um ponto inicial.
*
*/


// dado um ponto, calcular a distância que eu chegarei no chão
long long calcula_distanci_percorrida(long long h, long long n, long long air_flow[][2], long long departure_point) {
    long long actual_point = departure_point;

    long long fall = 0;
    for (int i = 0; i < n && h > 0; i++) {
        cout << "departure: " << departure_point << "--- actual_point: " << actual_point << " ---- h: " << h << endl;
        cout << "air_flow (xi, xf): " << air_flow[i][0] << ", " << air_flow[i][1] << endl;
        if (actual_point >= air_flow[i][0]) {
            if (actual_point < air_flow[i][1]) {
                actual_point = air_flow[i][1];
                cout << "inside air_flow: actual_point changed: " << actual_point << endl;
            } else {
                cout << "actual_point not changed. It's further." << endl;
            }
        } else {
            fall = air_flow[i][0] - actual_point;
            if (h - fall >= 0 ) {
                h = h - fall;
                actual_point = air_flow[i][0];
                if (h > 0) {
                    actual_point = air_flow[i][1];
                }
            } else {
                actual_point += h;
                h = 0;
            }
            cout << "outside air_flow: actual_point changed: " << actual_point << endl;
            cout << "outside air_flow: h changed: " << h << endl;
        }
        cout << endl;
    }
    if (h > 0) {
        actual_point += h;
        h = 0; 
    }
    return actual_point;
}



int main() {
    long long n, h;

    cin >> n >> h;

    long long air_flow[n][2];
    long long last_air_flow_point = 0;
    long long soma_das_distancias_de_air_flow = 0;

    for (int i = 0; i < n; i++) {
        cin >> air_flow[i][0] >> air_flow[i][1];

        if (last_air_flow_point < air_flow[i][1]) last_air_flow_point = air_flow[i][1];

        soma_das_distancias_de_air_flow += air_flow[i][1] - air_flow[i][0];
    }
    
    long long ini = 1;
    cout << calcula_distanci_percorrida(h, n, air_flow, ini) << endl;

}