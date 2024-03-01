#include <iostream>
// https://leetcode.cn/problems/climbing-stairs/submissions/506358455/
class Solution {
public:
    int climbStairs(int n) {
      int pre = 0;
      int curr = 1;

      for (int i = 0; i < n; ++i) {
        int next = pre + curr;
        pre = curr;
        curr = next;
      }
      return curr;
    }
};

int main() {
    Solution solution;
    int res = solution.climbStairs(4);
    std::cout << "The res is: " << res << std::endl;
    return 0;
}
