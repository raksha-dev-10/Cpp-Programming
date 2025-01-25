// 4. Median of Two Sorted Arrays
// Link: https://leetcode.com/problems/median-of-two-sorted-arrays/description/?envType=problem-list-v2&envId=array&

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
       if (nums1.empty() && nums2.empty()) {
        throw invalid_argument("Both input arrays are empty");
    }
        int a = nums1.size();
        int b = nums2.size();
        vector<int>num3;
        for(int i=0; i<a; i++){
            num3.push_back(nums1[i]);
            }
        for(int j=0; j<b; j++){
            num3.push_back(nums2[j]);
        } 
        for(int i=0; i<=(a+b)-2; i++){
            for(int j=i+1; j<a+b; j++){
                if(num3[i]>num3[j]){
                int a=num3[i];
                int b=num3[j];
                int c=b;
                b=a;
                a=c;
                num3[i]=a;
                num3[j]=b;
                }
            }
        }

        int c=a+b;
        double k=0;
        if(c%2==0){
            c=c/2;
            k=num3[c]+num3[c-1];
            k=k/2;
            return k;
        }   
        else{
            c=c/2;
            k=num3[c];
            return k;
        }
    }
};