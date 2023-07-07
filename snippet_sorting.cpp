#include<bits/stdc++.h>
#define nl endl
#define ll long long
using namespace std;
static bool cmpr(string a , string b){
    return a.size()<b.size();
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);char buffer[256];
    vector<string>str;
    string a;

    while(getline(cin,a)){
        str.push_back(a);
    }
    sort(str.begin(),str.end(),cmpr);

    for(auto i:str){
        cout<<i<<'\n';
    }

    return 0;
}
