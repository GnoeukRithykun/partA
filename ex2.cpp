#include<iostream>
using namespace std;
int main(){
    int score;
    cout<<"Please enter your score: ";
    cin>>score;
    if((score>=60)&&(score<=100))
    {
        cout<<"You pass!!";
    }else if((score<=59)&&(score>=0))
    {
        cout<<"You failed!!";   
    }else{
        cout<<"Not valid";
    }
    
    
    return 0;
}