#include<iostream>
using namespace std;
int main(){
    int n=4;
    int sum=0;
    int arr[n]={1,2,3,4};
    for (int i=0;i<4;i++){
        sum+=arr[i];
        cout<<"Prefix :"<<sum<<endl;
    }
    
}