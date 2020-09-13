#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void main()
{int choice=0, i, j;
 double a, b, r, r1, r2;
 r = 0; r1=0;
 char ans[10];
 char res[5];
 again :clrscr();
 printf("Choose any one operation you want to perform from the following:\n");
 printf("1)Addition\n2)Subtraction\n3)multiplication\n4)Division\n5)Power of\n6)Square root");
 scanf("%d",&choice);

 if(choice<1 || choice>6)
   { printf("\nInvalid operation!!");
     if( strcmp(res,"y") == 0 || strcmp(res,"Y") == 0 || strcmp(res,"yes") == 0 || strcmp(res,"Yes") == 0 || strcmp(res,"YES") == 0 )
       goto again;
    }

 else
    {printf("\nYou chose to perform operation no.  %d",choice);
    printf("\nEnter two values for a and b :");
    scanf("%lf%lf",&a, &b);
    printf("You entered the values %lf %lf",a,b);
    switch(choice)
  {
    case 1:
    r = a+b;
    printf("\nThe result is: %lf", r);
    break;

    case 2:
      if(a>b)
	{r = a-b;
      printf("\nThe result is: %lf", r);
     }
   else
      {r=b-a;
       printf("\nThe result is: %lf",r);
      }
     break;
  case 3:
   r=a*b;
   printf("\nThe result is: %lf",r);
   break;

  case 4:
   if(b!=0)
     {r=(float)a/b;

     printf("\nThe result is: %lf",r);
     }
   else
    printf("\nTo use this operation, kindly enter a non-zero value");
    break;
  case 5:
   r = pow(a,b);
    printf("\nThe result is: %lf",r);
   r2 = pow(b,a);
    printf("\nThe result is: %lf",r2);
   break;
  case 6:
     for(i=0;i<=a;i++)
     {  if(a == i*i)
	{ r = sqrt(a);
	  printf("\nThe result is: %lf",r);
	}
     }

       for(j=0;j<=b;j++)
       {  if(a == j*j)
	    { r1 = sqrt(b);
	      printf("\nThe result is: %lf",r1);
	    }
       }

    break;

 } }
 printf("\nDo you want to continue?");
  scanf("%s",ans);

  if( strcmp(ans,"y") == 0 || strcmp(ans,"Y") == 0 || strcmp(ans,"yes") == 0 || strcmp(ans,"Yes") == 0 || strcmp(ans,"YES") == 0 )
       goto again;

  else
     printf("\nThank you!!");
  getch();
 }




