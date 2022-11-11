#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int C, T, L;
    for(int i=1; i<=N; i++){
    cin>>C>>T>>L;
    int sum = C + T;
    int l = sum * 4;
    if (L <= l && L >= T*4 && L%4==0)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
    }
    return 0;
}