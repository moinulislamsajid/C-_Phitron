#include<iostream>
#include<algorithm>
#include<utility> // for swap two values

using namespace std;

void swapN(int x,int y)
{

    int temp = x;
    x = y;
    y = temp;

    cout<<"\nX is : "<<x;
    cout<<"\nY is : "<<y;

}

int main()
{

    int x,y;

    cout<<"enter two value : ";
    cin>>x>>y;

    int minN = min(x,y);

    cout<<"Minimum number is : "<<minN;


    int maxN = max(x,y);

    cout<<"\nMaximum number is : "<<maxN;


    swapN(x,y);
    swap(x,y);
    cout<<"\nX is : "<<x;
    cout<<"\nY is : "<<y;







}
