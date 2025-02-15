#include <iostream>
using namespace std;

void whileLoopSimpleFunction() {
    int number = 1;
    while (number <= 10) {
        std::cout << "Hello there this is the " << number << std::endl;
        number++;
    }
}

void whileLoopWithSumFunction() {
    int count = 0, sum = 0;
    while (count <= 10) {
        sum += count;
        std::cout << "Hello there this is the " << count << std::endl;
        count++;
    }
    std::cout << "After loop " << sum << std::endl;
}

void calculateSumWithUserInput() {
    int count = 0, sum = 0, input_value;
    std::cout << "Enter the number till which the sum has to be calculated" << std::endl;
    std::cin >> input_value;

    while (count <= input_value) {
        sum += count;
        count++;
    }
    std::cout << "Sum " << sum << std::endl;
}

void simpleForLoop() {
    for (int i = 0; i < 10; i++) {
        std::cout << "Hello there" << std::endl;
    }
}

void calculateSumWithForLoopAndUserInput() {
    int sum = 0, input_value;
    std::cout << "Enter the number till which the sum has to be calculated" << std::endl;
    std::cin >> input_value;

    for (int i = 0; i < input_value; i++) {
        sum += i;
    }
    std::cout << "Sum " << sum << std::endl;
}

void simpleIfCondition() {
    int num = 0;
    cout << "Please enter your age" << endl;
    cin >> num;

    if (num > 18) {
        cout << "You are a men" << endl;
    } else if (num == 18) {
        cout << "You are a teenager" << endl;
    } else {
        cout << "You are a child" << endl;
    }
}

void checkEvenNumber() {
    int num = 0;
    cout << "Please enter your number" << endl;
    cin >> num;
    if (num % 2 == 0) {
        cout << num << " is an even number." << endl;
    } else {
        cout << num << " is an odd number." << endl;
    }
}

void checkEvenNumber1() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            cout << i << " is even." << endl;
        } else {
            cout << i << " is odd." << endl;
        }
    }
}

void signedAndUnsigned() {
    // if the unsigned type stored signed type value then in the background the value will be converted into the 32 bits then
    // converted into the 1's complement representation mean reverse the 32 bit -> 0 = 1 and 1 = 0, then the vale will be converted into the
    // 2's complement representation mean added the +1 bit.
    // if we see the binary representation into the decimal representation then we can see the actual value.
    unsigned int num = -1;
    int x = num;
    std::cout << num << ", " << x << std::endl;
}

void typeConversions() {
    bool b = 35;
    int number = b;

    std::cout << number << std::endl;

    number = 3.14;
    double pi = number;
    unsigned char name = -1;

    std::cout << b << ", " << number << ", " << pi << ", " << name << std::endl;

    pi = 3.14;

    std::cout << pi << std::endl;
}

int main() {
    cout << "Enter two numbers: " << endl;
    int number_1 = 0, number_2 = 0;
    cin >> number_1 >> number_2;
    cout << "The sum of the " << number_1 << " and " << number_2 << " is " << number_1 + number_2 << endl;
    return 0;
}