#include<stdio.h>

void calendartable(int y,int m);

int main()
{
    int m,y;

    printf("Enter year: ");
    scanf("%d",&y);
    printf("Enter month(1-12): ");
    scanf("%d",&m);

    for(m=1; m<=12; m++)
        calendartable(y,m);

    return 0;
}

void calendartable(int y,int m)
{
    int n,h,i,j;

    // printf("\nCalendar for:\n\n");

    if(m==4 || m==6 || m==9 || m==11)
    {
        n=30;
    }
    else if(m==2)
    {
        if ((y%400==0) || (y%4==0 && y%100!=0))
        {
            n=29;
        }
        else
        {
            n=28;
        }
    }
    else
    {
        n=31;
    }

    switch(m)
    {
    case 1:
        printf("JANUARY, %d",y);
        m=m+12;
        y=y-1;
        break;
    case 2:
        printf("FEBRUARY, %d",y);
        m=m+12;
        y=y-1;
        break;
    case 3:
        printf("MARCH, %d",y);
        break;
    case 4:
        printf("APRIL, %d",y);
        break;
    case 5:
        printf("MAY, %d",y);
        break;
    case 6:
        printf("JUNE, %d",y);
        break;
    case 7:
        printf("JULY, %d",y);
        break;
    case 8:
        printf("AUGUST, %d",y);
        break;
    case 9:
        printf("SEPTEMBER, %d",y);
        break;
    case 10:
        printf("OCTOBER, %d",y);
        break;
    case 11:
        printf("NOVEMBER, %d",y);
        break;
    case 12:
        printf("DECEMBER, %d",y);
        break;
    default:
        printf(" ");
    }

    printf("\n\nSUN  MON  TUE  WED  THU  FRI  SAT\n");

    h=(1+(26*(m+1))/10+y+(y/4)+6*(y/100)+(y/400))%7;

    if(h==0)
    {
        h=7;
    }
    for(j=1; j<=5*(h-1); j++)
    {
        printf(" ");
    }
    for(i=1; i<=n; i++)
    {
        if(((i+h)-1)%7==1)
        {
            printf("\n");
        }
        printf("%2d   ",i);
    }
    printf("\n\n");
}
