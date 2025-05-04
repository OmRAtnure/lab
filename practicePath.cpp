#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

void makeGraph(vector<string> &cities, vector<vector<int>> &graph) {
    int n=cities.size();
    int fuel;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            cout<<"Enter fuel to from "<<cities[i]<<" to "<<cities[j];
            cin>>fuel;
            graph[i][j]=fuel;
            graph[j][i]=fuel;
        }
    }
}

void printGraph(vector<string> &cities, vector<vector<int>> &graph) {
    int n = cities.size();
    cout<<setw(8)<<" ";
    for(int i=0;i<n;i++) {
        cout<<setw(8)<<cities[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++) {
        cout << setw(8) << cities[i];
        for(int j=0;j<n;j++) {
            cout << setw(8) << graph[i][j];
        }
        cout<<endl;
    }
}

    int main()
{
    int n;
    cout<<"Enter number of cities: ";
    cin>>n;
    vector<string> cities (n);
    
    for(int i=0;i<n;i++) {
        cout<<"Enter name of city: ";
        cin>>cities[i];
    }

    vector<vector<int>> graph(n,vector<int> (n,0));
    makeGraph(cities,graph);
    printGraph(cities,graph);

    return 0;
}