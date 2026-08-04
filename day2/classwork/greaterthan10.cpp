#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[n]={10,7,2,8,12,65,19};
    for(int i=0;i<n;i++){
        if(arr[i]>10){
            cout<<arr[i]<<endl;
        }
    }
}