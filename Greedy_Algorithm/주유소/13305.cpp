#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;  cin >> N;
    vector<int> dist(N,0);
    vector<int> cost(N,0);
    for(int i=0; i<N-1; i++){
        cin >> dist[i];
    }
    for(int i=0; i<N; i++){
        cin >> cost[i];
    }
    int select = cost[0];
    int total = select * dist[0];

    for(int i=1; i<N-1; i++){
        if(cost[i] < select){
            select = cost[i];
            total += select * dist[i];
        }
        else
            total += select * dist[i];
    }
    cout << total;
}