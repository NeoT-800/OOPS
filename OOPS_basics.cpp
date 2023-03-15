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
    
};

#include<iostream>
using namespace std;
#include "student.cpp"
int main(){

    Student s1;
    Student *s2 = new Student;

    s1.setAge(25);
    // s1.getAge();
    s1.display();

    s2 -> setAge(27);
    // s2 -> getAge();
    s2 -> display();
}