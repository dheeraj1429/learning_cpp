#include <iostream>

using namespace std;

void pointerToPointer() {
    // int a = 10;
    // int* ptr = &a;
    // int** ptr2 = &ptr;

    // cout << &a << endl;
    // cout << ptr << endl;
    // cout << ptr2 << endl;

    // int a = 10;
    // int* ptr = &a;

    // int** parentPtr = &ptr;

    // cout << &ptr << endl;
    // cout << parentPtr << endl;

    int a = 100;
    int* ptr = &a;

    int** parPtr = &ptr;

    // cout << &ptr << endl;
    // cout << parPtr << endl;

    // Dereferencing operator.
    // cout << a << endl;
    // cout << *(&a) << endl;
    // cout << *ptr << endl;

    cout << *(*parPtr) << endl;
}

void simplePointers() {
    int a = 10;
    int* ptr = &a;

    // Both addresses values are some just because we are using the int a address inside the ptr variable.
    // cout << &a << endl;
    // cout << ptr << endl;

    // Getting the parent value using pointer
    // cout << *ptr << endl;

    // Create a new pointer to store the
    int** parentPtr = &ptr;

    cout << *(*parentPtr) << endl;
    cout << *ptr << endl;
}

void nullPointer() {
    int* prt = NULL;
    cout << prt << endl;
}

void question() {
    int a = 10;
    int* p = &a;
    int** q = &p;

    cout << *p << endl;   // 10
    cout << **q << endl;  // 10
    cout << p << endl;    // Address of the a variable
    cout << *q << endl;   // Address of the p variable
}

void changeA(int* ptr) {
    *ptr = 20;
}

void changeB(int& b) {
    b = 20;
}

void p() {
    int arr[] = {1, 2, 3};
    cout << arr << endl;
    cout << *arr << endl;
}

// Pointer Arithmetic
void pA() {
    int a = 10;
    int* p = &a;

    cout << p << endl;
    p++;
    cout << p << endl;
}

void bubbleSort(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (nums[i] > nums[j]) {
                swap(nums[i], nums[j]);
            }
        };
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;
    int nums[] = {5, 4, 3, 7, 9};

    bubbleSort(nums, n);

    print(nums, n);

    return 0;
}
