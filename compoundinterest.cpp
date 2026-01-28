# include <iostream>
# include<cmath>
using namespace std ;
int main () {
    int p,r,n,t ;
    cout<< "Principal Amount :" ;
    cin>>p;
    cout<<"Rate of Interest :" ;
    cin>>r;
    cout<<"Times of Interest Applied :" ;
    cin>>n;
    cout<<"No of Years :" ;
    cin>>t;
    int CI ;
    CI = p*pow(1+r/n,n*t);
    cout<<"compound interest "<<CI<<endl;

}