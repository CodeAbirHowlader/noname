#include<stdio.h>
int firstDayOfYear(int year){

int day = (year * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;
return day;
}
int main()
{

  char *month[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
   int daysInMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};


  int i,j,totalDays,weekDay,spacecounter=0,year;
  printf("Enter your favorite year: \n");

  scanf("%d",&year);
  printf("Welcome to your Worst year %d\n\n",year);
  printf("\nCredit: Abir howlader\n\n");
  if((year%4==0 &&year%100!=0)||year%400==0){
    daysInMonth[1]=29;

  }
  weekDay=firstDayOfYear(year);
  for(i=0;i<12;i++)
  {
      printf("\n\n\n-----------------%s-------------------\n\n",month[i]);
      printf("\n   Sun    Mon   Tue    Wed   Thu   Fri   Sat\n\n");
     for(spacecounter=0;spacecounter<weekDay;spacecounter++){
        printf("      ");
     }


      totalDays=daysInMonth[i];

      for(int j=1;j<=daysInMonth[i];j++)
      {
          printf("%6d",j);

      weekDay++;
      if(weekDay>6){
        weekDay=0;
      printf("\n");
      }
      }
  }
}
