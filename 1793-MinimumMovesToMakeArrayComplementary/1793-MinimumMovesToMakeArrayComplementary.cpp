// Last updated: 7/19/2026, 10:17:12 PM
class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {
    int n=nums.size();
    vector<int> v(2*limit + 2, 0);
    
    int ans=INT_MAX;
    for(int i=0;i<n/2;i++){
        int l=min(nums[i],nums[n-i-1])+1;
        int mid=nums[i]+nums[n-i-1];
        int r=max(nums[i],nums[n-i-1])+limit+1;
        v[2]+=2;    //2 moves
        v[l]--;     //1 move
        v[mid]--;   //0 move
        v[mid+1]++; //1 move
        v[r]++;     //2 moves
    }
    
    for(int i=2;i<2*limit+2;i++){
		v[i]+=v[i-1];  //accumulating results
       
        ans=min(ans,v[i]);   //find min of all moves
    }
    cout<<"\n";
    return ans;
    
}
};