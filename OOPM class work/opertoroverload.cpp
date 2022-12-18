#include <iostream>
using namespace std;
class Time{
private:
int hr=0,min=0,sec=0;
public:
void setTime(int a,int b,int c){
    hr=a;
    min=b;
    sec=c;    
}
void norm(){
    min+=sec/60;
    sec=sec%60;
    hr+=min/60;
    min%=60;
}
Time operator +(Time t){
  
   
    Time temp;
     
    temp.hr=hr+t.hr;
    
    temp.min=min+t.min;
    temp.sec=sec+t.sec;
    cout<<"Testing hr "<<this->hr<<" min "<<this->min<<" sec "<<this->sec<<endl;
    temp.norm();
    return temp;

}
void Display(){
    cout<<hr<<" : "<<min<<" : "<<sec<<endl;
}
};
int main(){
Time t1,t2,t3;
t1.setTime(5,50,30);
t1.norm();
t2.setTime(7,20,34);
t2.norm();
t3=t1+t2;
t1.Display();
t2.Display();
t3.Display();

    return 0;
}
