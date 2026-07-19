// Last updated: 7/19/2026, 10:22:39 PM
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>a;
        for(int i=1;i<=n;i++){
            if(i%3==0 && i%5==0){
                a.push_back("FizzBuzz");
            }else if(i%3==0){
                a.push_back("Fizz");
            }else if(i%5==0){
                a.push_back("Buzz");
            }else {
                string s=to_string(i);
                a.push_back(s);
            }
        }return a;
    }
};