class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxe = *max_element(candies.begin(), candies.end());
        for(int i=0; i<candies.size(); i++) result.push_back(candies[i]+extraCandies >= maxe ?true : false);
        return result;
    }
};