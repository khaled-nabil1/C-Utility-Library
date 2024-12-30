int sumOfDigits(int num){
    int S=0;
    while(num > 0){
        S+= num%10;
        num = num/10;
    }
    return S;
}

