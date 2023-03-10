bool solution(int n) {
    int digits = log10(n) + 1;
    if (digits%2 != 0) return false;
    cout << "digits: " << digits << endl;
    cout << "digits/2: " << digits/2 << endl;
    
    int d1, d2, pot1, pot2;
    int sum1 = 0, sum2 = 0;
    
    for (int i = 1; i <= digits/2; i++) {
        
        pot1 = int(pow(10,i-1+digits/2));
        pot2 = int(pow(10, i-1));

        d1 = floor(n/pot1);
        d2 = floor(n/pot2);

        d1 = d1 % 10;
        d2 = d2 % 10;

        sum1 += d1;
        sum2 += d2;

    }

    return sum1 == sum2;
    
}


// bool solution(int n) {
//     int digits = (int)log10(n) + 1;
//     int sum1 = 0, sum2 = 0;
    
    
//     for (int x = 0; n > 0; n /= 10, x++) {
//         if (x < digits / 2)
//             sum1 += n % 10;
//         else
//             sum2 += n % 10;
//     }
    
//     return sum1 == sum2;
// }