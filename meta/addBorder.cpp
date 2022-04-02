#include <iostream>

using namespace std;

// std::vector<std::string> solution(std::vector<std::string> picture) {
//     for(auto &s: picture)
//         s = "*"+s+"*";
//     picture.insert(picture.begin(), string(picture[0].size(),'*'));
//     picture.insert(picture.end(), string(picture[0].size(),'*'));
//     cout << string(s[0].size(),'*');
//     return picture;
// }


int main() {
    std::vector<std::string> picture = ["abc", "efg", "hij"];
    picture.insert(picture.begin(), string(picture[0].size(),'*'));
    picture.insert(picture.end(), string(picture[0].size(),'*'));
    // cout << string(s[0].size(),'*');
    cout << picture << endl;
}