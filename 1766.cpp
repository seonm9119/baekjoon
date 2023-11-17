#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void topologicalSort(int n, const vector<int>* adj, int* indegree) {
    
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 1; i <= n; i++)
        if (indegree[i] == 0)
            pq.push(i);
        
 
    while (!pq.empty()) {
        int cur = pq.top();
        pq.pop();
        printf("%d ", cur);


        for (int next : adj[cur]) {
            indegree[next]--;
            if (indegree[next] == 0){
                pq.push(next);
                
            }
            
        }
    }
    printf("\n");


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

    topologicalSort(n, adj, indegree);

    return 0;
}