#include<iostream>
using namespace std;
#include "student.cpp"

int main() {
    // Create object statically
    Student s1;
    s1.age = 24;
    s1.rollno = 101;

    cout<<s1.rollno<<endl<<s1.age<<endl;

    // Create objects dynamically
    Student *s2 = new Student;
    (*s2).age = 23;
    (*s2).rollno = 104;

    s2 -> age = 25;
    s2 -> rollno = 609;

    cout<<s2 -> rollno<<endl<<s2 -> age<<endl;
}