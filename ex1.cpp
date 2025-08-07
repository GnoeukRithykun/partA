#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Please enter your age: ";
    cin>>age;

    if ((age>=0)&&(age<=12))
    {
        cout<<"You are a child!";
    }else if((age>=13)&&(age<=19))
    {
        cout<<"You are a teen!";
    }else if (age>=20)
    {
        cout<<"You are an adult!";
    }else{
        cout<<"not valid!";
    }
    
    
    
    return 0;
}