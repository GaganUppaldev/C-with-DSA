//File created to save all baiscs of graphs for beginners

#include<iostream>
#include<map>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
public:
   unordered_map<int , list<int>>adj; //hashmap created

   //adding edges
   void addEdge(int u , int v , bool direction){
      // direction 0 -> undirected graph
      // direction 1 -> directed graph


      //creting edge from u to v
      adj[u].push_back(v);
      
      if(direction == 0){
         adj[v].push_back(u);
      }
   }
   void printAdj(){
      for(auto i: adj){
         cout<<i.first<<"->";
         for(auto j: i.second){
            cout<<j<<",";
         }
         cout<<endl;
      }
   }


};
int main(){
  cout<<"Graphs"<<endl;

   int n ;
   cout<<"enter number of nudes"<<endl;
   cin>>n;

   int m ;
   cout<<"enter Number of edges"<<endl;
   cin>>m;

   graph g;

   for(int i = 0 ; i<m ; i++){
      int u, v;
      cin>>u>>v;
      //creating an undirected graph
      g.addEdge(u,v,0);

      
         
   }
   //printing graph
   g.printAdj();
}



//=============================================================================================================================================================
#include <iostream>
#include <vector>
using namespace std;
// Create a graph with n nodes
   class Graph {
public:
    int V; // Number of vertices
    vector<vector<int>> adjList; // Adjacency list

    // Constructor
    Graph(int vertices) {
        V = vertices;
        adjList.resize(V);
    }

    // Add edge (undirected)
    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // comment this if it's a directed graph
    }

    // Print the graph
    void printGraph() {
        for (int i = 0; i < V; i++) {
            cout << "Node " << i << ": ";
            for (int neighbor : adjList[i]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    cout << "--- Graph ---" << endl;

    Graph g(5); // 5 nodes: 0 to 4

    // Add some edges
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);

    // Print the graph
    g.printGraph();

    return 0;
}


//=============================================================================================================================================================
/*  //Basic Graph 
#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<vector<int>>& adj, int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u); // Undirected graph
}

void printGraph(const vector<vector<int>>& adj) {
    for (int i = 0; i < adj.size(); i++) {
        cout << i << ": ";
        for (int node : adj[i]) {
            cout << node << " ";
        }
        cout << endl;
    }
}

int main() {
    int V = 5; // Number of vertices
    vector<vector<int>> adj(V);

    // Add edges
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);

    // Print graph
    printGraph(adj);

    return 0;
}
*/
