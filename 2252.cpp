#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void topologicalSort(int n, const vector<int>* adj, int* indegree, vector<int>& output) {
    
    queue<int> q;
    for (int i = 1; i <= n; i++)
        if (indegree[i] == 0)
            q.push(i);
        

    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        output.push_back(cur);

        for (int next : adj[cur]) {
            indegree[next]--;
            if (indegree[next] == 0)
                q.push(next);
            
        }
    }
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    vector<int> adj[n + 1];
    int indegree[n + 1] = {0,};

    while (m--) {
        int a, b;
        scanf("%d%d", &a, &b);
        adj[a].push_back(b);
        indegree[b]++;
    }

    vector<int> output;
    topologicalSort(n, adj, indegree, output);

    for (int i = 0; i < n - 1; i++)
        printf("%d ", output[i]);
    
    printf("%d", output[n - 1]);

    return 0;
}
