#include<bits/stdc++.h>
using namespace std;

void sorted(int arr[],int n){

    int t;

    for(int i=0;i<n;i++){

        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                t=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=t;

            }
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
}

int main()
{

    int arr[]={5,4,76,3,2,1,8,7,7,88};
    int n=sizeof(arr)/sizeof(arr[1]);
    cout<<"array size="<<n<<endl;
 sorted(arr,n);
    int a[]={3,2,1};
    int i=0;
    sort(a,a+3);//in built sort
    while(i!=3){
    cout<<endl<<a[i]<<endl;i++;
    }
   
    
}
//Aman Chavan