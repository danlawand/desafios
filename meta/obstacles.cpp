int solution(vector<int> a) {
    
    int n = a.size();
    if (n == 0) return 1;

    int max_number = *max_element(a.begin(), a.end());;
    int multiples[max_number+1];
        
    for (int i = 0; i <= max_number; i++) {
        multiples[i] = 1;
    }
    
    for (int i : a) {
        //factorization process
        for (int j = 2; j <= i; j++) {
            if (i%j == 0) {
                multiples[j] = 0;
            }
        }
    }
    
    for(int i = 2; i <= max_number; i++) {
        if (multiples[i]) return i;
    }

    return max_number+1;    
}