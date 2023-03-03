//------------------------------------------------------------------My Approach / Best Approach
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum_num =accumulate(nums.begin(),nums.end(),0);
        int sum_digits = 0;
        for (int i=0;i<nums.size();i++){
            if(nums[i]<10){
                sum_digits+=nums[i];
            }
            else{
                while(nums[i]!=0){
                    sum_digits+=nums[i]%10;
                    nums[i]/=10;
                }
            }
        }
        return sum_num-sum_digits;
    }
};