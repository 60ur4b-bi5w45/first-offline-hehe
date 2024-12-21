#include<stdio.h>

int dayofweek(int y,int m,int q);

int main()
{
    int y,m,q,h;

    printf("Enter year: ");
    scanf("%d",&y);
    printf("Enter month(1-12): ");
    scanf("%d",&m);
    printf("Enter day: ");
    scanf("%d",&q);
    printf("\n");

    switch(m)
    {
    case 1:
        printf("JANUARY %d, %d",q,y);
        break;
    case 2:
        printf("FEBRUARY %d, %d",q,y);
        break;
    case 3:
        printf("MARCH %d, %d",q,y);
        break;
    case 4:
        printf("APRIL %d, %d",q,y);
        break;
    case 5:
        printf("MAY %d, %d",q,y);
        break;
    case 6:
        printf("JUNE %d, %d",q,y);
        break;
    case 7:
        printf("JULY %d, %d",q,y);
        break;
    case 8:
        printf("AUGUST %d, %d",q,y);
        break;
    case 9:
        printf("SEPTEMBER %d, %d",q,y);
        break;
    case 10:
        printf("OCTOBER %d, %d",q,y);
        break;
    case 11:
        printf("NOVEMBER %d, %d",q,y);
        break;
    case 12:
        printf("DECEMBER %d, %d",q,y);
        break;
    default:
        printf(" ");
    }

    h=dayofweek(y,m,q);

    switch(h)
    {
    case 0:
        printf(" is SATURDAY\n");
        break;
    case 1:
        printf(" is SUNDAY\n");
        break;
    case 2:
        printf(" is MONDAY\n");
        break;
    case 3:
        printf(" is TUESDAY\n");
        break;
    case 4:
        printf(" is WEDNESDAY\n");
        break;
    case 5:
        printf(" is THURSDAY\n");
        break;
    case 6:
        printf(" is FRIDAY\n");
        break;
    default:
        printf(" ");
    }
    return 0;
}


int dayofweek(int y,int m,int q)
{
    int h;
    if (m==1 || m==2)
    {
        m=m+12;
        y=y-1;
    }
    h=(q+(26*(m+1))/10+y+(y/4)+6*(y/100)+(y/400))%7;
    return h;
}




