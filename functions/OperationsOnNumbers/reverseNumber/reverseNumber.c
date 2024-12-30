
int reverseNumber(int num){
    int R = 0;
    while (num > 0) {
        R = R * 10 + num % 10;  
        num = num / 10;          
    }
    return R;
}
