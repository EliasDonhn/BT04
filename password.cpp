#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    string s[N];
    string ans;
    bool test = true;
    for(int i = 0; i < N; i++)
        cin >> s[i];
    for(int i = 0; i < N; i++){
        reverse(s[i].begin(), s[i].end());
        for(int j = i + 1; j < N; j++)
            if(s[j] == s[i]){
                ans = s[i];
                test = false;
                break;
            }
        if(!test)   break;
    }
    cout << ans.size() << ' ' << ans[ans.size()/2];
    return 0;
}