//                      *** MYLIB ***
// Operations on numbers
// Basic operations on numbers
#include<stdbool.h>

int sumOfDigits(int num);
int reverseNumber(int num);
bool isPalindrome(int num);
bool isPrime(int num);
int gcd(int a, int b);
int lcm(int a, int b);
long factorial(int num);
bool isEven(int num);

// Intermidiate operations on numbers

void primeFactors(int num);
bool isArmstrong(int num);
void fibonacciSeries(int n);
int sumDivisors(int num);
bool isPerfect(int num);
bool isMagic(int num);
bool isAutomorphic(int num);

// Advanced operations on numbers

void toBinary(int num);
bool isNarcissistic(int num);
double sqrtApprox(int num);
double power(int base, int exp);
bool isHappy(int num);
bool isAbundant(int num);
bool isDeficient(int num);
int sumEvenFibonacci(int n);
bool isHarshad(int num);
unsigned long catalanNumber(int n);
void pascalTriangle(int n);
unsigned long bellNumber(int n);
bool isKaprekar(int num);   
bool isSmith(int num);
int sumOfPrimes(int n);

//  Operations on strings

//  Basic string functions

int stringLength(char* str);
void stringCopy(char* dest, const char* src);
void stringConcat(char* dest, const char* src);
int  stringCompare(const  char*  str1,  const  char*  str2);
bool isEmpty(char* str);
void reverseString(char* str);
void toUpperCase(char* str);
void toLowerCase(char* str);

// Intermidiate string functions

bool strIsPalindrome(char* str);
void countVowelsConsonants(char* str, int* vowels, int* consonants);
int findSubstring(const char* str, const char* sub);
void removeWhitespaces(char* str);
bool isAnagram(char* str1, char* str2);
void  charFrequency(char*  str,  int*  freq);
int countWords(char* str);
void strRemoveDuplicates(char* str);

// Advanced string functions

void compressString(char* str, char* result);
void longestWord(char* str, char* result);
bool isRotation(char* str1, char* str2);
int countChar(char* str, char ch);
void findAndReplace(char* str, char* find, char* replace);
void  longestPalindrome(char*  str,  char*  result);
void printPermutations(char* str);
void splitString(char* str, char delimiter, char tokens[][100], int* tokenCount);

// Operations on Arrays

// Basic Array functions

void initializeArray(int arr[], int size, int value);
void printArray(int arr[], int size);
int findMax(int arr[], int size);
int findMin(int arr[], int size);
int sumArray(int arr[], int size);
double averageArray(int arr[], int size);
bool isSorted(int arr[], int size);

// Intermidiate Array functions

void reverseArray(int arr[], int size);
void countEvenOdd(int arr[], int size, int* evenCount, int* oddCount);
int secondLargest(int arr[], int size);
void elementFrequency(int arr[], int size);
int removeDuplicates(int arr[], int size);
int binarySearch(int arr[], int size, int target);
int linearSearch(int arr[], int size, int target);
void leftShift(int arr[], int size, int rotations);
void rightShift(int arr[], int size, int rotations);

// Sorting Algorithms
void merge(int arr[], int left,int mid, int right);
void bubbleSort(int arr[], int size);
void selectionSort(int arr[], int size);
void insertionSort(int arr[], int size);
void mergeSort(int arr[], int left, int right);
void quickSort(int arr[], int low, int high);

// Advanced Array functinos

int findMissingNumber(int arr[], int size);
void findPairsWithSum(int arr[], int size, int sum);
void findSubArrayWithSum(int arr[], int size, int sum);
void rearrangeAlternatePositiveNegative(int arr[], int size);
int findMajorityElement(int arr[], int size);
int longestIncreasingSubsequence(int arr[], int size);
void findDuplicates(int arr[], int size);
void findIntersection(int arr1[], int size1, int arr2[], int size2);
void findUnion(int arr1[], int size1, int arr2[], int size2);

// Operations on Matrices

// Basic Matrix functions

void initializeMatrix(int rows, int cols, int matrix[rows][cols], int value);
void printMatrix(int rows, int cols, int matrix[rows][cols]);
void inputMatrix(int rows, int cols, int  matrix[rows][cols]);

// Matrix Arithmetic

void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]);
void subtractMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]);
void multiplyMatrices(int rows1, int cols1, int mat1[rows1][cols1], int rows2, int cols2, int mat2[rows2][cols2], int result[rows1][cols2]);
void scalarMultiplyMatrix(int rows, int cols, int matrix[rows][cols], int scalar);

// Matrix Properties and Check

bool isSquareMatrix(int rows, int cols);
bool isIdentityMatrix(int size, int matrix[size][size]);
bool isDiagonalMatrix(int size, int matrix[size][size]);
bool isSymmetricMatrix(int size, int matrix[size][size]);
bool isUpperTriangular(int size, int matrix[size][size]);

// Matrix Operations

void transposeMatrix(int rows, int cols, int matrix[rows][cols], int result[cols][rows]);
int  determinantMatrix(int  size,  int  matrix[size][size]);
void inverseMatrix(int size, double matrix[size][size], double result[size][size]);
void matrixPower(int size, int matrix[size][size], int power, int result[size][size]);

// Advanced Matrix functions

void cofactorMatrix(int size, int matrix[size][size], int cofactor[size][size]);
void adjointMatrix(int size, int matrix[size][size], int adjoint[size][size]);
void luDecomposition(int size, double matrix[size][size], double lower[size][size], double upper[size][size]);
int matrixRank(int rows, int cols, int matrix[rows][cols]);

// Special Matrix Operations

int traceMatrix(int size, int matrix[size][size]);
void rotateMatrix90(int size, int matrix[size][size]);
void findEigenvalues(int size, double matrix[size][size], double eigenvalues[size]);

// Encryption Ciphers

void caesarCipher(char *text, int shift);
void substitutionCipher(char *text, const char *key);
void xorCipher(char *text, char key);
void vigenereCipher(char *text, const char *key, int encrypt);
void atbashCipher(char *text);
void railFenceCipher(const char *text, int depth);
