class Solution {
public:
    bool isPalindrome(int x) {
    int temp = x;
    double rev = 0;
    if(x<0){
        return false;
    }
    while(temp !=0){
        int rem = temp%10;
        rev = rev*10 + rem ;
        temp/=10;
    }
    if(x==rev){
        return true;
    }else{
        return false;
    }
    }
};