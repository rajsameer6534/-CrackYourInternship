// leetcode 122. Best Time to Buy and Sell Stock II


class Solution {
public:
    int solvemem(int index,int buy,vector<int>& prices,vector<vector<int>>&dp){
        if(index==prices.size()) return 0;
        if(dp[index][buy]!=-1) return dp[index][buy];
        int profit=0;
        if(buy){
            int buykro=-prices[index]+solvemem(index+1,0,prices,dp);
            int skipkro=0+solvemem(index+1,1,prices,dp);
            profit=max(buykro,skipkro);
        }
        else{
            int sellkro=prices[index]+solvemem(index+1,1,prices,dp);
            int skipkro=solvemem(index+1,0,prices,dp);
            profit=max(sellkro,skipkro);
        }
        return dp[index][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
     int n=prices.size();
     vector<vector<int>>dp(n,vector<int>(2,-1));
     return solvemem(0,1,prices,dp);   
    }
};