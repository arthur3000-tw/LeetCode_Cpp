class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int right_boundary = col-1;
        int bottom_boundary = row-1;
        int left_boundary = 0;
        int top_boundary = 0;
        int direction = 0;
        // 0(right) -> 1(down) -> 2(left) -> 3(up)
        int row_ptr = 0;
        int col_ptr = 0;
        
        while(right_boundary>=left_boundary && bottom_boundary>=top_boundary){
            ans.push_back(matrix[row_ptr][col_ptr]);
            switch(direction){
                case 0: //right
                    if(col_ptr+1 <= right_boundary){
                        col_ptr++;    
                    }
                    else{
                        direction = 1;
                        row_ptr++;
                        top_boundary++;
                    }
                    break;
                case 1: //down
                    if(row_ptr+1 <= bottom_boundary){
                        row_ptr++;
                    }
                    else{
                        direction = 2;
                        col_ptr--;
                        right_boundary--;
                    }
                    break;
                case 2: //left
                    if(col_ptr-1 >= left_boundary){
                        col_ptr--;    
                    }
                    else{
                        direction = 3;
                        row_ptr--;
                        bottom_boundary--;
                    }
                    break;
                case 3: //up
                    if(row_ptr-1 >= top_boundary){
                        row_ptr--;
                    }
                    else{
                        direction = 0;
                        col_ptr++;
                        left_boundary++;
                    }
                    break;
            }
        }
        return ans;
    }
};
