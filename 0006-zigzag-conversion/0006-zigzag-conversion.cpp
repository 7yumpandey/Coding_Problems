class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
        return s;

    vector<vector<char>> ans(numRows);

    int index = 0;
    int direction = 1; // 1 for down, -1 for up

    for (char c : s) {
        ans[index].push_back(c);
        if (index == 0)
            direction = 1;
        else if (index == numRows - 1)
            direction = -1;
        index += direction;
    }

    string result;
    for (const auto& row : ans) {
        for (char c : row) {
            result.push_back(c);
        }
    }

    return result;
}
    
};