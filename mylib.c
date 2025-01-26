#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sumOfDigits(int num) {
  int S = 0;
  while (num > 0) {
    S += num % 10;
    num = num / 10;
  }
  return S;
}

int reverseNumber(int num) {
  int R = 0;
  while (num > 0) {
    R = R * 10 + num % 10;
    num = num / 10;
  }
  return R;
}
bool isPalindrome(int num) {
  int r = reverseNumber(num);
  return num == r;
}
bool isPrime(int num) {
  int i = 2;
  while (i * i <= num) {
    if (num % i == 0)
      return false;
    i++;
  }

  return true;
}
int gcd(int a, int b) {
  int r, max;
  if (b > a)
    max = b, b = a, a = max;
  do {
    r = a % b;
    a = b;
    b = r;
  } while (r > 0);
  return a;
}
int lcm(int a, int b) {
  int ppcm = abs(a * b) / gcd(a, b);
  return ppcm;
}
long factorial(int num) {
  long f = 1;
  while (num > 0) {
    f = f * num;
    num--;
  }
  return f;
}
bool isEven(int num) { return num % 2 == 0; }

// Intermidiate operations on numbers

void primeFactors(int num) {
  int i = 2, n = num;
  for (i; i <= num / 2; i++) {
    while (n % i == 0) {
      printf("%d  ", i);
      n = n / i;
    }
  }
}
bool isArmstrong(int num) {
  int S = 0, n_copy = num, num_of_digits = 0, digit, digit_power;

  while (n_copy > 0) {
    n_copy = n_copy / 10;
    num_of_digits++;
  }
  n_copy = num;
  while (n_copy > 0) {
    digit = n_copy % 10;
    n_copy = n_copy / 10;
    digit_power = 1;
    for (int i = 1; i <= num_of_digits; i++) {
      digit_power = digit_power * digit;
    }
    S += digit_power;
  }

  return num == S;
}
void fibonacciSeries(int n) {
  int F1 = 0, F2 = 1, F;

  if (n >= 1) {
    printf("%d ", F1);
  }

  if (n >= 2) {
    printf("%d ", F2);
  }

  for (int i = 3; i <= n; i++) {
    F = F1 + F2;
    printf("%d ", F);
    F1 = F2;
    F2 = F;
  }
}

int sumDivisors(int num) {
  int S = 1;
  for (int i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
      S += i;
    }
  }
  return S;
}
bool isPerfect(int num) { return sumDivisors(num) == num; }
bool isMagic(int num) {
  int S;
  do {
    S = 0;
    do {
      S += num % 10;
      num = num / 10;
    } while (num > 0);
    num = S;
  } while (S > 9);
  return num == 1;
}
bool isAutomorphic(int num) {
  int num_of_digits = 0, num_copy = num, ten_pow = 1;

  while (num_copy > 0) {
    num_copy = num_copy / 10;
    num_of_digits++;
  }
  for (int i = 1; i <= num_of_digits; i++) {
    ten_pow = ten_pow * 10;
  }
  return (num * num) % ten_pow == num;
}

// Advanced operations on numbers

void toBinary(int num) {
  int S = 0;
  while (num > 0) {
    S = S * 10 + num % 2;
    num = num / 2;
  }
  S = reverseNumber(S);
  printf("%d", S);
}
bool isNarcissistic(int num) {
  int S = 0, n_copy = num, num_of_digits = 0, digit, digit_power;

  while (n_copy > 0) {
    n_copy = n_copy / 10;
    num_of_digits++;
  }
  n_copy = num;
  while (n_copy > 0) {
    digit = n_copy % 10;
    n_copy = n_copy / 10;
    digit_power = 1;
    for (int i = 1; i <= num_of_digits; i++) {
      digit_power = digit_power * digit;
    }
    S += digit_power;
  }

  return num == S;
}
double sqrtApprox(int num) {
  double x = num / 2, x1;
  do {
    x1 = x;
    x = 0.5 * (x1 + num / x1);
  } while ((x1 - x) > 0.000000001);
  return x;
}
double power(int base, int exp) {
  if (exp == 0) {
    return 1;
  }

  double result = 1;

  if (exp < 0) {
    base = 1 / base;
    exp = -exp;
  }

  for (int i = 1; i <= exp; i++) {
    result = result * base;
  }

  return result;
}

int getnext(int n) { // Helping function for isHappy()
  int S = 0;
  while (n > 0) {
    S += (n % 10) * (n % 10);
    n = n / 10;
  }
  return S;
}
bool isHappy(int num) {
  int slow = num, fast = num;

  do {
    slow = getnext(slow);
    fast = getnext(getnext(fast));
  } while (slow != fast);

  return slow == 1;
}
bool isAbundant(int num) { return sumDivisors(num) > num; }
bool isDeficient(int num) { return sumDivisors(num) < num; }
int sumEvenFibonacci(int n) {
  int S = 0;
  for (int i = 0; i <= n; i += 3) {
    int F = 0, F1 = 1, F2 = 0;

    for (int j = 1; j < i; j++) {
      F = F1 + F2;
      F2 = F1;
      F1 = F;
    }
    S += F;
  }
  return S;
}
bool isHarshad(int num) {
  int n = num, S = 0;
  if (num < 10) {
    return true;
  }
  while (num > 0) {
    S += num % 10;
    num = num / 10;
  }
  return n % S == 0;
}

unsigned long catalanNumber(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }

  unsigned long catalan = 1;

  for (int i = 0; i < n; i++) {
    catalan = catalan * (2 * n - i) / (i + 1);
  }

  return catalan / (n + 1);
}

void pascalTriangle(int n) {
  for (int i = 0; i < n; i++) {
    for (int k = 0; k <= n - i; k++)
      printf(" ");

    unsigned long c = 1;

    for (int j = 0; j <= i; j++) {
      printf("%lu ", c);
      c = c * (i - j) / (j + 1);
    }
    printf("\n");
  }
}

unsigned long binomialCofficient(int n, int p) {
  unsigned long c = factorial(n) / (factorial(p) * factorial(n - p));
  return c;
}

unsigned long long bellNumber(int n) {
  if (n == 0) {
    return 1;
  }

  unsigned long long bell = 0;
  for (int i = 0; i < n; i++) {
    bell += binomialCofficient(n - 1, i) * bellNumber(i);
  }

  return bell;
}
bool isKaprekar(int num) {
  int power = 1, num_copy = num, num_of_digits = 0, S = 0;
  while (num_copy > 0) {
    num_of_digits++;
    num_copy = num_copy / 10;
  }
  for (int i = 1; i <= num_of_digits; i++) {
    power = power * 10;
  }
  S = num * num / power + num * num % power;
  return S == num;
}
bool isSmith(int num) {
  if (num < 2)
    return false;

  int num_copy = num, S = 0, is_prime = 1;

  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      is_prime = 0;
      break;
    }
  }

  if (is_prime)
    return false;

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
int sumOfPrimes(int n) {
  int S = 0;
  for (int i = 1; i <= n; i++) {
    if (isPrime(i))
      S += i;
  }
  return S;
}

//  Operations on strings

//  Basic string functions
int stringLength(char* str){
  int length = 0;
  for(int i =0; str[i] != '\0'; i++){
    length++;
  }
  return length;
}

void stringCopy(char* dest, const char* src);
void stringConcat(char *dest, const char *src) {
    while (*dest != '\0') {
        dest++;
    }

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}int  stringCompare(const  char*  str1,  const  char*  str2);
bool isEmpty(char* str);
void reverseString(char* str);
void toUpperCase(char* str){
  for(int i =0; str[i] != '\0';i++){
    if(str[i] >= 'a' && str[i] <= 'z') str[i] = str[i] - 32;
  }
}
void toLowerCase(char* str){
  for(int i =0; str[i] != '\0';i++){
    if(str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] + 32;
  }
}


// Operations on Arrays

// Basic Array functions

void initializeArray(int arr[], int size, int value) {
  for (int i = 0; i < size; i++) {
    arr[i] = value;
  }
}
void printArray(int arr[], int size) {
  printf("[");
  for (int i = 0; i < size; i++) {
    printf("'%d'  ", arr[i]);
  }
  printf("]");
}
int findMax(int arr[], int size) {
  int max = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > max)
      max = arr[i];
  }
  return max;
}
int findMin(int arr[], int size) {
  int min = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] < min)
      min = arr[i];
  }
  return min;
}
int sumArray(int arr[], int size) {
  int S = 0;
  for (int i = 0; i < size; i++) {
    S += arr[i];
  }
  return S;
}
double averageArray(int arr[], int size) { return sumArray(arr, size) / size; }
bool isSorted(int arr[], int size) {
  bool sorted = true;
  int i = 0;
  while (i < size - 1 && sorted) {
    if (arr[i] > arr[i + 1])
      sorted = false;
    i++;
  }
  return sorted;
}

// Intermidiate Array functions

void reverseArray(int arr[], int size) {
  int temp;
  for (int i = 0; i < size / 2; i++) {
    if (i != size - i - 1) {
      temp = arr[i];
      arr[i] = arr[size - i - 1];
      arr[size - i - 1] = temp;
    }
  }
}
void countEvenOdd(int arr[], int size, int *evenCount, int *oddCount) {
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0)
      (*evenCount)++;
    else
      (*oddCount)++;
  }
}
int secondLargest(int arr[], int size) {
  int max_index = 0, temp, second_largest;
  for (int i = 1; i < size; i++) {
    if (arr[i] > arr[max_index])
      max_index = i;
  }
  temp = arr[size - 1];
  arr[size - 1] = arr[max_index];
  arr[max_index] = temp;

  return second_largest = findMax(arr, size - 1);
}
void elementFrequency(int arr[], int size) {
  int element_frequency;
  for (int i = 0; i < size; i++) {
    element_frequency = 1;
    if (arr[i] != -1) {
      for (int j = i + 1; j < size; j++) {
        if (arr[i] == arr[j]) {
          element_frequency++;
          arr[j] = -1;
        }
      }
      printf("element %d: %d\n", arr[i], element_frequency);
    }
  }
}
int removeDuplicates(int arr[], int size) {
  size;
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] == arr[j]) {
        for (int k = j; k < size - 1; k++) {
          arr[k] = arr[k + 1];
        }
        size--;
        j--;
      }
    }
  }
  return size;
}
int binarySearch(int arr[], int size, int target) {
  int high = size - 1, low = 0, mid;
  do {
    mid = (high + low) / 2;
    if (arr[mid] < target)
      low = mid + 1;
    else
      high = mid - 1;
  } while (arr[mid] != target);

  return mid;
}
int linearSearch(int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target)
      return i;
  }
}
void leftShift(int arr[], int size, int rotations) {
  if (rotations > size)
    rotations = rotations % size;

  for (int i = 0; i < rotations; i++) {
    int temp = arr[0];
    for (int j = 0; j < size - 1; j++) {
      arr[j] = arr[j + 1];
    }
    arr[size - 1] = temp;
  }
}
void rightShift(int arr[], int size, int rotations) {
  if (rotations > size)
    rotations = rotations % size;

  for (int i = 0; i < rotations; i++) {
    int temp = arr[size - 1];
    for (int j = size - 2; j >= 0; j--) {
      arr[j + 1] = arr[j];
    }
    arr[0] = temp;
  }
}

// Sorting Algorithms

void bubbleSort(int arr[], int size) {
  for (int i = 1; i <= size; i++) {
    bool swapped = false;
    for (int j = 0; j < size - 1; j++) {
      int temp;
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = true;
      }
    }
    if (!swapped)
      break;
  }
}
void selectionSort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    int min = i;

    for (int j = i + 1; j < size; j++) {
      if (arr[min] > arr[j])
        min = j;
    }
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
}
void insertionSort(int arr[], int size) {
  for (int i = 1; i < size; i++) {
    while (arr[i] <= arr[i - 1] && i != 0) {
      int temp = arr[i];
      arr[i] = arr[i - 1];
      arr[i - 1] = temp;
      i--;
    }
  }
}
void merge(int arr[], int left, int mid, int right) {
  int leftSize = mid - left + 1;
  int rightSize = right - mid;
  int leftArr[leftSize];
  int rightArr[rightSize];

  for (int i = 0; i < leftSize; i++) {
    leftArr[i] = arr[left + i];
  }

  for (int j = 0; j < rightSize; j++) {
    rightArr[j] = arr[mid + j + 1];
  }

  int i = 0, j = 0, k = left;
  while (i < leftSize && j < rightSize) {
    if (leftArr[i] <= rightArr[j]) {
      arr[k] = leftArr[i];
      i++;
    } else {
      arr[k] = rightArr[j];
      j++;
    }
    k++;
  }

  while (i < leftSize) {
    arr[k] = leftArr[i];
    i++;
    k++;
  }

  while (j < rightSize) {
    arr[k] = rightArr[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int left, int right) {
  if (left < right) {
    int mid = (right + left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, mid, right);
  }
}
// helper function to swap two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int arr[], int low, int high) {
  int pivot = arr[high]; 
  int i = low;           

  for (int j = low; j < high; j++) {
    if (arr[j] < pivot) { 
      swap(&arr[i], &arr[j]);
      i++;
    }
  }
  swap(&arr[i], &arr[high]); 
  return i;
}


void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pivot = partition(arr, low, high);

    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot + 1, high);
  }
}

// Advanced Array functinos

int findMissingNumber(int arr[], int size){
    int S, SS, missing;
    S = ((size+2)*(size+1))/2;
    SS = 0;
    for(int i =0 ; i< size; i++){
        SS += arr[i];
    }
    missing = S - SS;
    return missing;
}
void findPairsWithSum(int arr[], int size, int sum){
    int     i = 0 , j = size-1,S;
    quickSort(arr,i,j);
        while(i < j){S = arr[i]+arr[j];
            if(S == sum) {
                printf("\n[%d,%d]",arr[i],arr[j]);
                i++;
                j--;
                }
            else if (S< sum) i++;
            else j--;   
        }
}
void findSubArrayWithSum(int arr[], int size, int sum){
  int leftPtr=0, rightPtr=0, currentSum =0;
  while(currentSum != sum){
    if(currentSum < sum) currentSum += arr[rightPtr++];
    else if(currentSum > sum) currentSum -= arr[leftPtr++];
    if(currentSum == sum){
      for(int i = leftPtr; i < rightPtr; i++){
        printf("%d, ", arr[i]);
      }
    }
  }
}
void rearrangeAlternatePositiveNegative(int arr[], int size) {
    int i = -1;
    for (int j = 0; j < size; j++) {
        if (arr[j] < 0) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int pos = i + 1, neg = 0;
    while (pos < size && neg < pos && arr[neg] < 0) {
        int temp = arr[neg];
        arr[neg] = arr[pos];
        arr[pos] = temp;
        pos++;
        neg += 2;
    }
}
int findMajorityElement(int arr[], int size){
    int candidate = arr[0], count = 1;
    for (int i = 1; i < size; i++) {
        if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }
    }

    count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }
    return (count > size / 2) ? candidate : -1;
}
int longestIncreasingSubsequence(int arr[], int size){
    int dp[size];
    for (int i = 0; i < size; i++) {
        dp[i] = 1;
    }

    for (int i = 1; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }
    }

    int maxLength = 0;
    for (int i = 0; i < size; i++) {
        if (dp[i] > maxLength) {
            maxLength = dp[i];
        }
    }
    return maxLength;
}

void findDuplicates(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("Duplicate: %d\n", arr[i]);
            }
        }
    }
}

void findIntersection(int arr1[], int size1, int arr2[], int size2) {
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\n");
}

void findUnion(int arr1[], int size1, int arr2[], int size2){
    int maxSize = size1 + size2;
    int unionArray[maxSize];
    int unionSize = 0;

    for (int i = 0; i < size1; i++) {
        unionArray[unionSize++] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < unionSize; j++) {
            if (arr2[i] == unionArray[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            unionArray[unionSize++] = arr2[i];
        }
    }

    for (int i = 0; i < unionSize; i++) {
        printf("%d ", unionArray[i]);
    }
    printf("\n");
}


