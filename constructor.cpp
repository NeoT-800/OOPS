#include<iostream>
using namespace std;

class Student{

    private: 

        int age;

    public: 

        int rollnumber;

    void setAge(int a){
        age=a;
    }    
    int getAge(){
        return age;
    }
    void display(){
        cout<<age<<" "<<rollnumber<<endl;
    }

    /* Default Constructor: 1. Same name as class
                            2. No return type.
                            3. No input arguments.
    */      
    Student(){
        cout<<"Constructor 1 is called."<<endl;
    }
    
    // Parameterized Constructor
    Student(int r){
        cout<<"Constructor 2 is called."<<endl;
        rollnumber = r;
    }
    Student(int a, int r){
        cout<<"Constructor 3 is called."<<endl;
        age = a;
        rollnumber = r;
    }

    // this keyword stores value of current object.
    // Student(int rollnumber){
    //     this -> rollnumber = rollnumber;
    // }

    /* Destructor: 1. Same name as class.
                   2. No return type.
                   3. No input arguments.
    */
    ~Student(){
        cout<<"Destructor is called."<<endl;
    }

};

int main(){

    // Student s1;
    // s1.display();

    // Student s2(101);
    // s2.display();

    // Student s3(20,102);
    // s3.display();

    // Student *s4 = new Student(25,103);
    // s4 -> display();

    // Copy Constructor
    Student s1(10,1001);
    s1.display();
     
    Student s2(s1);
    s2.display();

    Student *s3 = new Student(20,2001);
    s3 -> display();

    Student s4(*s3);
    Student *s5 = new Student(*s3);
    Student *s6 = new Student(s1);

    // Copy assignment operator
    Student s7(10,1001);
    Student s8(20,2001);
    Student *s9 = new Student(30,3001);

    s8 = s7;
    *s9 = s7;
    s8 = *s9;

    // Destructor
    delete s9; // for deleting dynamic object. So, then destructor is called.

}


