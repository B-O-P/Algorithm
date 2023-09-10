#include <iostream>

using namespace std;

int main(){
    int input;  cin >> input;
    int rest = 1000 - input;

    int count = 0;
    int coin[6] = {500,100,50,10,5,1};

    for(int i=0; i<6; i++){
        while(rest >= coin[i]){
            rest -= coin[i];
            count++;
        }
    }
    
    cout << count;
}