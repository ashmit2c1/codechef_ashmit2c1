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

lint solvefunction(vector<lint>&arr,lint upper,lint lower){
    bool parachute=true;
    lint index=0;
    while(index<arr.size()-1){
        lint current=arr[index];
        lint nextheight = arr[index+1];
        if(nextheight>current){
            lint diff = nextheight-current;
            if(diff<=upper){
                index++;
            }else{
                return index+1;
            }
        }
        if(nextheight<current){
            lint diff = current-nextheight;
            if(diff<=lower){
                index++;
            }else{
                if(parachute==true){
                    index++;
                    parachute=false;
                }else{
                    return index+1;
                }
            }
        }
        if(nextheight==current){
            index++;
        }
    }
    return index+1;
}
void solution(int test){
    while(test--){
        lint n;lint u;lint d;
        cin >> n >> u >> d;
        vector<lint>arr;
        forloop(0,n){lint x;cin >> x;arr.push_back(x);}
        lint ans=solvefunction(arr,u,d);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}