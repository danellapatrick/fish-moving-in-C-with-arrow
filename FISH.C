#include<dos.h>
#include<graphics.h>
#include<conio.h>
void main(void)
{

char ch;
int i=250,j=250,x=0,y=-1,gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
while(1)
{
//fish body
setfillstyle(SOLID_FILL,GREEN);
ellipse(420-i,200,30,390,90,30);
floodfill(430-i,200,15);
//fish eyes
setfillstyle(SOLID_FILL,BLUE);
circle(485-i,193,3);
floodfill(485-i,193,15);
//big bubble
setfillstyle(SOLID_FILL,BLUE);
circle(530-i,193,3);
floodfill(530-i,193,15);

//small bubble
setfillstyle(SOLID_FILL,BLUE);
circle(530-i,185,5);
floodfill(530-i,185,15);

//mouth and mouth
		line(340-i,185,300-i,170);
		line(340-i,215,300-i,227);
		line(300-i,170,300-i,227);
		line(485-i,200,510-i,200);
  setcolor(15);
//aquarium blue colour
  setfillstyle(SOLID_FILL,BLUE);
    rectangle(0,20,639,60);
  floodfill(10,450,15);
  //stone 8 darkgray 7 is light
   setfillstyle(SOLID_FILL,7);

   ellipse(552,432,0,360,34,10);

   floodfill(552,432,15);

   setfillstyle(SOLID_FILL,8);

   ellipse(522,412,0,360,34,10);

   floodfill(522,412,15);
   setfillstyle(SOLID_FILL,7);

   ellipse(452,432,0,360,34,10);

   floodfill(452,432,15);

   setfillstyle(SOLID_FILL,8);

   ellipse(422,412,0,360,34,10);

   floodfill(422,412,15);
   setfillstyle(SOLID_FILL,7);

   ellipse(352,432,0,360,34,10);

   floodfill(352,432,15);

   setfillstyle(SOLID_FILL,8);

   ellipse(322,412,0,360,34,10);

   floodfill(322,412,15);

	    setfillstyle(SOLID_FILL,7);

   ellipse(252,432,0,360,34,10);

   floodfill(252,432,15);

   setfillstyle(SOLID_FILL,8);

   ellipse(222,412,0,360,34,10);

   floodfill(222,412,15);
			   setfillstyle(SOLID_FILL,7);

   ellipse(152,432,0,360,34,10);

   floodfill(152,432,15);

   setfillstyle(SOLID_FILL,8);

   ellipse(122,412,0,360,34,10);

   floodfill(122,412,15);

  setcolor(15);





if(kbhit)
{
ch = getch();
if ((int)ch == 27){
break;
}
if((int)ch == 72 || (int)ch==77) {                                            //check
y=-1;
x=-5;
}
if((int)ch == 80 || (int)ch==75) {                                            //check
y=-1;
x=5;
}

				i=i+x;
				j=j+y;

				delay(50);
				cleardevice();


		}


}}

