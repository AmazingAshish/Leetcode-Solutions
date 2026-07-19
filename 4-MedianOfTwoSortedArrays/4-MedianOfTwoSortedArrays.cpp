// Last updated: 7/19/2026, 10:25:24 PM
class Solution {
public:
    void mergeArrays(int arr1[], int arr2[], int n1,int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;
      while(i < n1){
      arr3[k++] = arr1[i++];
    }
      while(j < n2){
      arr3[k++] = arr2[j++];
    }
      sort(arr3, arr3+n1+n2);
}
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int arr1[nums1.size()];
        int arr2[nums2.size()];
        for(int i=0; i<nums2.size();i++){
            
            arr2[i]=nums2[i];
        }
        for(int i=0; i<nums1.size();i++){
            
            arr1[i]=nums1[i];
        }
        int n1=nums1.size();
        int n2=nums2.size();
        int arr3[n1+n2];
        
        mergeArrays(arr1, arr2, n1, n2, arr3);
      
        if ((n1+n2)%2==0){
            return (float)(arr3[(n1+n2)/2]+arr3[((n1+n2)/2)-1])/2;
        }else{
            return (float)(arr3[(n1+n2)/2]);
        } 
    }
};