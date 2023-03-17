#include <iostream>
#include <cstring>
using namespace std;

class Student{
    
    private:
        int age;

    public: 
        char *name;

    Student(int age, char *name){ // Parameterized Constructor
        this -> age = age;

        //Shallow Copy
        // this -> name = name;

        // Deep Copy
        this -> name = new char[strlen(name)+1]; // Created new memory
        strcpy(this -> name, name);

        // Note: Assignment operator and the default copy constructor makes a shallow copy.

    }

    // Copy Constructor
    Student(Student const &s){  // keyword const assured us that original copy is unchanged.
        this -> age = s.age;  // Shallow copy
        this -> name = new char[strlen(s.name)+1];  // Deep copy
        strcpy(this -> name, s.name);
    }
    
      // Note: Deep memory allocates different memory for the copied task. It is generally used when we assign the dynamic memory using pointers.

    void display(){
        cout<<age<<" "<<name<<endl;
    }
};

int main(){
    char name[] = "abcd";
    Student s1(20,name);
    s1.display();

    Student s2(s1);
    s2.name[0] = 'x';
    s1.display();
    s2.display();

}
