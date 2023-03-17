#include <iostream>
using namespace std;

class Student{

    private: 
        static int totalStudents; // Total no. of students
    public: 
        int rollNumber;
        int age;  
    Student(){
        totalStudents++;
    }      
    int getRollNumber(){
        return rollNumber;
    }
    static int getTotalStudents(){  // Static member function
        return totalStudents;
    }
};

int Student :: totalStudents = 0; // Static data member initialised

int main(){
    Student s1;
    Student s2,s3,s4,s5;
    cout<<Student::getTotalStudents()<<endl; // Static data function invoked
}