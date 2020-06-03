#include<iostream>
#include<vector>
#include<algorithm>

class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        std::vector<bool> result(candies.size(), false);
        std::generate(result.begin(), result.end(), [n=0, ele_max = *std::max_element(candies.begin(), candies.end()) - extraCandies, &candies]() mutable -> int {return candies[n++] >= ele_max;});
        return result;
    }
};

int main () {
    std::vector<int> aa = {1, 3, 5, 7, 9};
    Solution s;
    std::vector<bool> result = s.kidsWithCandies(aa, 5);
    return 0;
}
