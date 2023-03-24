#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, l , n, maximum , minimum, ant;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> l >> n;
        maximum = 0;
        minimum = 0;

        for (int j = 0; j < n; j++) {
            cin >> ant;

            if (maximum < max(ant, l - ant)) maximum = max(ant, l - ant);
            if (minimum < min (ant, l - ant)) minimum = min(ant, l-ant);
        }
        cout << minimum << " "<< maximum << endl;

    }

}
