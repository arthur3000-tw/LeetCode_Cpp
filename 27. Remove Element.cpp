class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int counts = 0;
        for(auto iter=nums.begin(); iter<nums.end(); iter++){
            if(iter - nums.begin() + counts >= nums.size()){
                break;
            }            
            while(*iter == val){
                nums.erase(iter);
                nums.push_back(val);
                counts++;
                if(iter - nums.begin() + counts >= nums.size()){
                    break;
                }
            }

        }
        return (nums.size()-counts);
    }
};
