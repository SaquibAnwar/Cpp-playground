#include<iostream>
#include "student.cpp"

using namespace std;

int main(){
    Student s1;

    s1.display();

    Student * s2 = new Student;

    s2 -> display();

    Student s3(629, 20);

    s3.display();
    
    Student s4(629);

    s4.display();

    Student s5(629, 20);
    cout<< "Address of s5 : "<< &s5 <<endl;


}