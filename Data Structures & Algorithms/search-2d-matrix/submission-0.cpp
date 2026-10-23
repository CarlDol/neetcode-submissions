class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> targetRow;
        for(int i = 0; i < matrix.size(); i++){
            if(target >= matrix[i][0] && target <= matrix[i][matrix[0].size()-1]){
                targetRow = matrix[i];
                break;
            }
        }
        if(targetRow.size() == 0){
            return false;
        }
        int hi = targetRow.size()-1;
        int lo = 0;
        int mid = (hi + lo)/2;
        while(lo <= hi){
            if(targetRow[mid] == target){
                return true;
            } else if (targetRow[mid] < target){
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
            mid = (hi + lo)/2;
        }
        return false;
    }
};
