# Binary Search (March 22)

## Classic Problems
### 1. Given a sorted array a = (a1, a2, a3, ..., a_n) and a value x, find a_i = x.

Naive solution: iterates throw a.

Binary search: 


```cpp
binary_search(int x, int initial, int end, int a[]) {    
    
    if (initial == end) {
        if (a[initial] == x) {
            return initial;
        }
        return -1;
    }
    middle = (end + initial)/2;

    if (a[middle] == x) return middle;
    else if (x > a[middle]) {
        // initial = middle
        binary_search(x, middle-1, end, a);
    } else {
        // x < a[middle]
        // end = middle
        binary_search(x, initial, middle+1, a);

    }
}
```


### 2. Given n <= 10^18, find x = floor(sqrt(n)), x*x <= n


```
binary_search(int n, int initial, int end) {    
    
    if (initial == end) {
        if (initial * initial == n) {
            return initial;
        }
        return -1;
    }
    middle = (end + initial)/2;

    if (middle*middle == n) return middle;
    else if (n > middle*middle) {
        // initial = middle
        binary_search(n, middle-1, end);
    } else {
        // n < middle*middle
        // end = middle
        binary_search(n, initial, middle+1);

    }
}
```

### 3. Problem A: Array division

Given an array a = (a1, a2, ..., an) and a 'k'.
Find the lowest 's', tq it's possible to partition 'a' in 'k' subarrays contíguos.

A soma máxima de todas as partições é <= s.


A ideia é considerar um S "aleatório" entre [1, Sum(a_i)], e realizar busca binária no S.

Com S encontro a quantidade C de intervalos.
Se a quantidade C é maior que K, então o Ssolução é menor.
Se a quantidade C é menor que K, então o Ssolução é maior.


Testo s com Busca binária

E depois verifico se a quantidade de intervalos encontrados corresponde ao K desejado.









