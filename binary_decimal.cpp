#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n,i=0,rem=0,ans=0;
    cout<<"Enter Number\n";
    cin>>n;
    for(i=0;n>0;i++){

        rem = n%10;
        ans=ans+rem*(pow(2,i));
        n=n/10;

    }
cout<<ans;
}
//Aman Chavan