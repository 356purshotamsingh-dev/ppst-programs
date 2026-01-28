# include <iostream>
# include <cmath>
using namespace std ;
int main () {
    int a ,b,c;
    cout<<"enter a :" ;
      cin>>a;
     cout<<"enter b:" ;
       cin>>b;
      cout<<"enter c :" ;
    cin>>c;
    float D = b*b - 4*a*c ;
    float X= (-b + sqrt(D))/2*a ;
    float Y= (-b + sqrt(D))/2*a ;
    if (D>= 0) {
        cout<<"first root is :"<<X<<endl<<"second root is :"<<Y;
    }
    else {
        cout<<"no real roots";
    }
    }