class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> transpose(col);
        for(int i=0; i<transpose.size();i++){
            transpose[i].resize(row);
        }
        for(int i=0; i<transpose.size();i++){
            for(int j=0; j<transpose[i].size();j++){
                transpose[i][j] = matrix [j][i];
            }
        }
        return transpose;
    }
};
