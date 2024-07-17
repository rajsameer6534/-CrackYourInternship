



//leetcode 70. Climbing Stairs

class Solution {
public:
    int climbStairs(int n) {
            if (n == 0 || n == 1) {
            return 1;
        }
        vector<int>dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        for(int stair=2;stair<=n;stair++){
            for(int step=1;step<=2;step++){
                dp[stair] += dp[stair - step];
            }
        }
        return dp[n];
    }
};