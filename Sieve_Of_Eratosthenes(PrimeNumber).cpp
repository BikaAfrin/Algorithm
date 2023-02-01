#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(6); cout.setf(ios::fixed,ios::floatfield);
#define int long long
const int MAX=1e8+123;

vector<int>Prime;
bitset<MAX>Is_Prime;

void Sieve()
{
    for(int i=3;i<MAX;i+=2) Is_Prime[i]=true;

    for(int i=3;i*i<MAX;i+=2)
    {
        if(Is_Prime[i]==true)
         {
           for(int j=i*i;j<MAX;j+=(i+i))
           {
               Is_Prime[j]=false;
           }
        }
    }

    Is_Prime[2]=true;
    Prime.push_back(2);

    for(int i=3;i<=MAX;i+=2){
        if(Is_Prime[i]==true) Prime.push_back(i);
    }

    for(auto u:Prime) cout<<u<<" ";
}

int32_t main()
{
    optimize();
    Sieve();

}
