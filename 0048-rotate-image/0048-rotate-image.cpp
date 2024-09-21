class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            vector<int>v;
            for(int j=0;j<n;j++){
                v.push_back(matrix[j][i]);
            }
            reverse(v.begin(),v.end());
            ans.push_back(v);
        }
        matrix=ans;
    }
};