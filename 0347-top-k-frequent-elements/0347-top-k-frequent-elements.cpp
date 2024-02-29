class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> ans;
        priority_queue<pair<int,int>> pq;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        for(auto it=mp.begin();it!=mp.end();it++)
        {
            pq.push(make_pair(it->second, it->first));

            if(pq.size() > (int)mp.size() - k)
            {
                ans.push_back(pq.top().second);
                pq.pop();
                
            }
        }
        return ans;
    }
};