//  Given an n × n binary matrix maze, write a C++ program using recursion and backtracking to find all possible paths from (0,0) to (n-1,n-1). 
// The rat can move in four directions: U, D, L, and R, cannot enter blocked cells (0), and cannot visit a cell more than once. Return all paths in lexicographical order.

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

void solve(int row, int col,vector<vector<int>>& maze,vector<vector<int>>& visited,string& path,vector<string>& ans) {

    int n = maze.size();

    // Destination reached
    if(row == n-1 && col == n-1) {
        ans.push_back(path);
        return;
    }

    // Directions: U, D, L, R
    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};
    string dir = "UDLR";

    // Try all 4 directions
    for(int i = 0; i < 4; i++) {

        int newRow = row + dr[i];
        int newCol = col + dc[i];

        // Check valid cell
        if(newRow >= 0 && newRow < n &&
            newCol >= 0 && newCol < n &&
            maze[newRow][newCol] == 1 && visited[newRow][newCol] == 0) {

            // Choose
            visited[newRow][newCol] = 1;
            path.push_back(dir[i]);

            // Explore
            solve(newRow, newCol, maze, visited, path, ans);

            // Backtrack
            path.pop_back();
            visited[newRow][newCol] = 0;
        }
    }
}

    void ratInMaze(vector<vector<int>>& maze, vector<string>& ans) {

        int n = maze.size();

        // Start/destination blocked
        if(maze[0][0] == 0 || maze[n-1][n-1] == 0)
            return;

        vector<vector<int>> visited(n, vector<int>(n, 0));

        string path = "";

        visited[0][0] = 1;

        solve(0, 0, maze, visited, path, ans);
        sort(ans.begin(), ans.end());
    }

int main(){
    vector<vector<int>>maze;
    vector<string> ans;
    int row, col;

    cout<<"Enter Rows ans cols of matrix Given : (row == col) : ";
    cin>>row>>col;

    maze.resize(row, vector<int>(col));

    cout<<"Enter Element of Maze : \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>maze[i][j];
        }
    }

    ratInMaze(maze, ans);

    cout<<"Here Paths are :: ";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}