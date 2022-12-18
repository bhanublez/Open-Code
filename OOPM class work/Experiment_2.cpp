#include <iostream>
using namespace std;

class Book{
   private:
    int id;
    char title[15];
    float price;
    public:
    void getdata(){
        cin>>id>>title>>price;
    }
    void show_data(){
        cout<<"Id "<<id<<endl;
        cout<<"Title "<<title<<endl;
        cout<<"Price "<<price<<endl;
    }


};
int main(){
    int n;
    cout<<"Enter number of books "<<endl;
    cin>>n;
    Book b[n];
    for(int i=0;i<n;i++){
        cout<<"Book number "<<(i+1)<<endl;
        b[i].getdata();
    }
     for(int i=0;i<n;i++){
        cout<<"Book number "<<(i+1)<<endl;
        b[i].show_data();
    }




    return 0;
}