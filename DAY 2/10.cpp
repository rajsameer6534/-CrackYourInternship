
//LEETCODE-73. Set Matrix Zeroes
//Given a m x n matrix, if an element is 0, set its entire row and
//column to 0. Do it in place.
// TIME COMPLEXITY-M X N

class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0) q.push(make_pair(i,j));
            }
        }
        while(!q.empty()){
            int a=q.front().first;
            int b=q.front().second;
            q.pop();
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    mat[a][j]=0;
                   // mat[i][a]=0;
                    //mat[b][j]=0;
                    mat[i][b]=0;
                }
            }
        }
    }
};