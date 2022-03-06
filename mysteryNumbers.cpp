#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int mysteryNumber(int N, int A[], int B[]){
    sort(A, A + N);
    sort(B, B + N + 1);
    for(int i = 0; i < N; i++){
        if(A[i] != B[i]){
            return B[i];
        }
    }
    return B[N];
}

int main() {
    int N;
    cin >> N;
    int A[N], B[N+1];
    for(int i = 0; i < N; i++)
        cin >> A[i];
    for(int i = 0; i < N+1; i++)
        cin >> B[i];

    cout << mysteryNumber(N, A, B);
    return 0;
}