class Solution {
public:
    void dfs(int k, int n, int start, vector<int> vec, vector<vector<int> > & res)
{
    if (k == 0 && n == 0)
    {
        res.push_back(vec);
    }
    if (k < 0 || n < 0)
        return;
    for(int i = start; i <= 9; i ++)
    {
        vec.push_back(i);
        dfs(k - 1, n - i, i + 1, vec, res);
        vec.erase(vec.end() - 1);
    }
}
vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int> > res;
    vector<int> vec;
    dfs(k, n, 1, vec, res);
    return res;
}
};
