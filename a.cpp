#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    cout<<"d = "<<d<<"\n";
    cout<<"a = "<<a<<"\n";
    cout<<"b = "<<b<<"\n";
    x = y1;
    y = x1 - y1 * (a / b);
    cout<<"x"<<" = "<< y1<<"\n";
    cout<<"y"<<" = "<< x1 << "-"<<y1<< "*("<<a<< "/" <<b<<")\n";
    cout<<"X = "<<x<<"\n";
    cout<<"Y = "<<y<<"\n";
    cout<<"\n";
    return d;
}
int main()
{
    int a,b,x,y;
    cin>>a>>b;
    int t=gcd(a,b,x,y);
    cout<<"GCD = " <<t<<endl;
}

//Source : https://cp-algorithms.com/algebra/extended-euclid-algorithm.html?fbclid=IwAR248P1usnV6CTw0jp_zBBJkTDJtO5KLDCqG_EYVghewFMWnoRgtSyyDAwk
