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
