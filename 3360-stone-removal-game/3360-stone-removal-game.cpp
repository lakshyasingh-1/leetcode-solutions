class Solution {
public:
    bool canAliceWin(int n) {
        int turn=0;
        int capacity=10;
        while(n>=capacity){
            n = n-capacity;
            capacity--;
            turn++;
        }
        return turn%2==1?true:false;
    }
};