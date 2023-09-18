#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <map>
using namespace std;

typedef long long ll;

bool cmp(const pair<char, ll> &a, const pair<char, ll> &b){
    return a.second > b.second;
}

int main(){
    int N;  cin >> N;
    map<char, ll> alphabet;
    for(int i=65; i<91; i++){
        alphabet.insert(pair<char,ll>(char(i), 0));
    }

    vector<string> word;
    for(int i=0; i<N; i++){
        string temp;    cin >> temp;
        word.push_back(temp);
        ll po = pow(10, temp.length());
        for(int j=0; j<temp.length(); j++){
            alphabet[temp[j]] += po;
            po /= 10;
        }
    }
    //map --> vector
    vector<pair<char, ll>> sorted(alphabet.begin(), alphabet.end());
    sort(sorted.begin(), sorted.end(), cmp);

    for(int i=0; i<10; i++){
        sorted[i].second = 9-i;
    }

    int total = 0;
    for(int i=0; i<N; i++){
        string temp = "";
        for(int j=0; j<word[i].length(); j++){
            for(int k=0; k<10; k++){
                if(word[i][j] == sorted[k].first){
                    temp.append(to_string(sorted[k].second));
                    break;
                }
            }
        }
        total += stoi(temp);
    }
    cout << total;
}