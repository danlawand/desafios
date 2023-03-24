/*
INPUT
5  ----- t

1  ----- n
a  ----- string

4
down

10
codeforces

3
bcf

5
zzzzz
*/

/*
OUTPUT
1

23

19

6

26
*/


#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, max, n, c;
    cin >> t;
    string word;
    for (int i = 0; i < t; i++) {
        cin >> n;
        cin >> word;
        max = 0;
        for (int j = 0; j < n; j++)
        {
            c = int(word[j]-96);
            if (c > max) max = c;
            if (max == 26) {
                break;
            }
        }
        cout << max << endl;
    }

}
