#include <iostream>
using namespace std;

class employee{
public:
int emp_id;
char name[15];
char desg[15];
int emp_sal,emp_basic,emp_da,emp_tax;
void getdata(){
    cin>>emp_id>>name>>desg>>emp_basic>>emp_da>>emp_tax;
}
void Display();
 };
 void employee::Display(){
    emp_sal=emp_basic+emp_da-emp_tax;
    cout<<"Employee id "<<emp_id<<endl;
    cout<<"Employee Name "<<name<<endl;
    cout<<"Employee Resgination "<<desg<<endl;
    cout<<"Employee salary "<<emp_sal<<endl;
 }
 int main(){
    employee ob;
    ob.getdata();
    ob.Display();
    return 0;
 }