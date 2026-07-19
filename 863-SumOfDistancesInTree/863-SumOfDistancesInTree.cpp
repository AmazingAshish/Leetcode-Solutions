// Last updated: 7/19/2026, 10:20:55 PM
class Solution {
public:
    int ans_node_0 = 0;
    int solve(int node, int curr_depth, int par, vector<int>adj[],vector<int>&arr){
        ans_node_0+=curr_depth;
        int count = 1;
        for(auto i:adj[node]){
            if(i!=par) count+=solve(i,curr_depth+1,node,adj,arr);
        }
        arr[node] = count;
        return count;
    }
    void solve2(int node,int par,vector<int>adj[],vector<int>&count_of_children,vector<int>&ans, int n){
        int par_ans = ans[node];
        for(auto i:adj[node]){
            if(i!=par){
                ans[i] = par_ans -count_of_children[i] + n - count_of_children[i];
                solve2(i,node,adj,count_of_children,ans,n);
            }
        }
    }
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<int>count_of_children(n,0);
        vector<int>adj[n];
        for(auto i:edges){
            int u = i[0];
            int v = i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        solve(0,0,-1,adj,count_of_children);
        //for(int i = 0;i<n;i++) cout<<count_of_children[i]<<" ";
        vector<int>ans(n,0);
        ans[0] = ans_node_0;
        solve2(0,-1,adj,count_of_children,ans,n);
        return ans;
    }
};