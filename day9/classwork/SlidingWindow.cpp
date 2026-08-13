//#include<iostream>
#include <bits/stdc++.h>
//#include<limits>
//#include<vector>
using namespace std ;
int main(){
    vector<int> nums={2,1,5,1,3,2}
    int left =0;
    int k=3;
    int windowSum=0;
    int ans = INT_MIN;
    for (int right =0;right <nums.size();right++){
        windowSum +=nums[right];
        if(right-left+1==k){
            ans=max(ans,windowSum);
            windowSum -=nums[left];
            left++;
        }

    }
    cout<<ans;
    return 0;
}