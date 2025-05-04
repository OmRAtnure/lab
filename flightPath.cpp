#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;


void makeGraph(vector<string> &citis,vector<vector<int>> &graphs) {
    int fuel;
    int n=citis.size();
    for(int i=0;i<n;i++){
        for (int j = i+1; j < n; j++){
            cout<<"Enter fule to go from "<<citis[i]<<" to "<<citis[j]<<": ";
            cin>>fuel;
            graphs[i][j]=fuel;
            graphs[j][i]=fuel;
        }   
    }
}

void printGraph(vector<string> &cities,vector<vector<int>> &graph) {
    int n=cities.size();
    cout<<setw(8)<<" ";
    for(int i=0;i<n;i++) {
        cout<<setw(8)<<cities[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++) {
        cout<<setw(8)<<cities[i];
        for(int j=0;j<n;j++) {
            cout<<setw(8)<<graph[i][j];
        }
        cout<<endl;
    }
}


int main(){
int n;
cout<<"Enter number of cities: ";
cin>>n;
vector<string> citis(n);
for(int i=0;i<n;i++) {
    cout<<"enter name of city: ";
    cin>>citis[i];
}
vector<vector<int>> graph(n,vector<int>(n,0));


makeGraph(citis,graph);
printGraph(citis,graph);



 return 0;
}