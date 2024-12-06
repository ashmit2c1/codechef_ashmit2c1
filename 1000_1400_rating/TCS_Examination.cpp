#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solution(int test) {
    while(test--) {
        int n = 3;
        vector<int> dragon(n), sloth(n);

        for(int i = 0; i < n; i++) cin >> dragon[i];
        for(int i = 0; i < n; i++) cin >> sloth[i];
        
        ll dragonSum = accumulate(dragon.begin(), dragon.end(), 0LL);
        ll slothSum = accumulate(sloth.begin(), sloth.end(), 0LL);
        
        if(dragonSum > slothSum) {
            cout << "DRAGON" << "\n";
        } else if(slothSum > dragonSum) {
            cout << "SLOTH" << "\n";
        } else { // total scores are tied
            if(dragon[0] > sloth[0]) {
                cout << "DRAGON" << "\n";
            } else if(dragon[0] < sloth[0]) {
                cout << "SLOTH" << "\n";
            } else { // DSADSA scores are tied
                if(dragon[1] > sloth[1]) {
                    cout << "DRAGON" << "\n";
                } else if(dragon[1] < sloth[1]) {
                    cout << "SLOTH" << "\n";
                } else { // TOCTOC scores are tied
                    if(dragon[2] > sloth[2]) {
                        cout << "DRAGON" << "\n";
                    } else if(dragon[2] < sloth[2]) {
                        cout << "SLOTH" << "\n";
                    } else { // Everything is tied
                        cout << "TIE" << "\n";
                    }
                }
            }
        }
    }
}

int main() {
    int test;
    cin >> test;
    solution(test);
}