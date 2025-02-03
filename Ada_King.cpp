#include<bits/stdc++.h>
using namespace std;
#define lint long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
#define output(arr) for(int i=0;i<arr.size();i++){cout<<arr[i]<<" ";}
#define asort(v) sort(v.begin(), v.end())
#define dsort(v) sort(v.begin(), v.end(), greater<int>())
#define intmax INT_MAX
#define intmin INT_MIN
#define lintmax LLONG_MAX
#define lintmin LLONG_MIN
#define mp(x,y) make_pair(x,y)

lint row[8] = {-1,-1,1,1,-1,1,0,0};
lint col[8] = {-1,1,-1,1,0,0,-1,1};

bool isValid(lint i,lint j){
    if(i>=1 && j>=1 && i<=8 && j<=8){
        return true;
    }
    else{
        return false;
    }
}
lint solveFunction(lint r,lint c,lint k){
    queue<pair<lint,lint>>q;
    vector<vector<bool>>visited(9,vector<bool>(9,false));
    q.push({r,c});
    visited[r][c]=true;
    while(k--){
        lint n=q.size();
        while(n--){
            lint x=q.front().first;
            lint y=q.front().second;
            q.pop();
            for(lint i=0;i<8;i++){
                lint newX=x+row[i];
                lint newY=y+col[i];

                if(isValid(newX,newY)==true && visited[newX][newY]==false){
                    q.push({newX,newY});
                    visited[newX][newY]=true;
                }
            }
        }
    }
    lint cnt=0;
    forloop(0,visited.size()){
        secondfor(0,visited[i].size()){
            if(visited[i][j]==true){
                cnt++;
            }
        }
    }
    return cnt;
}

void solution(int test){
    while(test--){
        lint r;lint c;lint k;
        cin >> r >> c >> k;
        lint ans=solveFunction(r,c,k);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}