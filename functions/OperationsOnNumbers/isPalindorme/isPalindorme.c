#include <stdbool.h>
bool isPalindrome(int num){
    int R = 0, n = num;
    while (num > 0) {
        R = R * 10 + num % 10;  
        num = num / 10;          
    }
    return n == R;
}

