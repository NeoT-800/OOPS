#include <iostream>
#include <cstring>
using namespace std;

class Student{
    int age;
    char *name;

    public: 

    Student(int age, char *name){ // Parameterized Constructor
        this -> age = age;

        //Shallow Copy
        this -> name = name;

        // Deep Copy
        this -> name = new char[strlen(name)+1]; // Created new memory
        strcpy(this -> name, name);

        // Note: Assignment operator and the default copy constructor makes a shallow copy.

    }

    void display(){
        cout<<age<<" "<<name<<endl;
    }
};

int main(){
    char name[] = "abcd";
    Student s1(20,name);
    s1.display();

    name[3] = 'x';
    Student s2(25,name);
    s2.display();

    s1.display();
}