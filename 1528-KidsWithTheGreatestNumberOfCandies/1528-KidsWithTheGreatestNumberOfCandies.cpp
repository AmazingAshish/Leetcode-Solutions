// Last updated: 7/19/2026, 10:18:24 PM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int candy=0;
        int maxi=*max_element(candies.begin(),candies.end());
        vector<bool>ans;
        
        for(int i=0; i<candies.size(); i++){
            
            if(candies[i]+extraCandies<maxi){
                ans.push_back(false);
            }else ans.push_back(true);
        }
        return ans;
    }
};