class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)     {
        int m = nums1.size();
        int n = nums2.size();
        int i=0,j =0,k=0;
        int arr[n+m];
        while(i<m&&j<n)
        {
            if(nums1[i]<nums2[j])
            {
                arr[k++] = nums1[i++];
            }
            else
            {
                arr[k++] = nums2[j++];
            }
        }
        while(i<m)
        {
            arr[k++] = nums1[i++];
        }
        while(j<n)
        {
            arr[k++] = nums2[j++];
        }
        int size = n+m;
        if(size%2==0)
        {
            return (((double)arr[(size/2)]+arr[(size/2)-1])/2);
        }
        else
            return ((double)arr[size/2]);
    }
};