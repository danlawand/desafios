#include <bits/stdc++.h>

using namespace std;

int main() {
    string w;
    int l;

    cin >> w;
    l = w.length();

    int alpha[26];

    for (int i = 0; i < 26; i++) {
        alpha[i] = 0;
    }

    int impares, pares;
    impares = 0;
    pares = 0;

    for (int i = 0; i < l; i++) {
        alpha[w[i]-65] += 1;
    }

    for (int i = 0; i < 26; i++) {
        if (alpha[i]%2 != 0) {
            impares += 1;
            if (impares > 1) {
                break;
            }
        } else if (alpha[i] > 0) {
            pares += 1;
        }
    }

    int index_front, index_back;
    index_front = 0;
    index_back = l-1;

    if (l%2 == 0 && impares == 0) {
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < alpha[i]/2; j++) {
                w[index_front] = char(65+i);
                w[index_back] = char(65+i); 
                index_front++;
                index_back--;
            }
        }
        cout << w <<endl;
    } else if (l%2 != 0 && impares == 1) {

        for (int i = 0; i < 26; i++) {
            if (alpha[i]%2 != 0) {
                w[int(l/2)] = char(65+i);
                alpha[i] -= 1;
            }
            for (int j = 0; j < alpha[i]/2; j++) {
                w[index_front] = char(65+i);
                w[index_back] = char(65+i); 
                index_front++;
                index_back--;
            }
        }
        cout << w <<endl;

    } else {
        cout << "NO SOLUTION" << endl;
    }
}