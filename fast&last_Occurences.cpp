class Solution {
public:
    int first(vector<int> &nums, int target, int start, int end)
    {
        int res = -1;
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            if(nums[mid] == target)
            {
                res = mid;
                end = mid-1;
            }
            else if(nums[mid] > target)
            {
                end = mid-1;
                // first(nums, target, start, )
            }
            else
            {
                start = mid + 1;
                // first(nums, target, mid+1, end);
            }
        }
        return res;
    }

       int last(vector<int> &nums, int target, int start, int end)
    {
        int res = -1;
        while(start <= end)
        {
            
            int mid = start + (end-start)/2;
            if(nums[mid] == target)
            {
                // return mid;
                res = mid;
                start = mid+1;
            }
            else if(nums[mid] > target)
            {
                end = mid-1; 
                // first(nums, target, start, )
            }
            else
            {
                start = mid + 1;
                // first(nums, target, mid+1, end);
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int x = first(nums, target, start, end);
        int y = last(nums, target, start, end);
        vector<int> ans;
        ans.push_back(x);
        ans.push_back(y);
        return ans;
    }
};
