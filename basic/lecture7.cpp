#include <algorithm>
#include <cctype>
#include <iostream>

using namespace std;

int validatePalindrome(std::string str) {
    std::string tempString;

    for (int i = str.length() - 1; i >= 0; i--) {
        tempString += str[i];
    }

    if (tempString == str) return 1;

    return 0;
}

int validatePalindrome2(std::string str) {
    int st = 0;
    int end = str.length() - 1;

    while (st < end) {
        if (!isalnum(str[st])) {
            st++;
        }

        if (!isalnum(str[end])) {
            end--;
        }

        if (tolower(str[st]) != tolower(str[end])) {
            return false;
        }

        st++;
        end--;
    }

    return true;
}

void changeX(int& num) {
    num = 20;
}

void changeY(int* num) {
    *num = 20;
}

int main() {
    // const char sts[] = {'a', 'b', 'c', 'd', '\0'};
    // std::cout << strlen(sts) << " " << sts << std::endl;

    // const char strs[] = "hello";
    // std::cout << strs[5] << std::endl; this will return empty string just because all of the string enclosed with \0 value which is mean the null string;

    // char strs[5];
    // std::cout << "Enter your char array :";
    // // std::cin >> strs;
    // std::cin.getline(strs, 100, '.');
    // std::cout << strs << std::endl;

    // for (char ch : strs) {
    //     std::cout << ch << std::endl;
    // }

    // const char sts[] = "Hello world";

    // for (int i = {0}; i < sts[i] != '\0'; i++) {
    //     std::cout << sts[i] << std::endl;
    // }

    // std::string str = "This is the string";  // string in dynamic in nature. string resize in run time.
    // std::cout << str << std::endl;

    // for (int i = {0}; i < str[i] != '\0'; i++) {
    //     std::cout << str[i] << std::endl;
    // }

    // str = "hello";
    // std::cout << str << std::endl;

    // std::string str1 = "First";
    // std::string str2 = "second";
    // std::string str3 = str1 + " " + str2;
    // // std::cout << str3 << std::endl;
    // // std::cout << (str1 == str2) << std::endl;
    // std::cout << str3.length() << std::endl;

    // std::string str = "this is the string";

    // for (char c : str) {
    //     std::cout << c << std::endl;
    // }

    // std::string str = "this";
    // std::string str2;

    // for (int i = str.length(); i >= 0; i--) {
    //     str2 += str[i];
    // }
    // std::cout << str2 << std::endl;

    // std::vector<char> str = {'h', 'e', 'l', 'l', 'o'};

    // int st = 0;
    // int end = str.size() - 1;

    // while (st < end) {
    //     std::swap(str[st++], str[end--]);
    // }

    // for (char c : str) {
    //     std::cout << c << std::endl;
    // }

    // std::cout << validatePalindrome2("racecar") << std::endl;

    // int a = 10;
    // int* ptr = &a;
    // int** pointerOfPtr = &ptr;

    // cout << a << endl;
    // cout << *ptr << endl;
    // cout << **pointerOfPtr << endl;

    // cout << &a << endl;
    // cout << ptr << endl;
    // cout << pointerOfPtr << endl;

    // cout << ptr << endl;
    // cout << *pointerOfPtr << endl;

    // Null pointer

    // int* ptr;
    // cout << ptr << endl;

    // int* ptr = NULL;
    // cout << ptr << endl;

    // int a = 5;
    // int *p = &a;
    // int **q = &p;

    // cout << *p << endl;   // 5
    // cout << **q << endl;  // 5
    // cout << p << endl;    // random memory address ->  ex, 100
    // cout << *q << endl;   // p variable memory address -> 100

    // int x = 10;
    // changeX(x);  // this is much more easy to understand

    // int y = 10;
    // changeY(&y);  // this is litter bit hard to understand

    // cout << x << endl;
    // cout << y << endl;

    // int a = 10;
    // int* p = &a;

    // cout << a << endl;
    // cout << p << endl;
    // cout << *p << endl;
    // cout << "------" << endl;

    // p++;
    // cout << p << endl;
    // cout << *p << endl;
    // cout << a << endl;

    // int arr[] = {1, 2, 3, 4};
    // cout << arr << endl;
    // cout << &arr[0] << endl;
    // cout << *arr << endl;
    // cout << *arr + 1 << endl;
    // cout << *arr + 2 << endl;
    // cout << *arr + 3 << endl;

    // int -> 4 bits and in array each element stores as continuous memory address. ex -> arr[0] -> 100 arr[1] -> after 4bits etc..

    // int* ptr1 = &arr[0];
    // int* ptr2 = &arr[2];

    // cout << ptr2 - ptr1 << endl;

    return 0;
}
