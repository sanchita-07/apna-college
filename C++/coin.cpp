#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    int C, r, t;
    for(int i=1; i<=T; i++){
    cin>>C;
     for(int j=C;C>=0;C=C/10)
        {
         r = C % 10;
         t = r * r;
        }
     if(t == 0)
     cout<<"yes"<<endl;
     else
     cout<<"no"<<endl;
    }
    return 0;
}