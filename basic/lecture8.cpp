#include <iostream>
#include <string>

using namespace std;

// Encapsulation -> Encapsulation is wrapping up of data & members functions in a single unit called class.
// Constructor -> Special method invoked automatically at the time of object creation. Used for initialization.
// 1- Same name as class.
// 2- Constructor does't have a return type.
// 3- Only called onces (automatically), at object creation.
// 4- Memory allocation happens when construction is called.
// there are three types for constructors.
// 1 - non parameterized constructor.
// 2 - parameterized constructor
// 3 - copy constructor -> special constructor (default) used to copy properties of one object into another.
// constructor overloading
// Shallow & Deep copy
// A Shallow copy of an object copies all of the members values from one object to another.
// A Deep copy, on the other hand, not only copies the members values but also makes copies of any dynamically allocated memory that the memory point it.
// Inheritance -> When properties & members functions of base class are passed on to the derived class.
// Type of inheritance -> 1. single inheritance, 2. multi level inheritance, 3. multiple inheritance, 4. Hierarchial inheritance, 5. hybrid inheritance
// Polymorphism -> Polymorphism is the ability to take on different forms or behave in different way depending on the contxt in which they are used.
// 1. Compile time polymorphism
// 2. Run time polymorphism -> Function overriding Parent & Child both contains that same function with different implementations the parent class function is said to be
// overridden
// Virtual functions -> A virtual function is a member function that you can expect to be redefined in derived classes
// Virtual functions are dynamic in nature.
// Defined by the keyword "virtual" inside a base class and always declared with a base class and overridden in a child class.
// A virtual function is called during runtime.

// class Teacher {
//    private:
//     double salary;

//    public:
//     // properties / attributes
//     string name;
//     string department;
//     string subject;

//     // constructor (non-parameterized constructor)
//     // Teacher() {
//     //     this->department = "Teaching";
//     // };

//     // constructor (parametrized constructor)
//     Teacher(string name, string department, string subject, double salary) {
//         this->name = name;
//         this->department = department;
//         this->subject = subject;
//         this->salary = salary;
//     };

//     // We can create own copy constructor
//     // Teacher(Teacher &t) {
//     //     this->name = t.name;
//     //     this->department = t.department;
//     //     this->subject = t.subject;
//     //     this->salary = t.salary;
//     // }

//     // methods / members functions
//     void changeDepartment(string newDepartment) {
//         this->department = newDepartment;
//     };

//     // setter -> set the private properties values
//     void setSalary(double salary) {
//         this->salary = salary;
//     };

//     // getter -> get the private properties values
//     double getSalary() {
//         return this->salary;
//     }
// };

// class Account {
//     // hiding the sensitive information using private accessor modifier
//    private:
//     double balance;
//     string password;

//    public:
//     string accountId;
//     string accountHolderName;
// };

// class Student {
//    public:
//     string name;
//     int age;
//     string whichClass;
// };

// class Student {
//    public:
//     string name;
//     double* marksPtr;

//     Student(string name, double marks) {
//         this->name = name;
//         this->marksPtr = new double;
//         *marksPtr = marks;
//     };

//     // Creating a deep copy constructor
//     Student(Student& student) {
//         this->name = student.name;
//         this->marksPtr = new double;
//         *marksPtr = *student.marksPtr;
//     }

//     void getInfo() {
//         cout << this->name << " " << *marksPtr << endl;
//     };

//     // destructor
//     ~Student() {
//         delete marksPtr;
//     }
// };

// inheritance
// class Person {
//    public:
//     string name;
//     int age;

//     Person(string name, int age) {
//         this->name = name;
//         this->age = age;
//     };
// };

// class Child : public Person {
//    public:
//     string place;

//     Child(string name, int age, string place) : Person(name, age) {
//         this->place = place;
//     };

//     void getInfo() {
//         cout << this->name << endl;
//         cout << this->age << endl;
//         cout << this->place << endl;
//     };
// };

// class First {
//    public:
//     string name;

//     First(string name) {
//         this->name = name;
//     }
// };

// class Second {
//    public:
//     string lastName;

//     Second(string lastName) {
//         this->lastName = lastName;
//     }
// };

// class Third : public First, public Second {
//    public:
//     Third(string name, string lastName) : First(name), Second(lastName) {};
// };

// class Poly {
//    public:
//     string name;

//     Poly() {};

//     Poly(string name) {
//         this->name = name;
//     }
// };

class One {
   public:
    virtual void print() {
        cout << "Print from one class" << endl;
    };
};

class Second : public One {
   public:
    void print() {
        cout << "Print from second class" << endl;
    }
};

int main() {
    Second s;
    s.print();

    // Poly p("Anonymous");
    // cout << p.name << endl;

    // Teacher teacherFirst("TeacherFirst", "TeacherFirstDepartment", "Mathematical", 2000.19);

    // Copy the constructor from another teacher object
    // Teacher teacherSecond(teacherFirst);

    // teacherFirst.name = "TeacherFirst";
    // teacherFirst.department = "TeacherFirstDepartment";
    // teacherFirst.subject = "Mathematical";
    // teacherFirst.salary = 2000.19;
    // teacherFirst.setSalary(2000.19);
    // cout << teacherFirst.name << " " << teacherFirst.department << " " << teacherFirst.getSalary() << " " << teacherFirst.subject << endl;
    // cout << teacherSecond.name << " " << teacherSecond.department << " " << teacherSecond.getSalary() << " " << teacherSecond.subject << endl;

    // Student studentFirst;
    // studentFirst.name = "StudentFirst";
    // studentFirst.age = 20;
    // studentFirst.whichClass = "XII";
    // cout << studentFirst.name << " " << studentFirst.age << " " << studentFirst.whichClass << endl;

    // Student studentFirst("StudentFirst", 100.00);
    // studentFirst.getInfo();
    // cout << "----" << endl;

    // Student studentSecond(studentFirst);
    // *studentSecond.marksPtr = 101.11;
    // studentSecond.getInfo();
    // cout << "----" << endl;

    // studentFirst.getInfo();

    // Child childObject("Dheeraj", 20, "New Delhi");
    // childObject.getInfo();

    // Third t("dheeraj", "Rawat");
    // cout << t.name << " " << t.lastName << endl;

    return 0;
}