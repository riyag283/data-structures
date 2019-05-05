//Graph as Adjacency Matrix
//To Graph as Adjacency List
#include<iostream>
using namespace std;

int main(){
	cout<<"Enter no. of vertices: ";
	int n;
	cin>>n;
	int adjm[n][n];
	for(int i=0;i<n;i++){
		cout<<"\nFor Vertice "<<i;
		for(int j=0;j<n;j++){
			cout<<"\nenter 1 if it has an egde to "<<j;
			cout<<" or put 0: ";
			cin>>adjm[i][j];
		}
	}
		for(int i=0;i<n;i++){
		cout<<"\n"<<i<<"--> ";
		for(int j=0;j<n;j++){
			if(adjm[i][j]==1)
				cout<<"\t"<<j;
		}
	}
	return 0;
}
