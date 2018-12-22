#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>

void main()
{
int gd=0,a,gm,i,p=0,m,n,b,r;
char ch[5];
initgraph(&gd,&gm,"c|\\TURBOC3\\BGI");

setcolor(BLUE);
for(int w=0;w<=300;w++)
{


circle(getmaxx()/2,getmaxy()/2,w);
}


setcolor(15);

settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(60,getmaxy()/2,"ARE U READY FOR SUPRISE");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
setcolor(14);
outtextxy(200,getmaxy()/2+50,"DOCTOR ANUBHA DIDI");

delay(3000);
cleardevice();


settextstyle(DEFAULT_FONT,HORIZ_DIR,6);
setcolor(WHITE);


for(a=100,i=3;i>=1;i--)
{sound(a);
setbkcolor(i);
sprintf(ch,"%d",i);
outtextxy(getmaxx()/2,getmaxy()/2,ch);
delay(1000);
cleardevice();
a=a+50;
}
setbkcolor(BLUE);


settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
setcolor(GREEN);
outtextxy(200,150,"I LOVE U");

setcolor(8);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
setcolor(WHITE);
outtextxy(0,200,"HAPPY BIRTHDAY GUDIYA DIDI");
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(getmaxx()/2-25,350,25);
floodfill(getmaxx()/2-25,350,RED);
circle(getmaxx()/2+10,350,25);
floodfill(getmaxx()/2+10,350,RED);

line(getmaxx()/2-45,365,getmaxx()/2-7,400);
line(getmaxx()/2+30,365,getmaxx()/2-7,400);
line(getmaxx()/2-45,365,getmaxx()/2+30,365);
floodfill(getmaxx()/2,380,RED);



nosound();
sound(500);
delay(2000);

nosound();
cleardevice();
setbkcolor(BLACK);
setcolor(15);
rectangle(180,170,440,450);
setcolor(1);
rectangle(182,172,438,448);
setcolor(14);
rectangle(184,174,436,446);
setcolor(7);
rectangle(186,176,434,444);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
ellipse(300,400,180,0,100,40);
ellipse(300,390,180,0,100,40);
line(200,400,200,360);
line(400,400,400,360);
ellipse(300,360,123,50,100,40);
setcolor(2);
ellipse(305,325,180,0,60,15);
ellipse(305,315,180,0,60,15);
line(245,325,245,285);
line(365,325,365,285);
ellipse(305,285,122,50,60,15);
setcolor(3);
ellipse(308,272,180,0,35,5);
ellipse(308,262,180,0,35,5);
line(273,272,273,232);
line(343,272,343,232);
ellipse(308,232,0,360,35,5);
setcolor(5);
line(300,190,300,225);
line(302,190,302,225);
outtextxy(298,190,"*");
line(310,190,312,225);
line(312,190,312,225);
outtextxy(310,190,"*");
setfillstyle(SLASH_FILL,10);
floodfill(308,232,3);
setfillstyle(INTERLEAVE_FILL,8);
floodfill(305,315,2);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
setcolor(1);
outtextxy(150,75,"HAPPY BIRTHDAY");
setcolor(13);
outtextxy(120,125,"DOCTOR ANUBHA DIDI");
r=50;
for(int c=1;c<=5;c++)
{
for(m=1,n=50;m<=14,n>=0;m++)
{setcolor(m);
circle(50,r,n);
ellipse(50,r+50,0,360,n+10,n+8);
circle(getmaxx()-50,r,n);
ellipse(getmaxx()-50,r+50,0,360,n+10,n+8);
n=n-4;

}

r=r+100;
}

for(b=0;b<=100;b++)
{
int j=rand()%getmaxx();
int k=rand()%getmaxy();

setcolor(p);
circle(j,k,3);
p++;
if(p>=15){
p=0;
delay(400);
}}

getch();
 closegraph();

 }
