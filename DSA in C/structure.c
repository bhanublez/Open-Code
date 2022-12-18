#include<stdio.h>
#include<stdlib.h>
//Structure
//A structure is a defined data type that can be used to group elemenrs of different types into a single type.

//Using of Typedef Keyword
//Syntax typedef existing_data_type new_data_type
//typedef gives freedom to the user by allowing them to create their own types.
//example: typedef int INTEGER;

//global structure and in this Seprate Declaration 
struct car_type{
    //car_type-->structure tag
    // Structure tag is used to identify a particular kind of structure
    char *engine;
    char *fuel_type;
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage; 
} ;

//Structure delaration
typedef struct employee{
        char *name;
        int age;
        int salary;
    }emp;

int manager(){
    //Local structure
    // struct{
    //     char *name;
    //     int age;
    //     int salary;
    // }manager;

    //struct employee manager;
    emp manager;
    manager.age=27;
    if(manager.age>30){
        manager.salary=660000.00;
    }
    else{
        manager.salary=55000;
    }
    return manager.salary;
}

//Designation Initializtion
//Designation initializtion allow structure  members to be initialized in any order.
struct abc{
    int x;
    int y;
    int z;
};

//Array of Structure
//Instead of declaring mutiple variable,we can also declare an array of structre 
//in which each element of the array will represent a structure variabel.


int main(){
    // struct car_type car1={"DDis 190 Engine","Disesel",37,5,19.5};
    // struct car_type car2={ "1.2 L kappa Dual VTVT","Petrol",22,8,14.5};

    //We can access memebers of the structure using dot(.) operator as shown below
   //car1.engine="DDis 190 Engine";
    //car2.engine="1.2 L kappa Dual VTVT";

    //Same thing using array
    struct car_type car[2];
    int i;
    for(i=0;i<2;i++){
        printf("Enter the car%d fuel tank Model: \n",i+1);
        scanf("%s",&car[i].engine);
        printf("Enter the car%d fuel type: \n",i+1);
        scanf("%s",&car[i].fuel_type);
    }

    for(i=0;i<2;i++){
    printf("car%d %s\n",i+1,&car[i].engine);
    printf("car%d Fuel type %s\n",i+1,&car[i].fuel_type);
    }

    printf("Manager salary is: %d \n",manager());

    
struct abc a={.y=20,.x=10,.z=30};
printf("%d %d %d",a.x,a.y,a.z);
    

    return 0;
}