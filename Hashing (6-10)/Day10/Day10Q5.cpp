class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        vector<int> ans;

        for(auto i : nums1) m[i]++;
        for(auto i : nums2){
            if(m[i] > 0){
                ans.push_back(i);
            }
            m[i]--;
        }
        return ans;
    }
};