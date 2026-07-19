// Last updated: 7/19/2026, 10:11:35 PM
class Solution {

public:

    string clearDigits(string s) {

        string stack;

        for (char c : s) {

            if (isdigit(c)) {

                if (!stack.empty()) stack.pop_back();

            } else {

                stack.push_back(c);

            }

        }

        return stack;

    }

};

   
        
    
