class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median;
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        if(nums1.size()%2==0){
            int x=nums1.size()/2;
            median=(nums1[x-1]+nums1[x])/2.0;
            return median;
        }
        median=nums1[(nums1.size()/2)];
        return median;
        
    }
};