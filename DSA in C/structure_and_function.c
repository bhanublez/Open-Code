#include<stdio.h>
#include<stdlib.h>
//What is structure?
//A structure is a user defined data type that can be used to group elements of different types into a single type.


//Example(Just like variables. We can pass structure as agruments to a function)
struct student{
char name[50];
int age;
int roll_no;
float marks;
};
//pass by refernene
struct charset{
    char s;
    int i;
};
void keyValue(char *s,int *i){
scanf("%s  %d",s,i);
}

void print(struct student ss){
    printf("%s %d %d %.2f ",ss.name,ss.age,ss.roll_no,ss.marks);
}
//Instead of passing structure members individually, it is agood practice to pass a structure variable as an argument
//Unlike arrays, name of the structure variable are not pointers.
//Its pass by value

//if the size of the sttructure is very large then passing the copy of the whole structure is not efficient
//Better pass the address of the structure
//Use the arrow operator(->) to access the structure members inside called function
struct point{
int x;
int y;

};
void print_point(struct point *pp){
    printf("\n %d %d",pp->x,pp->y);
}

//returning a structure variable from a function is similar to returning a variable from a function
struct point edit(struct point p){
    (p.x)++;
    p.y=p.y+5;
    return p;
}
int main(){
struct student s1={"Bhanu",20,1146,90};
printf("%s %d %d %.2f \n",s1.name,s1.age,s1.roll_no,s1.marks); 
print(s1);

struct point p1={45,45};
struct point p2={6,956};
p1=edit(p1);
p2=edit(p2);
print_point(&p1);
print_point(&p2);

// int j;
// struct charset cs;
// keyValue(&cs.s,&cs.i);
// printf("%c %d",cs.s,cs.i);
// return 0;
}