class Solution {
public:
    bool rotateString(string s, string goal) {
        queue<int>q1,q2;
        int n=s.size(),m=goal.size();
        if(n!=m){
            return false;
        }
        if(s==goal){
            return true;
        }
        for(int i=0;i<n;i++){
            q1.push(s[i]);
            q2.push(goal[i]);
        }
        int i=0;
        while(i<=n){
            if(q1==q2){
                return true;
            }
            
            int x=q1.front();
            q1.pop();
            q1.push(x);
            i++;
        }
        return false;
    
    }
};