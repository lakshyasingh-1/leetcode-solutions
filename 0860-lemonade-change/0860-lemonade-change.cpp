class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;
        for(int n : bills){
            if(n==5) five++;
            else if(n == 10){
                if(five>0) ten++, five--;
                else return false;
            }
            else{
                if(ten and five) ten--, five--;
                else if(five >= 3) five-=3;
                else return false;
            }
        }
        return true;
    }
};