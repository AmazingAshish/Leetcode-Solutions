// Last updated: 7/19/2026, 10:20:51 PM
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        int mid=(s+e)/2;
        while(s<e){
            if (arr[mid]<arr[mid+1]){
                s=mid+1;
            }else{
                e=mid;
            }mid=(s+e)/2;
        }return s;
    }
};