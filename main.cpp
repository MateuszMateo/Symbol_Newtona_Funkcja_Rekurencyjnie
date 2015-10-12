#include <iostream>

using namespace std;

long long Symbol(long long n,long long k){
    if(k==0,k==n){
        return 1;
        }
    else{
        return Symbol(n-1, k-1) + Symbol(n-1,k);
    }

}

int main()
{
    cout << "Podaj wartosci" << endl;
    long long n,k;
    cin >>n>>k;
    cout << Symbol(n,k)<<endl;
    return 0;
}

