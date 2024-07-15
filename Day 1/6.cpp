// LEETCODE-200. Number of Islands


#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int r, c;
    int row[8] = {-1, -1, -1, 1, 1, 1, 0, 0};
    int col[8] = {-1, 0, 1, -1, 0, 1, -1, 1};

    bool valid(int i, int j) {
        return i >= 0 && i < r && j >= 0 && j < c;
    }

    int numIslands(vector<vector<char>>& grid) {
        r = grid.size();
        c = grid[0].size();
         if(grid.empty() || grid[0].empty())
            return 0;
        
        queue<pair<int, int>> q;
        int counter = 0;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (grid[i][j] == '1') {
                    counter++;
                    q.push(make_pair(i, j));
                    grid[i][j] = '0'; // Mark as visited

                    while (!q.empty()) {
                        int new_i = q.front().first;
                        int new_j = q.front().second;
                        q.pop();

                        for (int k = 0; k < 8; k++) {
                            int ni = new_i + row[k];
                            int nj = new_j + col[k];
                            if (valid(ni, nj) && grid[ni][nj] == '1') {
                                grid[ni][nj] = '0'; // Mark as visited
                                q.push(make_pair(ni, nj));
                            }
                        }
                    }
                }
            }
        }

        return counter;
    }
};

