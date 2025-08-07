#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Please input a year:";cin>>year;
    if((year%4==0&&year%100!=0)||year%400==0){
        cout<<"it is a leab year"<<endl;
    }else{
        cout<<"It isn't a leab year"<<endl;
    }
    return 0;
}