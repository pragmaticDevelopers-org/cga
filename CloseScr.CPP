#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
outtext(“Press any key to close the graphics mode.”);
getch();
closegraph();
}

