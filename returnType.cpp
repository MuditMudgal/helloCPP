#include<iostream>
#include<math.h>
using namespace std;

int maxi(int x,int y){
    int a;
    if(x>y) a=x;
    else  a=y;
    return a;
}

int mini(int m,int n){
    if(m>n) return n;
    else return m;
}
int sum(int x,int y){
    return x+y;
}

int main(){
    //cout<<sum(40,63);

    // int a,b;
    // cin>>a>>b;
    // cout<<"Minimum : "<<min(a,b)<<endl;
    // cout<<"Maximum : "<<max(a,b)<<endl;
    // cout<<"Square root of a : "<<sqrt(a);

    //cout<<mini(34,44);

    cout<<maxi(33,96);

}