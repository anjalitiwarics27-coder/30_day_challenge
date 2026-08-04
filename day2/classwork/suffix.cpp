#include<iostream>
using namespace std;
int main(){
    int n=4;
    int sum=0;
    int arr[n]={1,2,3,4};
    for (int i=n-1;i>=0;i--){
        sum+=arr[i];
        cout<<"suffix :"<<sum<<endl;
    }
    
}