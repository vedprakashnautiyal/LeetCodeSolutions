//-----------------------------------------------------My Approach / Best Approach
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int match;
        int counter=0;
        if(ruleKey=="type") match=0;
        else if(ruleKey=="color") match =1;
        else if(ruleKey=="name")match=2;
        for(int i=0;i<items.size();i++){
            if(items[i][match]==ruleValue)
            counter++;
        }
        return counter;
    }
};