// Last updated: 7/19/2026, 10:13:18 PM
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int es=0;
        int ds=0;
        int s;
        for(int i=0;i<nums.size();i++){
            s=nums[i];
            ds+=nums[i];
            if(s>9){
                while(s!=0){
                    int m=s%10;
                es=es+m;
                s=s/10;
                } 
            }else{
                es+=nums[i];
            }
        }return es>ds?es-ds:ds-es;
            
    }
   
};