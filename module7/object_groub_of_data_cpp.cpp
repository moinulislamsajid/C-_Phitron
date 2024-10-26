#include<bits/stdc++.h>

using namespace std;

class Student{


public :

    string name;
    int roll;
    int marks;



};

int main()

{
    int n;

    cin>>n;

    Student stu[n];

    for(int i = 0; i<n; i++){

        cin>>stu[i].name>>stu[i].roll>>stu[i].marks;
    }

    // using selection sort

    for(int i = 0; i<n - 1; i++){

        for(int j = i + 1; j<n; j++){

            if(stu[i].roll < stu[j].roll){

                swap(stu[i],stu[j]);
            }
            else if(stu[i].marks == stu[j].marks){

                if(stu[i].roll > stu[j].roll){

                    swap(stu[i],stu[j]);
                }
            }
        }
    }


    // print the sorted the arrays

    for(int i =0; i<n; i++)
    {

        cout<<stu[i].name <<" " << stu[i].roll << " " << stu[i].marks << endl;
    }


}
