class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        map <int,int> mpp;
        for(int i=0 ; i<nums.size() ; i++){
            mpp[nums[i]]++;
        }
        priority_queue <pair<int,int>> pq;
        for(auto &it : mpp){
            pq.push({it.second,it.first});
        }

        for(int i=0 ; i<k; i++){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
