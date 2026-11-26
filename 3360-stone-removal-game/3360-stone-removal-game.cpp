class Solution {
public:
    bool canAliceWin(int n) {
        int turn=0;
        int capacity=10;
        while(n>=capacity)
        {
            n=n-capacity;
            capacity--;
            turn++;
        }
        if(turn%2==0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};