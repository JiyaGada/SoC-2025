#include<iostream>
#include<cmath>

using namespace std;

int main(){
    float a,b,c,d;
    int p,q;
    cin>>a>>b>>c>>d;
    if((a/c)<(b/d)){
        p=(b*c)-(a*d); 
        if (p==0){q=1;}
        else {q=b*c;}
    }
    else {
        p=(a*d)-(b*c); 
        if (p==0){q=1;}
        else {q=a*d;}
    }
    for (int i=2; i<=p;i++){
        if (p%i==0 && q%i==0) {
            while (p%i==0 && q%i==0){
                p/=i;q/=i;
            }
        }
    }
    cout<<p<<"/"<<q;
}
