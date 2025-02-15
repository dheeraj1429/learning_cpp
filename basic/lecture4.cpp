#include <iostream>
using namespace std;

void calculate_some_of_digits(int num) {
    int sum = 0;

    while (num > 0) {
        int last_digit = num % 10;
        num /= 10;
        sum += last_digit;
    }

    cout << sum << endl;
}

int factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int calculate_n_and_r(int n, int r) {
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);
    return fact_n / (fact_r * fact_nmr);
}

void decimal_to_binary(int num) {
    int result = 0, power = 1;
    while (num > 0) {
        int rem = num % 2;
        num /= 2;
        result += (rem * power);
        power *= 10;
    }
    cout << result << endl;
}

void bitwise() {
    int a = 4;
    int b = 8;

    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
}

void small_large_number() {
    int numbers[] = {5, 15, 22, 1, 10, 24};
    int size = sizeof(numbers) / sizeof(int);
    int small = numbers[0], large = numbers[0];
    for (int i = 0; i < size; i++) {
        // small = min(numbers[i], small);
        // large = max(numbers[i], large);
        if (numbers[i] < small) {
            small = numbers[i];
        }
        if (numbers[i] > large) {
            large = numbers[i];
        }
    }
    cout << small << " " << large << endl;
}

void change_array(int array[], int size) {
    cout << "in function" << endl;
    for (int i = 0; i < size; i++) {
        array[i] *= 2;
    }
}

void reverse_array() {
    int arr[] = {4, 7, 8, 2, 5, 1, 0};
    int size = sizeof(arr) / sizeof(int);
    int left = 0, right = size - 1;

    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Kadane's Algorithm
void k() {
    int size = 5;
    int arr[] = {1, 2, 3, 4, 5};

    for (int start = 0; start < size; start++) {
        for (int end = start; end < size; end++) {
            for (int i = start; i <= end; i++) {
                cout << arr[i];
            }
            cout << " ";
        }
    }
    cout << endl;
}

void k2() {
    int size = 5;
    int arr[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < size; i++) {
        cout << arr[i];
    }
    cout << endl;
}

int main() {
    return 0;
}
