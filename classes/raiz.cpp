#include <bits/stdc++.h>

using namespace std;

int binary_search(int n, int initial, int end) {    
    
    if (initial == end) {
        if (initial * initial == n) {
            return initial;
        }
        return -1;
    }
    int middle = (end + initial)/2;

    if (middle*middle == n) {
        return middle;
    }
    else if (n > middle*middle) {
        return binary_search(n, middle-1, end);
    } else {
        return binary_search(n, initial, middle+1);
    }
}

int main() {
    cout << binary_search(4, 0, 4) << endl;
    cout << binary_search(2, 0, 2) << endl;
    cout << binary_search(10000, 0, 10000) << endl;
    cout << binary_search(25, 0, 25) << endl;
}