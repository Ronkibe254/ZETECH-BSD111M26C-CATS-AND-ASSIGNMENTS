//Prompt the user to the the token used 
//Pre-processor directive 
#include <stdio.h> //scanf (), printf()

int main (){
    // variable declaration 
    int customerID;
    char customerName[20];
    float unitConsumed;
     char totalbill

    
     printf("state the customer id:\n");
    scanf("%d",&customerID);
    printf("Enter your name:\n");
    scanf("%c",&customerName);
    printf("Input the number of units consumed:\n");
    scanf("%f",&unitConsumed);

    if (unitConsumed<=199){
        totalbill=unitConsumed *120;
    }
    else if(unitConsumed>199 && unitConsumed,400){
        totalbill=unitConsumed *150;
    }
    else if(unitConsumed>400 && unitConsumed<600){
        totalbill=unitConsumed *180;
    }
    else{
        totalbill=unitConsumed *180;
    }
    printf("your total bill is:KSH %.2f", totalbill);
    return 0;

}