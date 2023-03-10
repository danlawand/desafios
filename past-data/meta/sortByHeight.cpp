vector<int> solution(vector<int> a) {
    int n = a.size();
    
    vector<int> a1(a);
    
    
    
    sort(a1.begin(), a1.end());
    
    int j = -1;
    for (int i = 0; i < n and j == -1; i++) {
        if (a1[i] != -1) j = i;
    }
    
    for (int i = 0; i < n; i++) {
        if (a[i] != -1) {
            a[i] = a1[j];
            j++;
        }
    }
    return a;
}


// std::vector<int> t, solution(std::vector<int> a) {
//     for (x:a) if (x>-1) t.push_back(x);
//     sort(begin(t), end(t));
//     auto p = begin(t);
//     for (x:a) if (x>-1) x = *(p++);
//     return a;
// }