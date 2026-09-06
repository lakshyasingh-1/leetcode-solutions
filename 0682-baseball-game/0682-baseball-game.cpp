class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(auto ch: operations){
            if(ch == "D"){
                st.push(st.top()*2);
            }else if(ch == "C"){
                st.pop();
            }else if(ch == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a+b);
            }else{
                st.push(stoi(ch));
            }
        }
        int score = 0;
        if(st.empty()) return 0;
        while(!st.empty()){
            score += st.top();
            st.pop();
        }
        return score;
    }
};