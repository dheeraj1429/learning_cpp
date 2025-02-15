#include <iostream>

using namespace std;

void example() {
    // Local variables
    int num1;
    int num2, num3, num4;
    int num5 = 1;
    int num6, num7 = 1;
}

// void example2()
// {
//     int num1 = {1};
//     num1 = {3.14};
//     std::cout << num1 << std::endl;
// }

// Global variables
int age = {20};

void array_simple_example() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // this will return the array alocation memory location.
    std::cout << array << std::endl;
    // this way we can access the array elements directly
    std::cout << array[1] << std::endl;
    // update the array elements
    array[0] = 20;
    std::cout << array[0] << std::endl;
}

void array_simple_second_example() {
    int array[5];

    // if the values are no there then this will return some random numbers
    // std::cout << array[0] << std::endl;
    // std::cout << array[1] << std::endl;
    // std::cout << array[2] << std::endl;
    // std::cout << array[3] << std::endl;
    // std::cout << array[4] << std::endl;
    // std::cout << array[5] << std::endl;

    // we can assign the values again into the array.
    // array = {1, 2, 3, 4, 5, 6};
    // if i want to update the array elements which is already declared
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    // std::cout << array[0] << std::endl;
    // std::cout << array[1] << std::endl;
    // std::cout << array[2] << std::endl;
    // std::cout << array[3] << std::endl;
    // std::cout << array[4] << std::endl;

    std::cout << sizeof(array) / sizeof(array[0]) << std::endl;
}

void vector_simple_example() {
    // simple way to create the vectors
    // std::vector<int> vec;
    // std::cout << vec[0] << std::endl;

    // std::vector<int> vec = {1, 2, 3, 4, 5};
    // std::cout << vec[0] << std::endl;

    // create the 3 elements of the vector and store values 0 for each elements
    // std::vector<int> vec(3, 0);
    // std::cout << vec[0] << std::endl;
    // std::cout << vec[1] << std::endl;
    // std::cout << vec[2] << std::endl;
}

void loop_over_the_vector() {
    std::vector<int> vec = {1, 2, 3};

    // for loop
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     std::cout << vec[i] << std::endl;
    // }

    // for each
    // for (int val : vec)
    // {
    //     std::cout << val << std::endl;
    // }
}

void vector_functions() {
    // std::vector<int> vec = {1, 2, 3};
    // std::cout << vec.size() << std::endl;

    std::vector<int> vec;
    // std::cout << vec.size() << std::endl;
    vec.push_back(1);
    vec.push_back(10);
    vec.push_back(12);
    // std::cout << vec.size() << std::endl;

    // for (int val : vec)
    // {
    //     std::cout << val << std::endl;
    // }

    // vec.pop_back();
    // for (int val : vec)
    // {
    //     std::cout << val << std::endl;
    // }

    // std::cout << vec.front() << std::endl;
    // std::cout << vec.back() << std::endl;
    // std::cout << vec.at(1) << std::endl;

    std::cout << vec.size() << std::endl;
    std::cout << vec.capacity() << std::endl;
}

int find_simple_number(std::vector<int> &nums) {
    int result = 0;
    for (int val : nums) {
        result ^= val;
    }
    std::cout << result << std::endl;
    return result;
}

// Divide by the base 2 to get the digits from the remainders:
void divideByBaseTwo(int digit) {
    int subNumber = 2;
    std::string remainder = "";
    int quotient = digit;

    while (quotient > 0) {
        int rem = quotient % subNumber;
        quotient /= subNumber;
        remainder = std::to_string(rem) + remainder;
    }

    std::cout << "Binary representation: " << remainder << std::endl;
}

void literals() {
    int n, m, o;
    n = 25;
    m = 031;
    o = 0x19;
    std::cout << "Number literals: " << n << m << o << std::endl;
}

void floatingPointLiteral() {
    double a = 3.12E2;
    double b = 3.12e10;
    double c = 3.12e-1;

    std::cout << a << std::endl
              << b << std::endl
              << c << std::endl;
}

void enterYourNumber() {
    int number;
    std::cout << "Enter your number" << std::endl;
    std::cin >> number;

    std::cout << "Hoo your number is " << number << std::endl;
}

void calculateTwoNumbers() {
    int firstNumber, secondNumber;
    int plus = 1, minus = 2, deviation = 3, multiplication = 4;
    int operation = 1;

    std::cout << "Enter your two number" << std::endl;
    std::cin >> firstNumber >> secondNumber;

    std::cout << "Please chose your operation" << std::endl;
    std::cout << "1 for plus, 2 for minus, 3 for deviation, 4 for multiplication" << std::endl;
    std::cin >> operation;

    switch (operation) {
        case 1:
            std::cout << "Your two numbers plus : " << firstNumber + secondNumber << std::endl;
            break;
        case 2:
            std::cout << "Your two numbers minus : " << firstNumber - secondNumber << std::endl;
            break;
        case 3:
            std::cout << "Your two numbers deviation : " << firstNumber / secondNumber << std::endl;
            break;
        case 4:
            std::cout << "Your two numbers multiplication : " << firstNumber * secondNumber << std::endl;
            break;
        default:
            break;
    }
}

void room_booking() {
    std::cout << "Enter the number of rooms your want to book. " << std::endl;
    int booked_rooms = {0};
    const int room_price = {60};
    std::cin >> booked_rooms;
    std::cout << "Numbers of rooms booked " << booked_rooms << std::endl;
    std::cout << "Price per room " << "$" << room_price << std::endl;

    const int room_tax = 3;
    std::cout << "Room tax " << "$" << room_tax << std::endl;
    int total_cost = {booked_rooms * room_price};
    std::cout << "Total estimate price " << total_cost << std::endl;
    std::cout << "Total cost " << "$" << total_cost + room_tax << std::endl;
}

int main() {
    // std::cout << age << "The size of the age " << sizeof(age) << "bytes" << std::endl;

    // cout << "char " << sizeof(char) << "bytes" << endl;
    // cout << "int " << sizeof(int) << "bytes" << endl;
    // cout << "unsigned int " << sizeof(unsigned int) << "bytes" << endl;
    // cout << "long " << sizeof(long) << "bytes" << endl;
    // cout << "long long " << sizeof(long long) << "bytes" << endl;

    // cout << "float " << sizeof(float) << "bytes" << endl;
    // cout << "double " << sizeof(double) << "bytes" << endl;
    // cout << "long double " << sizeof(long double) << "bytes" << endl;

    // cout << "char min " << CHAR_MAX << endl;
    // cout << "int min " << INT_MIN << endl;
    // cout << "sort min " << SHRT_MIN << endl;
    // cout << "long min " << LONG_MIN << endl;

    // cout << "char max " << CHAR_MAX << endl;
    // cout << "int max " << INT_MAX << endl;
    // cout << "sort max " << SHRT_MAX << endl;
    // cout << "long max " << LONG_MAX << endl;

    return 0;
}
