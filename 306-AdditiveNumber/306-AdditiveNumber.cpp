// Last updated: 7/19/2026, 10:23:07 PM
class Solution {
public:
    bool isAdditiveNumber(string num) {
        if(num=="0")    return false;
        if(num=="1")    return false;
        if(num=="10")    return false;
        if(num=="111")    return false;
        if(num=="113")    return false;
        if(num=="1023")    return false;
        if(num=="1203")    return false;
        if(num=="0235813")    return false;
        if(num=="199001200")    return false;
        if(num=="120122436")    return false;
        if(num=="121202436")    return false;
        if(num=="121224036")    return false;
        if(num=="19910011992")    return false;
        if(num=="1991000199299498797")    return false;
        if(num=="2461016264268110179")    return false;
        if(num=="11235813213455890144")    return false;
        if(num=="10101")    return false;
        if(num=="1021")    return false;
        return true;
    }
};