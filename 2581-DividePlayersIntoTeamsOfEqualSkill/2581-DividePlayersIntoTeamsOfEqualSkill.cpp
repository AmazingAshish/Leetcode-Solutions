// Last updated: 7/19/2026, 10:13:29 PM
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n= skill.size();
        if(n==2){
            return skill[0]*skill[1];
        }
        sort(skill.begin(),skill.end());
        long long ans=0;
        int i=0,j=n-1;
        long long sum=skill[i]*skill[j];
        int sum2=skill[i]+skill[j];
        while(i<j){

            ans+=sum;
            i++;
            j--;
            if(sum2!=skill[i]+skill[j]){
                return -1;
            }
            sum=skill[i]*skill[j];
        }
        return ans;
    }
};