//--------------------------------------------------------------------My Approach
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int counter=0;
        for (int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if(nums[i]-nums[j]==k||nums[i]-nums[j]==-k){
                    counter++;
                }
            }
        }
        return counter;
    }
};




//-----------------------------------------------------------Better Approach
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int c=0;
        for(auto i:nums)
        {
            for(auto j:nums)
            {
                if(i-j==k)
                c++;
            }
        }
        return c;
    }
};