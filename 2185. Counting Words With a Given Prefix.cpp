//-----------------------------------------------------------My Approach / Best Approach
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        for (int i=0;i<words.size();i++){
            if(words[i].find(pref)==0){
                ans++;
            }
        }
        return ans;
    }
};