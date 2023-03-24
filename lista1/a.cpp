#include <bits/stdc++.h>

using namespace std;

long long count_intervals(long long a[], long long n, long long s) {
    long long n_intervals = 1;

    long long sum_interval = a[0];

    for (int i = 1; i < n; i++) {
        
        if (sum_interval + a[i] <= s) {
            sum_interval += a[i];
        } else {
            sum_interval = a[i];
            if (a[i] > s) return -1;
            n_intervals++;
        }
    }
    return n_intervals;
}

long long binary_search(long long a[], long long n, long long k, long long ini, long long end) {
    if (k == 1) {
        return end;
    }
    if (ini == end) {
        return ini;
    }


    long long middle = (ini + end)/2;
    long long c = count_intervals(a, n, middle);
    long long novo;

    if (c == -1 || c > k) {
        return binary_search(a, n, k, middle+1, end);

    } else {

        novo = binary_search(a, n, k, ini, middle);
        return novo;
    }
}


int main() {
    long long n, k;
    cin >> n >> k;

    long long a[n];
    long long somaTotal = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        somaTotal += a[i];
    }
    long long numero = binary_search(a, n, k, 1, somaTotal); 
    cout << numero << endl;
}
