#include <iostream>

using namespace std;

int main()
{
    long long s;  cin >> s;
    int count = 1;
    long long current = 2;
    long long next = 1;

    while(next <= s){
        next += current;
        current++;
        if(next <= s)
            count++;
    }
    
    cout << count;
}