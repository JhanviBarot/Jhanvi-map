class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int lastsmall = INT_MIN;
        int count = 0;
        int length = 1;
        for(int i=0; i<n ; i++){
            if(nums[i]-1 == lastsmall) {
                count++;
                lastsmall = nums[i];
            }
            else if(lastsmall != nums[i]) {
                count = 1;
                lastsmall = nums[i];
            }
            length = max(length,count);
        }
        return length;
    }
};
