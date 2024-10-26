#include<iostream>

using namespace std;

int main(){

    int a = 10;

    char b = (char) a;

    cout<<b;

    char c = 'a';

    int v = static_cast<int> (c);  // convert to asci value

    cout<<v;



}
