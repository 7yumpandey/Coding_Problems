class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>ans;
        for(int i=0;i<=matrix.size()-1;i++){
            vector<int>v;
            for(int j=matrix.size()-1;j>=0;j--){
                v.push_back(matrix[j][i]);
            }
            ans.push_back(v);   
        }
        matrix=ans;
    }
};