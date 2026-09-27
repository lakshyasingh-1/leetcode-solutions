class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
         for (int s : students) {
            q.push(s);
        }
        int c = 0;
        int i = 0;
        while(q.size() != 0 && c != q.size()){
            if(q.front() == sandwiches[i]){
                q.pop();
                c = 0;
                i++;
            }
            else{
                int x = q.front();
                q.pop();
                q.push(x);
                c++;
            }
        }
        return q.size();
    }
};