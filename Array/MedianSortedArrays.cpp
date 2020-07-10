class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        
        
        
        int lenA = nums1.size();
        int lenB = nums2.size();
       
    
       // To make sure We search shorter array first
        if(lenB<lenA)
        {
            findMedianSortedArrays(nums2,nums1);
        }
        int medPos = (lenA + lenB +1)/2;
        int start= 0;
        int end = lenA;
        while(start<=end){
            int partA = (start+end)/2;
            int partB = medPos-partA;
            
            // cout<<partA<<endl;
            // cout<<partB<<endl;
            int minA = (partA== lenA)? INT_MAX:nums1[partA];
            int maxB = (partB == 0)?INT_MIN : nums2[partB-1];
            
            int minB = (partB == lenB)? INT_MAX:nums2[partB];
            int maxA = (partA == 0)?INT_MIN : nums1[partA-1];
           
            
           // cout<<"here";
            if(maxA<=minB && maxB<=minA)
            {
                int leftend = max(maxA,maxB);
                int rightStart = min(minA,minB);
                
                if((lenA+lenB)&1)
                {
                    return leftend/1.0;
                }
                else
                    return (leftend+rightStart)/2.0;;
            }
            
            else if(maxA>minB){
                
                end=partA-1;
                
            }
            
            else
                start=partA+1;
        }
       return -1;
    }
};