class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> targetRow;
        int hi = matrix.size()-1;
        int lo = 0;
        int mid = (hi + lo)/2;
        while(lo <= hi){
            if(matrix[mid][0] == target){
                return true;
            } else if(lo == hi){
                if(matrix[mid][0] > target){
                    return false;
                }
                targetRow = matrix[mid];
                break;
            } else if(matrix[mid][0] <= target && matrix[mid][matrix[mid].size()-1] >= target){
                targetRow = matrix[mid];
                break;
            } else if(matrix[mid][0] < target){
                lo = mid+1;
            } else{
                hi = mid-1;
            }
            mid = (lo + hi)/2;
        }
        if(targetRow.size() == 0){
            return false;
        }
        hi = targetRow.size()-1;
        lo = 0;
        mid = (hi + lo)/2;
        while(lo <= hi){
            if(targetRow[mid] == target){
                return true;
            } else if(targetRow[mid] < target){
                lo = mid+1;
            } else{
                hi = mid-1;
            }
            mid = (hi + lo)/2;
        }
        return false;
    }
};
