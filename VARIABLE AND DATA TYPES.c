#include <stdio.h>
#include <stdbool.h>
int main(){

    printf("i love chicken!\n");
    printf("i am a footballer\n ");
// this is my first code 
int age = 25;
int year = 2026;
int quantity = 5;
float units = 50.99;
float price = 2000.50;
float temparature = 27.34;
char grade = 'A';
char name[] ="RON KIBERENGE"; 
char email[]="ronkibe254@gmail.com";
bool isMonday= true;
bool isonline= true;
bool isstudent= true;
printf("You are %d years old\n", age);
printf("the years is %d\n", year);
printf( " you have purchased %d eggs \n", quantity);
printf(" the units consumed is %f of electricity \n",units);
printf(" the total price of the eggs were KSH %f \n", price);
printf(" the temparature of nairobi is %f degrees\n",temparature);
printf("the student's grade was %c\n",grade);
printf("My name is %s\n",name);
printf("My email address is %s\n",email);
printf("%d\n",isMonday);
// 1 = true 0 = false in boolean
   if (isonline){
    printf("you are online\n ");
}
else {
    printf("you are offline \n");
}
// the if and else statement helps in adding parameters to the boolean function.
if (isstudent){
    printf("you are a zetech student\n ");
}
else {
    printf("you are not a zetech student\n ");
}
return 0;



}