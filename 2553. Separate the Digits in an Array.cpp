//--------------------------------------------------------1st Approach
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector <int> ans;
        vector <int> temp;
        for(auto x:nums){
            if(x<=9) ans.push_back(x);
            else{

            while(x!=0){
                int digit=x%10;
                temp.push_back(digit);
                x/=10;
            }
            reverse(temp.begin(),temp.end());
            for(auto x:temp){
                ans.push_back(x);
            }
            temp.clear();
            }
        }
        return ans;
    }
};


//------------------------------------------------------2nd Approach (Better Approach)
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
      for(int i=nums.size()-1;i>=0;i--)
          {
          int num=nums[i];
          while(num!=0)
              {
              ans.push_back(num%10);
              num/=10;
          }
      }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};