#include <graphics.h>  
#include <stdlib.h>  
#include <math.h>  
#include <stdio.h>  
#include <conio.h>  
#include <iostream.h>  
# define pi 3.14  
  
class bresen  
{  
    float a, b, h, k, thetaend,step,x,y;  
    int i;  
    public:  
    void get ();  
    void cal ();  
};  
    void main ()  
    {  
    bresen b;  
    b.get ();  
    b.cal ();  
    getch ();  
   }  
    void bresen :: get ()  
   {  
    cout<<"\n ENTER CENTER OF ELLIPSE";  
    cin>>h>>k;  
    cout<<"\n ENTER LENGTH OF MAJOR AND MINOR AXIS";  
    cin>>a>>b;  
    cout<<"\n ENTER STEP SIZE";  
    cin>> step;  
   }  
void bresen ::cal ()  
{  
    
    int gdriver = DETECT,gmode, errorcode;  
    int midx, midy, i;  
     
    initgraph (&gdriver, &gmode, " ");  
    
    
    theta= 0;  
    thetaend=(pi*90)/180;  
    whilex (theta<thetaend)  
    {  
        x = a * cos (theta);  
        y = b * sin (theta);  
        putpixel (x+h, y+k, RED);  
        putpixel (-x+h, y+k, RED);  
        putpixel (-x+h, -y+k, RED);  
        putpixel (x+h, -y+k, RED);  
        theta+=step;  
    }  
        getch();  
}  