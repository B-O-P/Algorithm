#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;  cin >> n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int max = arr[0] * n;
    for(int i=0; i<n; i++)
        if(max < arr[i] * (n - i))
            max = arr[i] * (n - i);
    cout << max;
}