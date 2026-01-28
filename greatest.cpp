# include <iostream>
using namespace std ; 
int main () {
    int a , b , c ;
    cout<<"enter a : " ;
    cin>>a;
    cout<<"enter b : " ;
    cin>>b;
    cout<<"enter c : " ;
    cin>>c;
    //a>b and a>c -> a>c -> a is greatest
    if( a>c){
        cout<<a<<" is greatest" ;
    }
    else { // c>a , a>b -> c>a>b
        cout<<c<<" is greatest" ;
    }
    if (b>c) {
    cout<<b<<" is greatest" ;
    }   
}