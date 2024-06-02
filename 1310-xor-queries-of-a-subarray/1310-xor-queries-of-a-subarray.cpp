class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int>ans;
        vector<int>preXor(n,0);
        preXor[0]=arr[0];
        for(int i=1;i<n;i++){
            preXor[i]=preXor[i-1]^arr[i];
        }
        
        for(int i=0;i<queries.size();i++){
            int a=queries[i][0];
            int b=queries[i][1];
            if(a==0){
                ans.push_back(preXor[b]);
            }
            else{
                ans.push_back(preXor[a-1]^preXor[b]);
            }
        }
        return ans;
    }
};