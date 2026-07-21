class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int a =0 , o=0 , b=0 ; 

        int n = s.length() ; 
        int maxi=0 ; 
        int one=0 ; 
        for(int i=0 ; i<n ; i++) {
            if(s[i]=='1')one++ ; 
            if(s[i]=='0' && o==0) {
                a++ ; 
            } else if(s[i]=='1' && b==0 && a!=0) {
                o++ ; 
            } else if(s[i]=='0' && o!=0) {
                b++ ; 
                maxi=max(maxi , a+b) ; 
            } else if(s[i]=='1' && b!=0) {
                a=b ; 
                o=1 ; 
                b=0 ; 
            }
        }
        
        

        return one + maxi ; 


    }
};