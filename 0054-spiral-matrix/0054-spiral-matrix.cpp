class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int right=m-1;
        int left=0;
        int up=0;
        int down=n-1;
        int totalcount=n*m;
        int count=0;
        vector<int>ans;
        
        while(true){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[up][i]);
                count++;
            }
            if(totalcount==count){
                break;
            }
            up++;
            for(int i=up;i<=down;i++){
                ans.push_back(matrix[i][right]);
                count++;
            }
            if(totalcount==count){
                break;
            }
            right--;
            for(int i=right;i>=left;i--){
                 ans.push_back(matrix[down][i]);
                count++;
            }
            if(totalcount==count){
                break;
            }
            down--;
            for(int i=down;i>=up;i--){
                 ans.push_back(matrix[i][left]);
                count++;
            }
            left++;
            
        }
        return ans;
    }
};