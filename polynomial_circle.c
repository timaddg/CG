#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
void plotcircle(int,int,int,int);

void main()
{

   int gd = DETECT, gm;;
   int xc,yc,x,y,xend,r,d;
   initgraph(&gd, &gm, "");
  
 printf("\n\n Enter xc:");
  scanf("%d",&xc);
  printf("\n\n Enter yc:");
  scanf("%d",&yc);
  printf("\n\n Enter r:");
  scanf("%d",&r);
   x=0;
   xend=r/sqrt(2);
   plotcircle(xc,yc,x,y);
   while(x<xend)
     {
               x=x+1;
               y=sqrt((r*r)-(x*x));
              plotcircle(xc,yc,x,y);
      }
  getch();
  }

void plotcircle(int xc,int yc,int x,int y)
                {
                putpixel(xc+x,yc+y,2);
                putpixel(xc-x,yc+y,2);
                putpixel(xc+x,yc-y,2);
                putpixel(xc+y,yc+x,2);
                putpixel(xc-y,yc-x,2);
                putpixel(xc-y,yc+x,2);
                putpixel(xc+y,yc-x,2);
                putpixel(xc-x,yc-y,2);
               }