// Rat in Maze 1 -> Geeks for Geeks

class Solution {
    
    
    bool isSafe(int x, int y, int s, vector<vector<int>> &visited, vector<vector<int>> &maze){
        if((x>=0 && x<s) && (y>=0 && y<s) && visited[x][y]==0 && maze[x][y] == 1){
            return true;
        }
        else{
            return false;
        }
    }
    
    void solve(vector<vector<int>> &maze, int s, vector<string> &ans, int x, int y, vector<vector<int>> visited, string path){
        // base case -> when you reached destination
        if(x == s-1 && y == s-1){
            ans.push_back(path);
            return ;
        }
        
        visited[x][y] = 1;
        
        // Moving in 4 directions
        
        // Down
        int newx = x+1;
        int newy = y;
        if(isSafe(newx, newy, s, visited, maze)){
            path.push_back('D');
            solve(maze, s, ans, newx, newy, visited, path);
            path.pop_back();
        }
        
        // Left
        newx = x;
        newy = y-1;
        if(isSafe(newx, newy, s, visited, maze)){
            path.push_back('L');
            solve(maze, s, ans, newx, newy, visited, path);
            path.pop_back();
        }
        
        
        // Right
        newx = x;
        newy = y+1;
        if(isSafe(newx, newy, s, visited, maze)){
            path.push_back('R');
            solve(maze, s, ans, newx, newy, visited, path);
            path.pop_back();
        }
        
        
        // Up
        newx = x-1;
        newy = y;
        if(isSafe(newx, newy, s, visited, maze)){
            path.push_back('U');
            solve(maze, s, ans, newx, newy, visited, path);
            path.pop_back();
        }
        visited[x][y] = 0;
    }
    
  public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        
        int s = maze[0].size();
        vector<string> ans;
        
        if(maze[0][0] == 0){
            return ans;
        }
        
        int srcx = 0;
        int srcy = 0;
        
        vector<vector<int>> visited = maze;
        // initialize with 0
        for(int i=0;i<s;i++){
            for(int j=0;j<s;j++){
                visited[i][j] = 0;
            }
        }
        
        string path = "";
        solve(maze, s, ans, srcx, srcy, visited, path);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
