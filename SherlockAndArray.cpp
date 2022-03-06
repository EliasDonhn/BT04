#include<iostream>

using namespace std;

bool SherAndArr(int N, int arr[]){
    int sum[N];
    sum[0] = arr[0];
    for(int i = 1; i < N; i++)
        sum[i] = sum[i - 1] + arr[i];
    for(int i = 0; i < N; i++)
        if(sum[i] == sum[N - 1] - sum[i + 1]) {
            cout << sum[i] << ' ' << sum[N - 1] - sum[i + 1] << ' ';
            return true;
        }
    return false;
}

int main(){
    int T;
    cin >> T;
    bool res[T];
    for(int i = 0; i < T; i++){
        int N;
        cin >> N;
        int a[N];
        for(int j = 0; j < N; j++)
            cin >> a[j];
        res[i] = SherAndArr(N, a);
    }
    for(int i = 0; i < T; i++){
        if(res[i])  cout << "YES" << endl;
        else        cout << "NO" << endl;
    }
    return 0;
}