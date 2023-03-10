//---------------------------------------------------------1st Approach (Time Limit Exceeded)
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int counter=0;
        int i=1;
        while(i<nums.size()){
            while(nums[i]<=nums[i-1]){
                nums[i]++;
                counter++;
            }
            i++;
        }
        return counter;
    }
};

//--------------------------------------------------------2nd Approach (Best Approach)
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int counter=0;
        int diff=0;
        for (int i=0;i<nums.size()-1;i++){
            diff=nums[i]-nums[i+1];
            if(diff>=0){
                nums[i+1]+=diff+1;
                counter+=diff+1;
            }
        }
        return counter;
    }
};