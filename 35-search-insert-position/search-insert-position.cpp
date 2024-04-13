class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size();
        int mid;
        if(target > nums[high-1]) {   //[high -1] because we have to exclude from index 0
            return high;  //only look for the right side of the array
        }
        while(low <= high){
            mid = ((high - low)/2) + low;
            if(nums[mid] == target) {  
                return mid;
            }
          
            if(target < nums[mid]) {     
                high = mid - 1;    
            }
            else {
             low = mid + 1;        
            }
          
        }
        return low;   
    }
};