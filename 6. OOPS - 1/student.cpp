// Contructor and this keyword

#include<iostream>
using namespace std;

class Student{
    public: 
        int rollno;
        
    private:
        int age;

    public:

        // Default Constructor
        Student(){
            cout<<"Default Constructor Called !"<<endl;
            rollno = 609;
            age = 22;
        }

        Student(int a, int r){
            cout<<"this : "<<this<<endl;
            cout<<"Parameterized Constructor Called !"<<endl;
            rollno = r;
            age = a;
        }

        Student(int rollno){
            cout<<"Single Parameterized Constructor Called !"<<endl;
            this -> rollno = rollno;
        }




        void display() {
            cout<<"Age : " <<  age << " " <<" Rollno : " <<rollno<<endl;
        }

        int getAge(){
            return age;
        }

        void setAge(int a){
            age = a;
        }
};