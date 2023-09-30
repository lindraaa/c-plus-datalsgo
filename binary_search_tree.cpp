#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class Graph{
    int a;
    vector<vector<int>> adja;

public:
    Graph(int v):a(v), adja(v){};
    void addedge(int u, int r){
        adja[u].push_back(r);
    }

void Bfs(int i){
    queue<int>q;
    vector<bool> visited(a , false);
    q.push(i);
    visited[i]=true;
    while(!q.empty()){
        int r = q.front();
        q.pop();
        cout << r << endl;
        for(int i : adja[r])
            if(!visited[i]){
                q.push(i);
                visited[i] = true;
            }
    }
}



};


int main(){

Graph newedg(7);
    newedg.addedge(0,1);
    newedg.addedge(0,3);
    newedg.addedge(1,2);
    newedg.addedge(3,2);
    newedg.addedge(3,4);
    newedg.addedge(5,6); 
    newedg.addedge(4,5);
    newedg.Bfs(0);
   



    return 0;
}
