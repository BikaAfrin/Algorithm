/*#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);
#define F(i,l,r) for(int i=l;i<r;i++)
#define Vowel(c) bool IsVowel(char c) { return(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');}
#define MOD 1000000007
#define MAX 1000000
#define ll long long
ll fectorial(int n)
{
    if(n==0){return 1;}
    int
}
int main()
{
    int n=4;
    fectorial(n);
}
*/
#include<bits/stdc++.h>
using namespace std;



int fun(int n) {
if(n == 0) {
// base case
cout<<"="<<endl;
return 1;
}
cout<<"n - "<<n<<endl;
// Induction hypothesis
int smallout = fun(n-1);
cout<<"-"<<endl;
cout<<"smallout : "<<smallout<<endl;

int out = n * smallout;
cout<<out<<" = "<<n<<" * "<<smallout<<endl;

return out;
}



int main() {
int n = 5;
cout << fun(n) << "\n";



return 0;
}
