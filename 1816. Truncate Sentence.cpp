//---------------------------------------------------------My Approach
class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        int spaces = k;
        string ans = "";
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {

                count++;
                if (count == spaces)
                {
                    return ans;
                }

                ans += s[i];
            }
            else
            {
                ans += s[i];
            }
        }
        return ans;
    }
};