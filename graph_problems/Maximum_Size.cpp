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

lint row[4]={-1,1,0,0};
lint col[4]={0,0,-1,1};

bool isValid(lint i,lint j,lint n,lint m){
    if(i>=0 && j>=0 && i<n && j<m){return true;}
    else{return false;}
}

lint solveFunction(lint n,lint m,vector<vector<char>>&matrix,vector<lint>&sz){
    queue<pair<lint,lint>>q;
    lint cnt=0;
    forloop(0,n){
        secondfor(0,m){
            if(matrix[i][j]=='1'){
                matrix[i][j]='0';
                cnt++;
                q.push({i,j});
                lint islandCellCount=0;
                while(q.empty()==false){
                    lint x=q.front().first;
                    lint y=q.front().second;
                    q.pop();
                    islandCellCount++;
                    for(lint k=0;k<4;k++){
                        lint newX=x+row[k];
                        lint newY=y+col[k];
                        if(isValid(newX,newY,n,m)==true && matrix[newX][newY]=='1'){
                            q.push({newX,newY});
                            matrix[newX][newY]='0';
                        }
                    }
                }
                sz.push_back(islandCellCount);
            }
        }
    }
    return cnt;
}

void solution(int test){
    while(test--){
        lint n;lint m;
        cin >> n >> m;
        vector<vector<char>>matrix(n,vector<char>(m,'0'));
        forloop(0,n){
            secondfor(0,m){
                cin >> matrix[i][j];
            }
        }
        vector<lint>sz;
        lint ans=solveFunction(n,m,matrix,sz);
        lint playerB=0;
        dsort(sz);
        for(lint i=1;i<sz.size();i+=2){
            playerB+=sz[i];
        }
        print(playerB)
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}