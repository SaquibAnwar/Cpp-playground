// 7.3) Initialization List

#include<iostream>
#include<string.h>

using namespace std;

class Student{
    public:
        int age;
        const int rollno;
        int &x;

        //Initialization list
        Student(int r, int a) : rollno(r), age(a), x(this -> age) {
            //rollno = r;
        }

        void display(){
            cout << rollno << " " << age << endl;
        }

};