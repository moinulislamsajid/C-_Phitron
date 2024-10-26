#include<bits/stdc++.h>

using namespace std;

class Student{

public :

    char name[100];
    int id;
    float gpa;

    void display(){


        cout<<"\nYour name is : "<<name;
        cout<<"\nYour id is : "<<id;
        cout<<"\nYour gpa is : "<<gpa;

    }



};

int main(){


        Student s1,s2;

        cin.getline(s1.name,100);
        cin>>s1.id>>s1.gpa;

        getchar();


        cin.getline(s2.name,100);
        cin>>s2.id>>s2.gpa;

        s1.display();
        s2.display();


}
