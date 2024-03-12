#include<stdio.h>

void printDate(int x, int y, int z){

    printf("You entered the date %d%02d%d", z,y,x);
    
}

int main(void){

   int month, day, year, item;
   double  price;
   

   printf("Enter item number ");
   scanf("%d", &item);
   printf("Enter unit price ");
   scanf("%lf", &price);
   printf("Enter A data\n");
   scanf("%d/%d/%d", &month, &day, &year);
    printf("Item \t UnitPrice \t Purchase Date \n");
   printf("%d \t %.2lf\t %d%d%d",item, price, day,month,year);



}