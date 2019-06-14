// Static Members

#include<iostream>
#include<string.h>

using namespace std;

class Student{

    static int totalStudent;   //total no. of student present


    public:
        int age;
        int rollno;
        

    Student(){
        totalStudent++;
    }

    int getRollNumber() {
        return rollno;
    }

    static int getTotalStudent(){
        return totalStudent;
    }

};

int Student :: totalStudent = 0; // initialize static members
