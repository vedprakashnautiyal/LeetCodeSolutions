//---------------------------------------------------My Approach / Best Approach
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for(int i=0;i<words.size();i++){
            string temp=words[i];
            reverse(words[i].begin(),words[i].end());
            if(temp.compare(words[i])==0){
                ans+=temp;
                break;
            }
        }
        return ans;
    }
};