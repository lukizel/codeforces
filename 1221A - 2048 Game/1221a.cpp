#include<iostream>
#include<cstdio>
#include<map>

using namespace std;
typedef long long ll; //saves hella time lol
map<ll, int> mp;

int main(){
        int t;
        cin >> t;
        while(t--){
            mp.clear();
            int n;
            cin >> n;
            for(int i = 1; i <= n; i++){
                ll m;
                cin >> m;
                mp[m]++;
            }
            for(int i = 1; i < 2048; i = i * 2){
                mp[i*2] = mp[i*2] + mp[i] / 2;
            }
            if(mp[2048] > 0){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        return 0;
}