class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {      
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;
        int j=0;
        int n = nums1.size();
        int m = nums2.size();
        vector<int> v;
        while(i<n&&j<m)
        {
            if(nums1[i]>nums2[j])
                j++;
            else if(nums1[i]<nums2[j])
                i++;
            else
            {
                if(v.empty()||v.back()!=nums1[i])
                {
                    v.push_back(nums1[i]);
                    i++;
                    j++;
                }
                else
                {
                    i++;
                    j++;
                }
                
                    
            }
        }
        return v;
        
    }
};