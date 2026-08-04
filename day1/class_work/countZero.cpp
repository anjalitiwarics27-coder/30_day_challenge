#include<iostream>
using namespace std;
int main(){
    int n =7;
    int count=0;
    int arr[n]={10,20,0,0,0,0,87};
    for (int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
    }
    cout<<"count of zero :"<<count;
}