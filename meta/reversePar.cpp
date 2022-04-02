#include <iostream>

using namespace std;


std::string solution(std::string s) {
    int n = s.size();

    std::string aux1 = "";
    std::string aux2 = "";
    std::string aux3 = "";

    int k, j, i, z;

    int n_par = 0;
    int primeiro_fecha = -1;

    for (int k = 0; k < n; k++) {
        if (s[k] == ')') n_par++;
    }

    while(0 < n_par) {
        n = s.size();
        primeiro_fecha = -1;

        for (int k = 0; k < n && primeiro_fecha < 0; k++) {
            if (s[k] == ')') primeiro_fecha = k;
        }

        j = primeiro_fecha-1;
        i = primeiro_fecha+1;

        while(s[j] != '(') {
            aux2.push_back(s[j]);
            j--;
        }

        j--;
        z = 0;
        while (z <= j) {
            aux1.push_back(s[z]);
            z++;
        }

        while (i < n) {
            aux3.push_back(s[i]);
            i++;
        }

        s = aux1+aux2+aux3;
        aux1 = "";
        aux2 = "";
        aux3 = "";
        n_par--;
    }
    return s;
}




int main() {
    cout << solution("foo(bar(baz))blim") << endl;
}

// std::string solution(std::string s) {
//   stack <int> st;
//   for (int i = 0; i < s.size(); ++i) {
//     if (s[i] == '(')
//       st.push(i);
//     if (s[i] == ')') {
//       int start = st.top(); st.pop();
//       reverse(s.begin() + start + 1, s.begin() + i);
//     }
//   }
//   string ans;
//   for (int i = 0; i < s.size(); ++i)
//     if (s[i] !=  '(' && s[i] != ')')
//       ans = ans + s[i];
//   return ans;
// }
