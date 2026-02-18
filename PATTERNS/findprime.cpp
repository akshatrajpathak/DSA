
#include <iostream>
using namespace std;

int isPrime(int n) {
    if (n <= 1)
        return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;   // not prime
    }

    return 1;   // prime
}

int main() {
    int N=60;
    

    for (int i = 2; i <= N; i++) {   // First loop (numbers)
        if (isPrime(i) == 1) {       // Second loop inside function
            cout << i << " ";
        }
    }

    return 0;
}