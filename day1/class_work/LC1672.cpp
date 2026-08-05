// richest customer wealth 
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter the row ";
    cin>>row;
    cout<<"Enter the col ";
    cin>>col;
    int arr[50][50];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int maxWealth =0;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(sum>maxWealth){
            maxWealth=sum;
        }
    }
    cout << "Maximum Wealth = " << maxWealth << endl;

    return 0;
}