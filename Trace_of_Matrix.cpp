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

lint solvefunction(vector<vector<lint>>&matrix){
    lint ans=0;
    forloop(0,matrix.size()){
        secondfor(0,matrix[i].size()){
            lint sum=0;
            lint x=i;
            lint y=j;
            while(x<matrix.size() && y<matrix[i].size()){
                lint val = matrix[x][y];
                sum+=val;
                x++;
                y++;
            }
            ans=max(ans,sum);
        }
    }
    return ans;
}
void solution(int test){
    while(test--){
        lint n;cin >> n;
        vector<vector<lint>>matrix(n,vector<lint>(n));
        forloop(0,n){
            secondfor(0,n){
                cin >> matrix[i][j];
            }
        }
        lint ans=solvefunction(matrix);
        print(ans)
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}