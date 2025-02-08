class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> merge;
        for(int i =0;i<n;i++){
            merge.push_back(nums1[i]);
        }
        for(int i =0;i<m;i++){
            merge.push_back(nums2[i]);
        }
        sort(merge.begin(),merge.end());
        int c = merge.size();
        double med = 0;
        if(c%2==1){
           med = merge[c/2];
        }
        if(c%2==0){
            double a = merge[(c/2)];
            double b = merge[(c/2) -1];
            med = (a+b)/2.0;
        }
        return med;
    }
};
