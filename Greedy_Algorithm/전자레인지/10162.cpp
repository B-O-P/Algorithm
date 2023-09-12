#include <iostream>

using namespace std;

int main()
{
    int T;  cin >> T;
    int m[3] = {300,60,10};
    int c[3] = {0,0,0};

    for(int i=0; i<3; i++){
        if(T >= m[i]){
            c[i] += T / m[i];
            T = T%m[i];
        }
    }
    
    if(T == 0)
        cout << c[0] << " " << c[1] << " " << c[2];
    else
        cout << -1;
}