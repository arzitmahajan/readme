#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
int j=0,a=391,b=440,c=493,d=523,e=587,f=659,g=698,h=783;
char z[50];
int gd = DETECT,gm;
int count;
int i;

initgraph(&gd,&gm,"C:\\turboc3\\bgi");



clrscr();
printf("Print thr no. of seconds left:");
scanf("%d",&count);

settextstyle(7,HORIZ_DIR,5);
for( i=count;i>0;i--)
	{
	sprintf(z,"START IN %d SECONDS",i);
	outtextxy(10,210,z);
	delay(1000);
	cleardevice();
	}
settextstyle(3,HORIZ_DIR,4);
setcolor(WHITE);
outtextxy(30,200,"MADE BY :- ARZIT");

delay(500);
setcolor(GREEN);
outtextxy(30,300,"MADE BY :- ARZIT");

delay(500);
setcolor(RED);
outtextxy(30,100,"MADE BY :- ARZIT");
delay(500);

printf("\n HAPPIEST BIRTHDAY");
sound(a);
delay(250);
sound(j);
delay(20);
sound(a);
delay(250);
sound(b);
delay(250);
sound(a);
delay(250);
sound(d);
delay(250);
sound(c);
delay(500);
sound(j);
delay(300);


sound(a);
delay(250);
sound(j);
delay(20);
sound(a);
delay(250);
sound(b);
delay(250);
sound(a);
delay(250);
sound(e);
delay(250);
sound(d);
delay(500);


sound(a);
delay(250);
sound(a);
delay(250);
sound(h);
delay(250);
sound(f);
delay(250);
sound(d);
delay(250);
sound(c);
delay(250);
sound(b);
delay(400);


sound(g);
delay(250);
sound(g);
delay(250);
sound(f);
delay(250);
sound(d);
delay(250);
sound(e);
delay(250);
sound(d);
delay(600);



sound(a);
delay(250);
sound(j);
delay(20);
sound(a);
delay(250);
sound(b);
delay(250);
sound(a);
delay(250);
sound(d);
delay(250);
sound(c);
delay(500);
sound(j);
delay(200);



sound(a);
delay(250);
sound(j);
delay(20);
sound(a);
delay(250);
sound(b);
delay(250);
sound(a);
delay(250);
sound(e);
delay(250);
sound(d);
delay(500);



sound(a);
delay(250);
sound(a);
delay(250);
sound(h);
delay(250);
sound(f);
delay(250);
sound(d);
delay(250);
sound(c);
delay(250);
sound(b);
delay(400);



sound(g);
delay(250);
sound(g);
delay(250);
sound(f);
delay(250);
sound(d);
delay(250);
sound(e);
delay(250);
sound(d);
delay(600);
nosound();


getch();
}