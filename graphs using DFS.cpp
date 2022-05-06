#include<bits/stdc++.h>
using namespace std;
void DFS(int node,vector<int>&vis,vector<int>arr[]){
	cout<<node<<" ";
	vis[node]=1;
	for(auto it:arr[node]){
		if(!vis[it]){
			DFS(it,vis,arr);
		}
	}
}
int main(){
	int n,e;
	cin>>n>>e;
	int u,v;
	vector<int>arr[n+1];
	for(int i=0;i<e;i++){
		cin>>u>>v;
		arr[u].push_back(v);
		arr[v].push_back(u);
	}
	vector<int>vis(n+1,0);
	DFS(1,vis,arr);
}
