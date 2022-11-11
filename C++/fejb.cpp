#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
     if(N>=0 && N<=1000000){
        if(N>=0 && N<10)
         N = 'A';
        if(N>=10 && N<100)
         N = 'B';
        if(N>=100 && N<1000)
         N = 'C';
     }
     switch (N){
     case 'A':
     cout<<"1";
     break;
     case 'B':
     cout<<"2";
     break;
     case 'C':
     cout<<"3";
     break;
     default:
     cout<<"More than three digits";
     break;
     }
    return 0;
}
