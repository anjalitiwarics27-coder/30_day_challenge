#include<iostream>
using namespace std;
int main(){
    int even =0;
    int odd=0 ;
    int arr[7]={7,3,2,9,4};
    for(int i=0;i<7;i++){
        if(arr[i]%2==0) even++;
        else odd++;
    }
    cout<<even<<endl;
    cout<<odd<<endl;

}