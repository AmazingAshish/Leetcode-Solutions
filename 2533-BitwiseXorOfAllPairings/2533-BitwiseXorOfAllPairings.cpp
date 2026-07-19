// Last updated: 7/19/2026, 10:13:46 PM
class Solution {

public:

    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {

        return ((nums2.size()&1)?accumulate(nums1.begin(), nums1.end(), 0, bit_xor<>{}):0)^((nums1.size()&1)?accumulate(nums2.begin(), nums2.end(), 0, bit_xor<>{}):0);

    }

};


        
    
