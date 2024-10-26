#include<bits/stdc++.h>

using namespace std;

class Student
{


public :


    int roll;
    int class_no;
    float gpa;
    string shift;


    // create a parameterized constructor to initial the value


    Student(int roll, int class_no, float gpa, string shift)
    {


        this->roll = roll;
        this->class_no = class_no;
        this->gpa = gpa;
        this->shift = shift;

    }


    void display()
    {

        cout<<"\nYour Roll is : "<<roll;
        cout<<"\nYour class is : "<<class_no;
        cout<<"\nYour gpa is : "<<gpa;
        cout<<"\nYour Shift is : "<<shift;





    }



};

int main()
{


    Student s1(1,3,2.33,"sajid");
    s1.display();


}
