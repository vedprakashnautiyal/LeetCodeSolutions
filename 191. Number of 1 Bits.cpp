//---------------------------------------------------My Approach / Best Approach
class Solution {
public: //Bit manipulation
    int hammingWeight(uint32_t n) {
        int counter=0;
        while (n!=0){
            if(n&1==1){            //if bit & 1== True
                counter++;
            }
            n=n>>1; //shift operator
        }
        return counter;
    }
};