// Last updated: 7/19/2026, 10:24:50 PM
class Solution {
public:
    double fact(double i, int j)
{
    if (j == 0 || i==1)
    {
        return 1;
    }
    if (j == 1)
    {
        return i;
    }


    double ans = fact(i, j / 2);
    if (j % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return i * ans * ans;
    }
}
    double myPow(double x, int n) {
        double a;
        if(n<0){
            double f=fact(x,n);
            a=(double)(1/f);
            return a;
        }else return fact(x,n);
    }
};