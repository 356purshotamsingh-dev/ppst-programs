# include<iostream>
using namespace std ;
int main () {
    int x ;
    cout<<"enter x :";
    cin>>x;
    char op; //operator
    cout<<"enter operator :" ;
    cin>>op;
    int y ;
    cout<<"enter y :" ;
    cin>>y;
    if ( op=='+') cout<<x+y;
     if ( op=='-') cout<<x-y;
      if ( op=='*') cout<<x*y;
       if ( op=='/') cout<<x/y;
}