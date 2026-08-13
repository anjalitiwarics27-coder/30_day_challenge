class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even_count=0;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int count=0;
            while(num>0){
                count++;
                num/=10;
            }
            if(count%2==0){
                even_count++;
            }
        }
        return even_count;
    }
};