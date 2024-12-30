#include <stdbool.h>

int sumOfDigits(int num) {
    int S = 0;
    while (num > 0) {
        S += num % 10;
        num = num / 10;
    }
    return S;
}

bool isSmith(int num) {
    if (num < 2) return false; 
    
    int num_copy = num, S = 0, is_prime = 1;
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            is_prime = 0;
            break;
        }
    }
    
    if (is_prime) return false; 
    
    for (int i = 2; i <= num / 2; i++) {
        while (num_copy % i == 0) {
            num_copy = num_copy / i;
            S += sumOfDigits(i);
        }
    }
    
    if (num_copy > 1) {
        S += sumOfDigits(num_copy);
    }

    return sumOfDigits(num) == S;
}
