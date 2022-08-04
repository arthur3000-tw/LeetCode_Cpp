class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row_dir = 1;
        int col_dir = 1;
        int row = matrix.size();
        int col = matrix[0].size();
        int row_ptr=0;
        int col_ptr=0;
        int right_boundary = col-1;
        int bottom_boundary = row-1;
        int left_boundary = 0;
        int top_boundary = 0;
        int counter = 0;
        
        while(counter!=row*col){
            ans.push_back(matrix[row_ptr][col_ptr]);
            counter++;
            if(col_dir==1 && col_ptr!=right_boundary){
                col_ptr += col_dir;
                continue;
            }
            if(col_dir==1 && col_ptr==right_boundary){
                row_dir = 1;
                col_dir = 0;
                row_ptr += row_dir;
                top_boundary++;
                continue;
            }
            if(row_dir==1 && row_ptr!=bottom_boundary){
                row_ptr += row_dir;
                continue;
            }
            if(row_dir==1 && row_ptr==bottom_boundary){
                col_dir = -1;
                row_dir = 0;
                col_ptr += col_dir;
                right_boundary--;
                continue;
            }
            if(col_dir==-1 && col_ptr!=left_boundary){
                col_ptr += col_dir;
                continue;
            }
            if(col_dir==-1 && col_ptr==left_boundary){
                row_dir = -1;
                col_dir = 0;
                row_ptr += row_dir;
                bottom_boundary--;
                continue;
            }
            if(row_dir==-1 && row_ptr!=top_boundary){
                row_ptr += row_dir;
                continue;
            }
            if(row_dir==-1 && row_ptr==top_boundary){
                col_dir = 1;
                row_dir = 0;
                col_ptr += col_dir;
                left_boundary++;
                continue;
            }
        }
        return ans;
    }
};
