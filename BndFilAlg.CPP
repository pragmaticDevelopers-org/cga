#include<graphics.h>
#include<iostream.h>
#include<dos.h>
#include<conio.h>
void boundaryfill(int x ,int y,int f_color,int b_color)
{
if(getpixel(x,y)!=b_color && getpixel(x,y)!=f_color)
{
delay(20);
putpixel(x,y,f_color);
boundaryfill(x+1,y,f_color,b_color);
boundaryfill(x,y+1,f_color,b_color);
boundaryfill(x-1,y,f_color,b_color);
boundaryfill(x,y-1,f_color,b_color);
}
}
int main()
{
int gd=DETECT,gm,radius;
int x,y;
cout<<"enter x and y position for circle\n";
cin>>x>>y;


cout<<"enter radius of circle\n";
cin>>radius;
initgraph(&gd,&gm,"c:\\TC\\BGI");
circle(x,y,radius);
boundaryfill(x,y,4,15);
closegraph();
return 0;
}

