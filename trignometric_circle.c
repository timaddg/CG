include<graphics.h>
#include<stdio.h>
#include<math.h>
void plotcircle(int,int,int,int);

void main()
{

   int gd = DETECT, gm;
   int xc,yc,x,y,c,s,r,d,temp;
   initgraph(&gd, &gm, "");
  
   printf("\n Enter the values xc: \nyc:\nr:\n");
   scanf("%d%d%d",&xc,&yc,&r);
   x=0;
   y=r;
   d=1/r;
   c=cos(d);
   s=sin(d);
   plotcircle(xc,yc,x,y);
   while(x<=y)
     {
                plotcircle(xc,yc,x,y);
               temp=x;
               x=((x*c)-(y*s));
               y=((y*c)+(temp*s));

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