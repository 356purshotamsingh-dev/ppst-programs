#include <iostream>
using namespace std ;
int main () {
    int marks ;
    cout<<"enter marks obtained :" ;
    cin>>marks;
    if (marks >= 75) {
        cout<<"A grade" ;
    }
        else if (marks >= 60 && marks<75){
            cout<<"B grade ";
        }
            else if (marks >=50 && marks <60){
                cout<<"C grade ";
            }
                else if (marks>=40 && marks<50){
                    cout<<"Pass";
                }
                else{
                    cout<<"Fail ";
                }
} 