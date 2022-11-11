#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    int X, Y, G, H, K;
    for(int i=1; i<=T; i++){
    cin>>X>>Y>>G>>H>>K;
    int sum = Y + G + H + K;
    if(X>= sum){
        cout<<"YES"<<endl;
    }
    else 
    cout<<"NO"<<endl;
    }
    return 0;
}