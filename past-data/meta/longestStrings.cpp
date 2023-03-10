#include <iostream>
#include <vector>

using namespace std;

vector<string> solution(vector<string> inputArray) {
    int Max = -1;
    int n = inputArray.size();
    int n_max = 0;
    int i_max[n];
    int j = 0;
    int n_letras;

    j = -1;
    for (int i = 0; i < n; i++) {
        i_max[i] = 0;
        n_letras = inputArray[i].size();
        if (Max < n_letras) {
            n_max = 0;
            Max = n_letras;
        }
        if (Max == n_letras) {
            j++;
            i_max[j] = i;
            n_max++;
        }
    }
    vector<string> words(n_max);
    int k = 0;
    for (int i = j-n_max+1; i <= j; i++) {
        words[k] = inputArray[i_max[i]];
        k++;
    }

    return words;
}

int main() {
    vector<string> input = {"aa", "aba", "ad",  "vcd",  "aba"};
    // cout << input[0].size() << endl;
    // solution(input);
    vector<string> words = solution(input);
    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << endl;
    }
}


// std::vector<std::string> r, solution(std::vector<std::string> a) {
//     int b=0;
//     for (s:a) if (s.size()>b) b=s.size();
//     for (s:a) if (s.size()==b) r.push_back(s);
//     return r;
// }