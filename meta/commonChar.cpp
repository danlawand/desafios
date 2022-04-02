#include <iostream>

using namespace std;

int solution(string s1, string s2) {
    int a[26];
    int b[26];
    int common = 0;
    // for (int i = 0; i < 26; i++) {
    //     a[i] = 0;
    //     b[i] = 0;
    // }
    for (int i = 0; i < s1.size(); i++) {
        a[s1[i]-'a']++;
    }
    for (int i = 0; i < s2.size(); i++) {
        b[s2[i]-'a']++;
    }


    for (int i = 0; i < 26; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 26; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 26; i++) {
        common += min(a[i], b[i]);
    }
    return common;
}

int main() {
    cout << solution("aaabbbccc", "abcdefghijklmnopqrstuvwxyz");

}

// int solution(std::string s1, std::string s2) {
//     int count1[26] = {0};
//     int count2[26] = {0};
    
//     for(char c: s1) ++count1[c-'a'];
//     for(char c: s2) ++count2[c-'a'];
    
//     int ret = 0;
//     for(int i=0; i<26; ++i)
//         ret += min(count1[i],count2[i]);
    
//     return ret;
// }
