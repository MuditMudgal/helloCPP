#include<iostream>
#include<math.h>
using namespace std;

int maxi(int x,int y){
    int a;
    if(x>y)  a=x;
    else   a=y;
    return a;
}
int sum(int x,int y){
    return x+y;
}

int main(){
    int x,y;
    cin>>x>>y;

    cout<<maxi(x,y)<<endl;
    //cout<<sum(99,1);
}