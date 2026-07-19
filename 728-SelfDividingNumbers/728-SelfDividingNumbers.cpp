// Last updated: 7/19/2026, 10:21:24 PM
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int check=1;
    vector<int> ans;
        for(int i=left; i<=right; ++i)
    {
        if(i%10==0) continue;
        int check=1;
        int num=i; 
        while(num>0)
        {
            int rem=num%10;
            if(rem==0 || i%rem!=0)
            {
                check=0;
                break;
            }
            num=num/10;
        }

        if(check==1 && i%10!=0)
            ans.push_back(i);
    }
    return ans;
}
};