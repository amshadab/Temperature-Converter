#include<stdio.h>
#include<conio.h>

void main()
{
    int c;
    float a;
    printf("TEMPERATURE CONVERTER");
  
printf("\n\n1.Celsius to Fahrenheit\n2.Fahrenheit to Celsius\n3.Kelvin to Celsius\n4.Celsius to kelvin\n5.Fahrenheit to kelvin\n6.kelvin to Fahrenheit\n7.Exit");
do
{
printf("\n\nEnter your Choice:");

scanf("%d",&c);

switch (c)
{
    case 1:
    
        printf("\nEnter your Temperature:");
scanf("%f",&a);
        printf("Temperature in Fahrenheit=%f",((a*9/5)+32));
        break;
    
    case 2:
    
        printf("\nEnter your Temperature:");
scanf("%f",&a);
        printf("Temperature in Celsius=%f",((a-32)*5/9));
        break;
    
    case 3:
    
        printf("\nEnter your Temperature:");
scanf("%f",&a);
        printf("Temperature in Celsius=%f",(a-273.15));
        break;
    
    case 4:
    
        printf("\nEnter your Temperature:");
scanf("%f",&a);
        printf("Temperature in Kelvin=%f",(a+273.15));
        break;
    
    case 5:
    
        printf("\nEnter your Temperature:");
scanf("%f",&a);
        printf("Temperature in Kelvin=%f",((a+459.67)*5/9));
        break;
    
    case 6:
    
        printf("\nEnter your Temperature:");
scanf("%f",&a);
        printf("Temperature in Fahrenheit=%f",((a*1.8)-459.67));
        break;
        case 7:
        printf("Exit");
        break;
    
    default:
    
       printf("Wrong Choice");
        break;
    
}
}
while(c!=7);
getch();
  
    
}
