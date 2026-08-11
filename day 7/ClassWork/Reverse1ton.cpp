#include<iostream>
using namespace std;
void digit(int n){
    if(n<1) return;
    cout<< n <<" ";
    digit(n-1);
}
int main(){
    int n;
    cout<<"Enter the digit : ";
    cin>>n;
    digit(n);
}