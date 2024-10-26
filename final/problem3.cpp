#include<bits/stdc++.h>

using namespace std;

class Student{

public:

    string name;
    int class1;
    char section;
    int id;



};



int main()

{
    int n;
    cin>>n;

    Student stu[n];

    for(int i = 0; i<n; i++)
    {

         cin>>stu[i].name>>stu[i].class1>>stu[i].section>>stu[i].id;
    }


    for(int i = 0; i<n/2; i++)
    {

        swap(stu[i].section , stu[n - i -1].section);
    }





     for(int  i = 0; i<n; i++)
    {
            cout<<stu[i].name<<" "<<stu[i].class1<<" "<<stu[i].section<<" "<<stu[i].id<<endl;

    }


}
