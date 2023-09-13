#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);

    priority_queue<int, vector<int>, greater<int>> pq;
    int N;  int temp_a; int temp_b; int total = 0;
    cin >> N;
    for(int i=0; i<N; i++){
        int temp;   cin >> temp;
        pq.push(temp);
    }

    if(pq.size() != 1){
        while(true){
            temp_a = pq.top(); pq.pop();
            temp_b = pq.top(); pq.pop();
            total += temp_a + temp_b;
            pq.push(temp_a + temp_b);
            if(pq.size() == 1)
                break;

        }
    }
    
    cout << total;
}