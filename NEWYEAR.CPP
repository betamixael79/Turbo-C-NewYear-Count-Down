
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<iostream.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<sys\timeb.h>
#include<time.h>
#include "gbi7seg.h"
#include "gbi.h"
//#include "opengraph.h"

struct  time t;
int detik,menit,jam;
int a;
int x;
int main()
{
int gdriver=IBM8514LO,gmode=1;
   initgraph(&gdriver, &gmode,"c:\\turboc3\\bgi\\");
//   initgraph(&gdriver, &gmode,"d:\\turboc3\\bgi\\");

//setbkcolor(0);
//if (x=1)
//////coba///////
//{
//setcolor(14);
//arc(30,30,0,360,30);
//setcolor(3);
//setfillstyle(1,2);
//setfillstyle(1,3);
//line(20,20,20,30);
//line(20,20,30,20);
//line(30,20,30,30);
//line(20,30,30,30);
//circle(30,30,20);
//rectangle(0,0,100,100);
//if(x=35)
//getch();
// }




setcolor(2);
while(!kbhit())
{
//
////////// G //////////////

//ellipse(250,70,90,270,30,50);  //kiri
ellipse(250,70,137,225,30,50);  //kiri

ellipse(260,65,40,140,40,45);  //atas luar

ellipse(260,75,220,320,40,45);    //bawah

ellipse(260,90,35,135,25,50);   //dalam atas
ellipse(260,50,235,305,25,50);   //dalam bawah

line(280,60,300,60);
line(265,70,300,70);
line(265,70,265,90);
line(265,90,275,90);

//ellipse(270,70,270,90,30,50); //kanan

ellipse(270,70,10,45,30,50); //kanan atas
ellipse(270,70,315,0,30,50); //kanan bawah

ellipse(290,70,160,210,50,50); //kanan dalam
//////////////G//////////
//setfillstyle(1,2);
//floodfill(235,63,2);
//line(238,63,238,70);
/////////// B //////////
ellipse(345,50,320,90,40,30);
ellipse(345,90,270,40,40,30);

line(320,20,350,20);
line(320,20,320,120);
line(320,120,350,120);
/////////////////
line(340,40,340,60);
line(340,40,350,40);
line(340,60,350,60);
ellipse(350,50,270,90,10,10);

line(340,80,340,100);
line(340,80,350,80);
line(340,100,350,100);
ellipse(350,90,270,90,10,10);
//////////B///////////
//setfillstyle(1,2);
//floodfill(350,63,2);
//line(350,63,350,70);
////////// I ////////////

line(405,20,425,20);
line(425,20,425,120);
line(405,120,425,120);
line(405,20,405,120);

////////////I/////////////////////
//setfillstyle(1,2);
//floodfill(420,63,2);
//line(420,63,420,70);


///////random////////////
//{
setfillstyle(1,random(x));
floodfill(235,63,2);
floodfill(350,63,2);

floodfill(420,63,2);
//delay(50);
x=random(17)-17;
//}
//*/
delay(100);
//////////////////////

setgraphmode(getgraphmode());
//opengraph();
//getch();
line(426,155,426,325);
line(425,155,425,325);
line(424,155,424,325);
///////////////////
line(218,155,218,325);
line(217,155,217,325);
line(216,155,216,325);

//{

settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
outtextxy(35,400, "Jl. Ambengan no. 48-50, Surabaya");

outtextxy(120,350, "GEREJA BETHEL INDONESIA");

settextstyle(TRIPLEX_FONT, HORIZ_DIR,1);
outtextxy(440,100, "Clock");

///rectangle(0,0,639,478);
/*
line(320,0,320,478);
line(0,240,640,240); //tengah
line(0,155,640,155); //atas
line(0,325,640,325);//bawah
//////////////////////////////////////
//line(540,155,620,325);     //6
//line(620,155,540,325);     //6
line(440,155,520,325);     //5
			 line(320,155,400,325);
line(330,155,410,325);    //4
line(230,155,310,325);     //3
line(120,155,200,325);     //2
line(20,155,100,325);      //1
////////////////////////////////////
*/
//while(!kbhit())
//{
gettime(&t);
detik=t.ti_sec;
menit=t.ti_min;
jam=t.ti_hour;


if(jam==24 && menit==0 && detik==0)
{
  setcolor(0);
  line(426,155,426,325);
  line(425,155,425,325);
  line(424,155,424,325);
///////////////////
  line(218,155,218,325);
  line(217,155,217,325);
  line(216,155,216,325);


  setcolor(15);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR, 7);
  outtextxy(45,200, "HAPPY NEW YEAR");
  gbi();
  a;
  delay(2000);
  //break;
}


if(jam==24)
{
  gbi7segmen_2(-520,0);
  gbi7segmen_3(-420,0);
}


if(jam==0)
{
  gbi7segmen_2(-520,0);
  gbi7segmen_3(-420,0);
}


if(jam==1)
{
  gbi7segmen_2(-520,0);
  gbi7segmen_2(-420,0);
}


if(jam==2)
{
  gbi7segmen_2(-520,0);
  gbi7segmen_1(-420,0);
}

if(jam==3)
{
  gbi7segmen_2(-520,0);
  gbi7segmen_0(-420,0);
}


if(jam==4)
{
  gbi7segmen_1(-520,0);
  gbi7segmen_9(-420,0);
}

if(jam==5)
{
  gbi7segmen_1(-520,0);
  gbi7segmen_8(-420,0);
}

if(jam==6)
{
  gbi7segmen_1(-520,0);
  gbi7segmen_7(-420,0);
}

if(jam==7)
{
  gbi7segmen_1(-520,0);
  gbi7segmen_6(-420,0);
}

if(jam==8)
{
  gbi7segmen_1(-520,0);
  gbi7segmen_5(-420,0);
}

if(jam==9)
{
  gbi7segmen_1(-520,0);
  gbi7segmen_4(-420,0);
}

if(jam==10)
{
  gbi7segmen_1(-520,0);
  gbi7segmen_3(-420,0);
}

if(jam==11)
{
  gbi7segmen_1(-520,0);
  gbi7segmen_2(-420,0);
}

if(jam==12)
{
  gbi7segmen_1(-520,0);
  gbi7segmen_1(-420,0);
}

if(jam==13)
{
  gbi7segmen_1(-520,0);
  gbi7segmen_0(-420,0);
}

if(jam==14)
{
  gbi7segmen_0(-520,0);
  gbi7segmen_9(-420,0);
}

if(jam==15)
{
  gbi7segmen_0(-520,0);
  gbi7segmen_8(-420,0);
}

if(jam==16)
{
  gbi7segmen_0(-520,0);
  gbi7segmen_7(-420,0);
}

if(jam==17)
{
  gbi7segmen_0(-520,0);
  gbi7segmen_6(-420,0);
}

if(jam==18)
{
  gbi7segmen_0(-520,0);
  gbi7segmen_5(-420,0);
}

if(jam==19)
{
  gbi7segmen_0(-520,0);
  gbi7segmen_4(-420,0);
}

if(jam==20)
{
  gbi7segmen_0(-520,0);
  gbi7segmen_3(-420,0);
}

if(jam==21)         //angka nol
{
 //gbi7segdetik_1(0,0);
// gbi7segdetik_2(-100,0);
// gbi7segdetik_0(-210,0);
// gbi7segdetik_1(-210,-156);
// gbi7segdetik_2(-310,0);
  gbi7segmen_0(-520,0);
  gbi7segmen_2(-420,0);

// gbi7segdetik_5(-0,-156);
// gbi7segdetik_6(0,-156);
// gbi7segdetik_7(-100,156);
// gbi7segdetik_9(0,156);
}

if(jam==22)
{
  gbi7segmen_0(-520,0);
  gbi7segmen_1(-420,0);
}

if(jam==23)
{
  gbi7segmen_0(-520,0);
  gbi7segmen_0(-420,0);
}


//////////////////////////////////////
//  MENIT
/////////////////////////////////////
if(menit==0)
{
 gbi7segmen_0(-310,0);
 gbi7segmen_0(-210,0);
 }
if(menit==1)
{
 gbi7segmen_5(-310,0);
 gbi7segmen_8(-210,0);
}
if(menit==2)
{
 gbi7segmen_5(-310,0);
 gbi7segmen_7(-210,0);
}
if(menit==3)
{
 gbi7segmen_5(-310,0);
 gbi7segmen_6(-210,0);
}
if(menit==4)
{
 gbi7segmen_5(-310,0);
 gbi7segmen_5(-210,0);
}
if(menit==5)
{
 gbi7segmen_5(-310,0);
 gbi7segmen_4(-210,0);
}
if(menit==6)
{
 gbi7segmen_5(-310,0);
 gbi7segmen_3(-210,0);
}
if(menit==7)
{
 gbi7segmen_5(-310,0);
 gbi7segmen_2(-210,0);
}
if(menit==8)
{
 gbi7segmen_5(-310,0);
 gbi7segmen_1(-210,0);
}
if(menit==9)
{
 gbi7segmen_5(-310,0);
 gbi7segmen_0(-210,0);
}
if(menit==10)
{
 gbi7segmen_4(-310,0);
 gbi7segmen_9(-210,0);
}
if(menit==11)
{
 gbi7segmen_4(-310,0);
 gbi7segmen_8(-210,0);
}
if(menit==12)
{
 gbi7segmen_4(-310,0);
 gbi7segmen_7(-210,0);
}
if(menit==13)
{
 gbi7segmen_4(-310,0);
 gbi7segmen_6(-210,0);
}
if(menit==14)
{
 gbi7segmen_4(-310,0);
 gbi7segmen_5(-210,0);
}
if(menit==15)
{
 gbi7segmen_4(-310,0);
 gbi7segmen_4(-210,0);
}
if(menit==16)
{
 gbi7segmen_4(-310,0);
 gbi7segmen_3(-210,0);
}
if(menit==17)
{
 gbi7segmen_4(-310,0);
 gbi7segmen_2(-210,0);
}
if(menit==18)
{
 gbi7segmen_4(-310,0);
 gbi7segmen_1(-210,0);
}
if(menit==19)
{
 gbi7segmen_4(-310,0);
 gbi7segmen_0(-210,0);
}
if(menit==20)
{
 gbi7segmen_3(-310,0);
 gbi7segmen_9(-210,0);
}
if(menit==21)
{
 gbi7segmen_3(-310,0);
 gbi7segmen_8(-210,0);
}
if(menit==22)
{
 gbi7segmen_3(-310,0);
 gbi7segmen_7(-210,0);
}
if(menit==23)
{
 gbi7segmen_3(-310,0);
 gbi7segmen_6(-210,0);
}
if(menit==24)
{
 gbi7segmen_3(-310,0);
 gbi7segmen_5(-210,0);
}
if(menit==25)
{
 gbi7segmen_3(-310,0);
 gbi7segmen_4(-210,0);
}
if(menit==26)
{
 gbi7segmen_3(-310,0);
 gbi7segmen_3(-210,0);
}
if(menit==27)
{
 gbi7segmen_3(-310,0);
 gbi7segmen_2(-210,0);
}
if(menit==28)
{
 gbi7segmen_3(-310,0);
 gbi7segmen_1(-210,0);
}

if(menit==29)
{
 gbi7segmen_3(-310,0);
 gbi7segmen_0(-210,0);
}

if(menit==30)
{
 gbi7segmen_2(-310,0);
 gbi7segmen_9(-210,0);
}

if(menit==31)
{
 gbi7segmen_2(-310,0);
 gbi7segmen_8(-210,0);
}

if(menit==32)
{
 gbi7segmen_2(-310,0);
 gbi7segmen_7(-210,0);
}
if(menit==33)
{
 gbi7segmen_2(-310,0);
 gbi7segmen_6(-210,0);
}

if(menit==34)
{
 gbi7segmen_2(-310,0);
 gbi7segmen_5(-210,0);
}

if(menit==35)
{
 gbi7segmen_2(-310,0);
 gbi7segmen_4(-210,0);
}

if(menit==36)
{
 gbi7segmen_2(-310,0);
 gbi7segmen_3(-210,0);
}
if(menit==37)
{
 gbi7segmen_2(-310,0);
 gbi7segmen_2(-210,0);
}

if(menit==38)
{
 gbi7segmen_2(-310,0);
 gbi7segmen_1(-210,0);
}

if(menit==39)
{
 gbi7segmen_2(-310,0);
 gbi7segmen_0(-210,0);
}
if(menit==40)
{
 gbi7segmen_1(-310,0);
 gbi7segmen_9(-210,0);
}
if(menit==41)
{
 gbi7segmen_1(-310,0);
 gbi7segmen_8(-210,0);
}

if(menit==42)
{
 gbi7segmen_1(-310,0);
 gbi7segmen_7(-210,0);
}

if(menit==43)
{
 gbi7segmen_1(-310,0);
 gbi7segmen_6(-210,0);
}

if(menit==44)
{
 gbi7segmen_1(-310,0);
 gbi7segmen_5(-210,0);
}

if(menit==45)
{
 gbi7segmen_1(-310,0);
 gbi7segmen_4(-210,0);
}

if(menit==46)
{
 gbi7segmen_1(-310,0);
 gbi7segmen_3(-210,0);
}

if(menit==47)
{
 gbi7segmen_1(-310,0);
 gbi7segmen_2(-210,0);
}

if(menit==48)
{
 gbi7segmen_1(-310,0);
 gbi7segmen_1(-210,0);
}

if(menit==49)
{
 gbi7segmen_1(-310,0);
 gbi7segmen_0(-210,0);
}

if(menit==50)
{
 gbi7segmen_0(-310,0);
 gbi7segmen_9(-210,0);
}

if(menit==51)
{
 gbi7segmen_0(-310,0);
 gbi7segmen_8(-210,0);
}

if(menit==52)
{
 gbi7segmen_0(-310,0);
 gbi7segmen_7(-210,0);
}

if(menit==53)
{
 gbi7segmen_0(-310,0);
 gbi7segmen_6(-210,0);
}

if(menit==54)
{
 gbi7segmen_0(-310,0);
 gbi7segmen_5(-210,0);
}

if(menit==55)
{
 gbi7segmen_0(-310,0);
 gbi7segmen_4(-210,0);
}

if(menit==56)
{
 gbi7segmen_0(-310,0);
 gbi7segmen_3(-210,0);
}

if(menit==57)
{
 gbi7segmen_0(-310,0);
 gbi7segmen_2(-210,0);
}

if(menit==58)
{
 gbi7segmen_0(-310,0);
 gbi7segmen_1(-210,0);
}

if(menit==59)
{
 gbi7segmen_0(-310,0);
 gbi7segmen_0(-210,0);
}

///////////////////////////////////
//      DETIK
////////////////////
if(detik==0)
{
 gbi7segmen_0(-100,0);
 gbi7segmen_0(-0,0);
}
if(detik==1)
{
 gbi7segmen_5(-100,0);
 gbi7segmen_9(-0,0);
}
if(detik==2)
{
 gbi7segmen_5(-100,0);
 gbi7segmen_8(-0,0);
}
if(detik==3)
{
 gbi7segmen_5(-100,0);
 gbi7segmen_7(-0,0);
}
if(detik==4)
{
 gbi7segmen_5(-100,0);
 gbi7segmen_6(-0,0);
}
if(detik==5)
{
 gbi7segmen_5(-100,0);
 gbi7segmen_5(-0,0);
}
if(detik==6)
{
 gbi7segmen_5(-100,0);
 gbi7segmen_4(-0,0);
}
if(detik==7)
{
 gbi7segmen_5(-100,0);
 gbi7segmen_8(-0,0);
}
if(detik==8)
{
 gbi7segmen_5(-100,0);
 gbi7segmen_2(-0,0);
}
if(detik==9)
{
 gbi7segmen_5(-100,0);
 gbi7segmen_1(-0,0);
}

if(detik==10)
{
 gbi7segmen_5(-100,0);
 gbi7segmen_0(-0,0);
}
if(detik==11)
{
 gbi7segmen_4(-100,0);
 gbi7segmen_9(-0,0);
}
if(detik==12)
{
 gbi7segmen_4(-100,0);
 gbi7segmen_8(-0,0);
}
if(detik==13)
{
 gbi7segmen_4(-100,0);
 gbi7segmen_7(0,0);
}
if(detik==14)
{
 gbi7segmen_4(-100,0);
 gbi7segmen_6(0,0);
}
if(detik==15)
{
 gbi7segmen_4(-100,0);
 gbi7segmen_5(0,0);
}
if(detik==16)
{
 gbi7segmen_4(-100,0);
 gbi7segmen_4(0,0);
}
if(detik==17)
{
 gbi7segmen_4(-100,0);
 gbi7segmen_3(0,0);
}
if(detik==18)
{
 gbi7segmen_4(-100,0);
 gbi7segmen_2(0,0);
}
if(detik==19)
{
 gbi7segmen_4(-100,0);
 gbi7segmen_1(0,0);
}
if(detik==20)
{
 gbi7segmen_4(-100,0);
 gbi7segmen_0(0,0);
}
if(detik==21)
{
 gbi7segmen_3(-100,0);
 gbi7segmen_9(0,0);
}
if(detik==22)
{
 gbi7segmen_3(-100,0);
 gbi7segmen_8(0,0);
}
if(detik==23)
{
 gbi7segmen_3(-100,0);
 gbi7segmen_7(0,0);
}
if(detik==24)
{
 gbi7segmen_3(-100,0);
 gbi7segmen_6(0,0);
}
if(detik==25)
{
 gbi7segmen_3(-100,0);
 gbi7segmen_5(0,0);
}
if(detik==26)
{
 gbi7segmen_3(-100,0);
 gbi7segmen_4(0,0);
}
if(detik==27)
{
 gbi7segmen_3(-100,0);
 gbi7segmen_3(0,0);
}
if(detik==28)
{
 gbi7segmen_3(-100,0);
 gbi7segmen_2(0,0);
}
if(detik==29)
{
 gbi7segmen_3(-100,0);
 gbi7segmen_1(0,0);
}
if(detik==30)
{
 gbi7segmen_3(-100,0);
 gbi7segmen_0(0,0);
}
if(detik==31)
{
 gbi7segmen_2(-100,0);
 gbi7segmen_9(0,0);
}
if(detik==32)
{
 gbi7segmen_2(-100,0);
 gbi7segmen_8(0,0);
}
if(detik==33)
{
 gbi7segmen_2(-100,0);
 gbi7segmen_7(0,0);
}
if(detik==34)
{
 gbi7segmen_2(-100,0);
 gbi7segmen_6(0,0);
}
if(detik==35)
{
 gbi7segmen_2(-100,0);
 gbi7segmen_5(0,0);
}
if(detik==36)
{
 gbi7segmen_2(-100,0);
 gbi7segmen_4(0,0);
}
if(detik==37)
{
 gbi7segmen_2(-100,0);
 gbi7segmen_3(0,0);
}
if(detik==38)
{
 gbi7segmen_2(-100,0);
 gbi7segmen_2(0,0);
}
if(detik==39)
{
 gbi7segmen_2(-100,0);
 gbi7segmen_1(0,0);
}
if(detik==40)
{
 gbi7segmen_2(-100,0);
 gbi7segmen_0(0,0);
}
if(detik==41)
{
 gbi7segmen_1(-100,0);
 gbi7segmen_9(0,0);
}
if(detik==42)
{
 gbi7segmen_1(-100,0);
 gbi7segmen_8(0,0);
}
if(detik==43)
{
 gbi7segmen_1(-100,0);
 gbi7segmen_7(0,0);
}
if(detik==44)
{
 gbi7segmen_1(-100,0);
 gbi7segmen_6(0,0);
}
if(detik==45)
{
 gbi7segmen_1(-100,0);
 gbi7segmen_5(0,0);
}
if(detik==46)
{
 gbi7segmen_1(-100,0);
 gbi7segmen_4(0,0);
}
if(detik==47)
{
 gbi7segmen_1(-100,0);
 gbi7segmen_3(0,0);
}
if(detik==48)
{
 gbi7segmen_1(-100,0);
 gbi7segmen_2(0,0);
}
if(detik==49)
{
 gbi7segmen_1(-100,0);
 gbi7segmen_1(0,0);
}
if(detik==50)
{
 gbi7segmen_1(-100,0);
 gbi7segmen_0(0,0);
}
if(detik==51)
{
 gbi7segmen_0(-100,0);
 gbi7segmen_9(0,0);
}
if(detik==52)
{
 gbi7segmen_0(-100,0);
 gbi7segmen_8(0,0);
}
if(detik==53)
{
 gbi7segmen_0(-100,0);
 gbi7segmen_7(0,0);
}
if(detik==54)
{
 gbi7segmen_0(-100,0);
 gbi7segmen_6(0,0);
}
if(detik==55)
{
 gbi7segmen_0(-100,0);
 gbi7segmen_5(0,0);
}
if(detik==56)
{
 gbi7segmen_0(-100,0);
 gbi7segmen_4(0,0);
}
if(detik==57)
{
 gbi7segmen_0(-100,0);
 gbi7segmen_3(0,0);
}
if(detik==58)
{
 gbi7segmen_0(-100,0);
 gbi7segmen_2(0,0);
}
if(detik==59)
{
 gbi7segmen_0(-100,0);
 gbi7segmen_1(0,0);
}
//if(detik==60)
//{
// gbi7segmen_0(-100,0);
// gbi7segmen_0(0,0);
//}
}
getch();
return 1;
//getch();
}
//closegraph();
//getch();
  //  return 1;
//getch();
//
//}