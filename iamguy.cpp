#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,n,x,y,ar[100000000]={0};
    cin >> n;
    cin >> x;
    for(int i = 0; i < x; i++){
        cin >> a;
        ar[a] = 1;
    }
    cin >> y;
    for(int i = 0; i < y; i++){
        cin >> a;
        ar[a] = 1;
    }
    bool OK = true;
    for(int i = 1; i <= n; i++){
        if(ar[i] != 1){
            OK = false;
            break;
        }
    }
    if(OK)cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
    return 0;
}
