class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX, sec = INT_MAX;
        for(int i: nums){
            if(i<=first) first = i;
            else if(i<=sec) sec = i;
            else return true;
        }
        return false;
    }
};