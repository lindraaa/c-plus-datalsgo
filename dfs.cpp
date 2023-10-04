#include <iostream>
#include <queue>
using namespace std;
//vector

class Graph{
	int m_V;
  	vector<vector<int>> m_adj;
public:
  	Graph(int V): m_V(V), m_adj(V){}
  	void addEdge(int u, int v){
    		m_adj[u].push_back(v);
  	}
  	void BFS(int s){
    		queue<int> Q;
    		vector<bool> visited(m_V, false);
    		Q.push(s);
    		visited[s] = true;
    		while(!Q.empty()){
      			int v = Q.front();
      			Q.pop();
      			cout << v << "  " <<endl;
      			for(int u : m_adj[v])
        			if(!visited[u]){
        				Q.push(u);
        				visited[u] = true;
        			}
    		}
  	}
};


int main(){
  	Graph G(5);
  	G.addEdge(0,1);
  	G.addEdge(0,3);
  	G.addEdge(1,2);
  	G.addEdge(3,2);
  	G.addEdge(3,4);
  	G.BFS(0);
  
  return 0;
}
