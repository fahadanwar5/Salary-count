#include <stdio.h>
int main(){

int ID = 1782939821;
int workhrs;
int profit;
printf("Employees ID:\n");
scanf("%d", &ID);
printf("Input working hours:\n");
scanf("%d",&workhrs);
printf("Input Salary per hour:\n");
scanf("%d", &profit);

int salary = profit * workhrs;
printf("Employees ID:%d\n",ID);
printf("Salary:$%d\n", salary);

return 0;
}
