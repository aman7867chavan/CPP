#include<iostream>
using namespace std;

int main(){

    string a="aabbccddefghiiiiiijkkll";
    string ans="";
    int ar[123]={0};
    int size=a.length();
    for(int i=0;i<size;i++){
        if(ar[a[i]]==0){
            ans=ans+a[i];
            ar[a[i]]=1;
        }
    }
    cout<<ans;

}