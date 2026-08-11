#include<iostream>
using namespace std;
int series(int n ){
    if(n<=1) return n;
    else{
        return  series(n-1) + series(n-2);
    }
}
int main(){
    int n;
    cout<<"Enter the series :";
    cin>>n;
    series(n);
    cout<<"Series :"<<series(n)<<" "<<endl;
}