#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int main(){

    int t;
    scanf("%d", &t);

    while(t--){

        int n,k;
        scanf("%d%d", &n, &k);


        int d[n+1];
        for(int i=1; i<n+1; i++){
            scanf("%d", &d[i]);
        }


        int x,y, indegree[n+1]={0,};
        vector<int> adj[n+1];
        while(k--){
            scanf("%d%d", &x, &y);
            adj[x].push_back(y);
            indegree[y]++;
        }


        int w;
        scanf("%d", &w);


        queue<int> q;
        int totalTime[n+1]={0,};
        for(int i=1; i<n+1; i++){

            if(indegree[i]==0){
                q.push(i);
            }
            totalTime[i] = d[i];

        }

        while(!q.empty()){
            int cur = q.front();
            q.pop();

            for(int j=0; j<adj[cur].size(); j++){
                int next = adj[cur][j];

                indegree[next]--;
                totalTime[next] = max(totalTime[next], totalTime[cur]+d[next]);

                if(indegree[next]==0){
                    q.push(next);
                }
            }
        }


        printf("%d\n", totalTime[w]);


    }


    return 0;
}