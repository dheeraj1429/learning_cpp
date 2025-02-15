#include <iostream>
using namespace std;

void simple_conditions() {
    char ch;
    cout << "Enter char :";
    cin >> ch;

    if (ch >= 65 && ch <= 90) {
        cout << "Character is lowercase" << endl;
    } else {
        cout << "Character is not lowercase" << endl;
    }
}

void ternary_conditions() {
    char ch;
    cout << "Enter char :";
    cin >> ch;

    ch >= 65 && ch <= 90 ? cout << "Character is lowercase" << endl : cout << "Character is not lowercase" << endl;
}

void check_prime_number(int num) {
    for (int i = 2; i * i < num - 1; i++) {
        if (num % i == 0) {
            cout << "Not a prime number" << endl;
            break;
        } else {
            cout << "Prime number" << endl;
            break;
        }
    }
}

void nested_loop(int nums) {
    for (int i = 0; i < nums; i++) {
        for (int j = i; j < nums; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void nested_reverse_loop(int num) {
    for (int i = 0; i < num; i++) {
        for (int j = i; j >= 0; j--) {
            cout << "*";
        }
        cout << endl;
    }
}

void loop_with_char(int num) {
    char ch = 'A';
    for (int i = 0; i < num; i++) {
        cout << ch << endl;
        ch += 1;
    }
}

void nested_inc_loop(int num) {
    unsigned int count = 1;
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            cout << count;
            count++;
        }
        cout << endl;
    }
}

void nested_loop_with_num(int num) {
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < (i + 1); j++) {
            cout << i + 1;
        }
        cout << endl;
    }
}

void nested_loop_with_spaces(int num) {
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        for (int j = i; j < num; j++) {
            cout << (i + 1);
        }
        cout << endl;
    }
}

void double_triangle(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 0; j < num - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < i; j++) {
            cout << j + 1;
        }
        for (int j = i - 1; j > 0; j--) {
            cout << j;
        }
        cout << endl;
    }
}

void double_triangle_second(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 0; j < num - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < i; j++) {
            int temp = j + 1;
            temp == 1 ? cout << temp : cout << " ";
        }
        for (int j = i - 1; j > 0; j--) {
            j == 1 ? cout << j : cout << ' ';
        }
        cout << endl;
    }
}

void double_triangle_third(int num) {
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            cout << " ";
        }

        cout << "*";

        if (i != 0) {
            for (int j = 0; j < (2 * i - 1); j++) {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    for (int i = num - 1; i > 0; i--) {
        for (int j = num - i; j > 0; j--) {
            cout << " ";
        }
        cout << "*";
        if (i != 1) {
            for (int j = 2 * (i - 1) - 1; j > 0; j--) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    return 0;
}