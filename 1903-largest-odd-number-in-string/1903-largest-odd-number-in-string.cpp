class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length()-1;
        while(n>=0){
            if(num[n]%2==1) return num.substr(0,1+n);
            n--;
        }
        return "";
    }
};