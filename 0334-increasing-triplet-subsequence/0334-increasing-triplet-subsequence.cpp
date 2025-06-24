class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;
        int second = INT_MAX;

        for (int num : nums) {
            if (num <= first) {
                first = num;           // new minimum
            } else if (num <= second) {
                second = num;          // new second minimum
            } else {
                return true;           // found third number
            }
        }
        return false;
    }
};
