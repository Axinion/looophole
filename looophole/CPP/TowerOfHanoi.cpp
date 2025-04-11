void Solve(int n, int source, int destination, int helper, vector<vector<int>>& result){
    if(n==0){
        return;
    }
    Solve(n-1, source, helper, destination, result);
    result.push_back({source, destination});
    Solve(n-1, helper, destination, source, result);
}

vector<vector<int>> towerOfHanoi(int n)
{
    vector<vector<int>> result;
    Solve(n,1,3,2, result);
    return result;
}
