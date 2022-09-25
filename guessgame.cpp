#include <iostream>
using namespace std;
int main(){

int x=11,t=10,b;
while(t>0)
{

cout<<"Enter the guess number."<<endl;
cin>>b;
//x&b?cout<<("true"):cout<<("false");

if(x==b){break;
}
else
{
    --t;
    cout<<"You guessed wrong.\n";
if(x>b)
{
    cout<<"The number you enter is Smaller then the guessing number.\n";
}
else
{
    cout<<"The number you enter is Greater then the guessing number.\n";
}
    cout<<"You left with "<<t<<" Guesses"<<endl;
}}
if(x==b)
{
    cout<<"You guessed right"<<endl;
    cout<<"YOU WON.";
}
else
{
    cout<<"Your Guess is over!"<<endl;
    cout<<"And you loss the Game.";
}
return 0;
}
