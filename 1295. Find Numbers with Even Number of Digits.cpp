//--------------------------------------------------My Approach / Best Approach
class Solution {
public:
    int findNumbers(vector<int>& nums) {
       int n = nums.size();
        int cnt = 0;
        int ans = 0;
        for(int i=0; i<n; i++){
            int k = nums[i];
            cnt = 0;
            while(k){
                 k /= 10;
                cnt++;
            }
            if(cnt % 2 == 0){
                ans++;
            }
        }
        return ans;
    }
};