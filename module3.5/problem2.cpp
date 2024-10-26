#include<bits/stdc++.h>

using namespace std;

int main(){


        int  a,b,c;
        char s,s1;

        cin>>a>>s>>b>>s1>>c;

        if ((s=='+' && a+b == c) || (s=='-' && a-b == c) || (s=='*' && a*b == c)){

            cout<<"Yes\n";

        }else{

                    int ans1,ans2,ans3;

                    if(s == '+' && a+b != c){


                         ans1 = a + b;
                         cout<<ans1<<endl;

                    }else if(s == '-' && a-b != c){

                        ans2 = a - b;

                         cout<<ans2<<endl;
                    }else{

                            ans3 = a*b;
                            cout<<ans3<<endl;

                    }



        }


}
