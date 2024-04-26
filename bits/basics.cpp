#include<iostream>
using namespace std;
int main(){
    int n=4; //0100
    int res= (n>>2)&1;
    cout<<res;
    return 0;
}