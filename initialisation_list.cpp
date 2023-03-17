#include <iostream>
using namespace std;

class Student {

    public :

    int age;
    const int rollNumber; // Const type data member
    int &x; // age reference variable

    // Parameterised list is used
    Student(int r, int age) : rollNumber(r), age(age), x(this -> age) {
        //rollNumber = r;
    }

    // Note:   1. When no base class default constructor is present
    //         2. When the data members are of type const
    //         3. When the data member and parameter have the same name
    //         4. When the data member of the reference type is used.
};

int main(){
    Student s1(101,20);
}