#include<iostream>
#include<vector>
#include <queue>
#include <stack>
using namespace std;


void dfs(vector<vector<int>> &graph,int start) {
    int n=graph.size();
    int *visited=new int[n];
    for(int i=0;i<n;i++) {
        visited[i]=0;
    }

    stack<int> s;
    s.push(start);
    cout<<"DFS of graphs is: "<<endl;
    while(!s.empty()) {
        int current=s.top();
        s.pop();
        if(!visited[current]) {
            cout<<current<<" ";
            visited[current]=1;
        }
        for(int i=0;i<n;i++) {
            if(graph[current][i]==1 && visited[i]==0){
                s.push(i);
            }
        }
    }
}

void bfs(vector<vector<int>> &graph,int start) {
    int n=graph.size();
    int *visited=new int[n];
    for(int i=0;i<n;i++) {
        visited[i]=0;
    }

    queue<int> q;
    q.push(start);
    cout<<"BFS of graphs is: "<<endl;
    while(!q.empty()) {
        int current=q.front();
        q.pop();
        if(!visited[current]) {

            cout<<current<<" ";
            visited[current]=1;
        }
        for(auto key:graph[current]){
            if(visited[key]==0) {
                q.push(key);
            }
        }
    }
}











int main(){

    vector<vector<int>> listGraph = {
        {1, 2},    
        {0, 2, 3}, 
        {0, 1, 3}, 
        {1, 2, 4}, 
        {3}
    };

    vector<vector<int>> matrixGraph = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 1, 0},
        {1, 1, 0, 1, 0},
        {0, 1, 1, 0, 1},
        {0, 0, 0, 1, 0},
    };

    // dfs(matrixGraph,0);
    bfs(listGraph,0);

    return 0;
}