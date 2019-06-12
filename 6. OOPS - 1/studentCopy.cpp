#include<iostream>
#include "student.cpp"

using namespace std;

int main(){
    Student s1(10, 1001);
    cout<<"S1 : ";
    s1.display();

    Student s2(s1);
    cout<<"S2 : ";
    s2.display();

    Student *s3 = new Student(20, 2001);
    cout<<"S3 : ";
    s3 -> display();
    
    Student s4(*s3);
    cout<<"S4 : ";
    s4.display();

    Student *s5 = new Student(*s3);
    cout<<"S5 : ";
    s5 -> display();
    
    Student *s6 = new Student(s1);
    cout<<"S6 : ";
    s6 -> display();
}