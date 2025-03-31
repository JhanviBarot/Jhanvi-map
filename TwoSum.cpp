class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        for(int i=0 ; i<nums.size() ; i++){
            int firstnum = nums[i];
            int secnum = target - firstnum;
            if(mpp.find(secnum) != mpp.end()){
                return {mpp[secnum],i};
            }
            mpp[firstnum] = i;
        }
        return {-1,-1};
    }
};
