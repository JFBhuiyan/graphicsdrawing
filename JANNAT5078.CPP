//jannatul ferdus
#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int i;
    cout<<"\n     CSE1803015078\n";
    cout<<"\n     CHOOSE YOUR CHOICE\n";
    cout<<"\n     1.FLAG";
    cout<<"\n     2.EMOJI";
    cout<<"\n     3.HOUSE SCENARY";
    cout<<"\n     4.MOSQUE";
    cout<<"\n     PLEASE ENTER YOUR CHOICE:";

    cin>>i;

    switch(i)
    {
    case 1:
        {
                initwindow(924,720,"Flag");
    setcolor(9);
     rectangle(0,0,1024,400);
    setfillstyle(1,9);
    floodfill(40,40,9);
    setcolor(6);
    rectangle(0,400,1024,720);
    setfillstyle(1,6);
    floodfill(100,700,6);

     setcolor(WHITE);
    rectangle(40,50,50,550);
    setfillstyle(4,WHITE);
    floodfill(45,55,WHITE);
   setcolor(7);

    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    rectangle(50,50,550,350);
    floodfill(60,60,GREEN);

    setcolor(RED);
    circle(275,200,100);
    setfillstyle(1,RED);
    floodfill(275,200,RED);

             cout<<"\n     1.FLAG";
            break;
        }
        case 2:
        {
    initwindow(800,600,"Emoji");
    setcolor(3);
    setfillstyle(1,3);
    floodfill(50,50,3);
    setcolor(YELLOW);
    circle(300,200,150);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(301,102,YELLOW);
    setcolor(BROWN);
    circle(225,135,35);
    circle(375,135,35);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(226,136,BROWN);
    floodfill(376,136,BROWN);
    setcolor(4);
    circle(225,150,15);
    circle(375,150,15);
    setfillstyle(1,4);
    floodfill(225,150,4);
    floodfill(375,150,4);
     setcolor(RED);
    line(300,175,255,225);
   // line(300,175,345,225);
    line(255,225,345,225);

    circle(310,205,5);
    setfillstyle(1,4);
    floodfill(310,205,4);
    setcolor(BROWN);
    ellipse(300,275,180,0,75,40);
    ellipse(300,275,180,0,75,20);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(300,300,BROWN);
         cout<<"\n     2.EMOJI";
         break;
        }
        case 3:
            {

    initwindow(1024,720,"village");
    setcolor(9);
    rectangle(0,0,1024,300);
    setfillstyle(1,9);
    floodfill(50,50,9);
    setcolor(6);
    line(1,300,1024,300);
    line(1,300,450,250);
    line(450,250,700,300);
    line(650,300,900,250);
    line(900,250,1024,300);

     setfillstyle(1,6);
     floodfill(450,260,6);
      floodfill(700,299,6);
    setcolor(2);
    line(0,300,1024,300);
    setfillstyle(1,2);
    floodfill(50,700,2);
    setcolor(15);
    circle(300,200,30);
    setfillstyle(SOLID_FILL,15);
    floodfill(301,202,15);

    setcolor(WHITE);
        circle(100,100,3);
    circle(50,50,2);
    circle(600,70,3);
    circle(700,250,3);
    circle(500,150,3);
    circle(550,200,3);
    circle(850,50,2);
    circle(450,250,3);
    circle(250,150,3);
          circle(600,100,3);
    circle(700,50,2);
    circle(400,70,3);
    circle(300,250,3);
    circle(200,150,3);
    circle(150,200,3);
    circle(850,50,2);
    circle(750,250,3);
    circle(650,150,3);
    setfillstyle(SOLID_FILL,WHITE);
        floodfill(100,100,WHITE);
    floodfill(50,50,WHITE);
    floodfill(600,70,WHITE);
    floodfill(700,250,WHITE);
    floodfill(500,150,WHITE);
      floodfill(550,200,WHITE);
    floodfill(850,50,WHITE);
    floodfill(450,250,WHITE);
    floodfill(250,150,WHITE);
            floodfill(600,100,WHITE);
    floodfill(700,50,WHITE);
    floodfill(400,70,WHITE);
    floodfill(300,250,WHITE);
    floodfill(200,150,WHITE);
      floodfill(150,200,WHITE);
    floodfill(850,50,WHITE);
    floodfill(750,250,WHITE);
    floodfill(650,150,WHITE);

   setcolor(5);
     line(150,200,350,200);
    line(150,200,250,350);
    line(350,200,450,350);
    line(250,350,450,350);
    setfillstyle(1,5);
    floodfill(250,300,5);
    setcolor(5);
     line(50,340,75,340);
    line(50,340,151,200);
    line(75,340,165,214);
    line(151,200,165,214);
    setfillstyle(1,5);
    floodfill(60,339,5);
    setcolor(8);
    line(75,340,164,215);
    line(164,215,250,350);
    line(75,340,75,400);
    line(250,350,250,450);
    line(75,400,250,450);
      setfillstyle(1,8);
      floodfill(76,342,8);

       setcolor(4);
    line(75,400,50,410);
      line(75,400,250,450);
    line(50,410,250,475);
     line(250,450,425,430);
      line(425,430,445,445);
        line(250,475,445,445);
    setfillstyle(1,4);
      floodfill(75,407,4);
      setcolor(7);
          line(250,350,430,350);
         line(250,350,250,450);
       line(250,450,425,430);
     line(425,350,425,430);
     setfillstyle(1,7);
     floodfill(400,400,7);
      setcolor(12);
      line(320,380,320,443);
      line(320,380,380,380);
      line(380,380,380,435);
      line(320,443,380,435);
      setfillstyle(1,12);
      floodfill(330,390,12);
        setcolor(12);
        line(130,350,200,370);
        line(200,370,200,420);
         line(130,400,200,420);
        line(130,350,130,400);

       setfillstyle(1,12);
       floodfill(150,385,12);
     setcolor(3);
     line(0,720,1024,400);
     setfillstyle(1,3);
     floodfill(250,710,3);

     setcolor(6);
     ellipse(380,580,180,0,150,80);
     ellipse(380,580,180,0,150,110);
     setfillstyle(3,6);
     floodfill(380,680,6);

     setcolor(BLACK);
     ellipse(380,580,180,0,150,110);
     ellipse(380,580,180,0,150,150);
     setfillstyle(1,BLACK);
     floodfill(380,700,BLACK);
    setcolor(14);
    ellipse(650,435,360,180,70,250);
    line(580,435,720,435);
    setfillstyle(1,14);
    floodfill(650,434,14);
                cout<<"\n     3.HOUSE SCENARY";
             break;
            }
        case 4:
            {
                       initwindow(1000,720,"Mosque");
    setcolor(9);
    rectangle(0,0,1000,450);
    setfillstyle(1,9);
    floodfill(50,50,9);
    setcolor(6);
    line(0,450,1000,450);
    setfillstyle(1,6);
    floodfill(50,700,6);
    setcolor(WHITE);

    circle(600,220,40);


    circle(100,100,3);
    circle(700,50,2);
    circle(600,70,3);
    circle(700,250,3);
    circle(500,150,3);
    circle(550,200,3);
    circle(850,50,2);
    circle(650,250,3);
    circle(250,50,3);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(100,100,WHITE);
    floodfill(700,50,WHITE);
    floodfill(600,70,WHITE);
    floodfill(700,250,WHITE);
    floodfill(500,150,WHITE);
      floodfill(550,200,WHITE);
    floodfill(850,50,WHITE);
    floodfill(650,250,WHITE);
    floodfill(250,50,WHITE);

    floodfill(601,222,WHITE);
    setcolor(8);
     line(120,450,350,120);
    line(350,120,520,450);
    line(120,450,720,450);
   setfillstyle(1,8);
   floodfill(130,449,8);
       setcolor(8);
     line(0,450,150,120);
    line(150,120,320,450);
    line(0,450,320,450);
   setfillstyle(1,8);
   floodfill(50,449,8);

   setcolor(8);

   line(650,450,750,100);
   line(750,100,1000,450);
   line(650,450,1000,450);
   setfillstyle(1,8);
   floodfill(660,449,8);
  setcolor(8);
   line(400,450,550,150);
    line(550,150,720,450);
    line(400,450,720,450);
    setfillstyle(1,8);
    floodfill(530,448,8);
   setcolor(12);
   rectangle(100,350,550,550);
   setfillstyle(1,12);
   floodfill(101,351,12);
   setcolor(5);
   line(100,550,70,570);
   line(70,570,580,570);
   line(550,550,580,570);
   line(100,550,550,550);
   setfillstyle(1,5);
   floodfill(85,569,5);
   setcolor(15);
   ellipse(325,500,360,180,50,90);
   line(275,500,275,550);
   line(375,500,375,550);
   line(275,550,375,550);
   ellipse(200,500,360,180,25,50);
   line(175,500,175,550);
   line(225,500,225,550);
   line(175,550,225,550);
   ellipse(450,500,360,180,25,50);
   line(425,500,425,550);
     line(425,550,475,550);
      line(475,500,475,550);

   setfillstyle(1,15);
   floodfill(276,501,15);
   floodfill(176,501,15);
   floodfill(426,501,15);
   setcolor(5);
   rectangle(80,335,570,350);
   setfillstyle(1,5);
   floodfill(81,336,5);

   setcolor(13);
   ellipse(125,125,360,180,25,40);
   line(125,85,125,65);
    line(124,85,124,65);
   ellipse(525,125,360,180,25,40);
   line(525,85,525,65);
   line(524,85,524,65);
   line(100,125,100,335);
   line(150,125,150,335);
   line(100,335,150,335);
   line(500,125,500,335);
   line(550,125,550,335);
   line(550,335,500,335);

   ellipse(125,50,130,340,15,15);
ellipse(525,50,130,340,15,15);
 ellipse(125,50,130,340,14,14);
ellipse(525,50,130,340,14,14);
   setfillstyle(1,13);
   floodfill(101,126,13);
   floodfill(501,126,13);
   setcolor(10);
   rectangle(200,250,450,335);
   setfillstyle(1,10);
   floodfill(251,251,10);
   setcolor(15);
   rectangle(115,200,135,300);
   rectangle(515,200,535,300);
   rectangle(235,270,265,315);
   rectangle(285,270,315,315);
   rectangle(335,270,365,315);
   rectangle(385,270,415,315);
   setfillstyle(1,15);
   floodfill(116,201,15);
   floodfill(516,201,15);
   floodfill(236,271,15);
   floodfill(286,271,15);
   floodfill(336,271,15);
   floodfill(386,271,15);
setcolor(5);
rectangle(190,240,460,250);
setfillstyle(1,5);
floodfill(191,241,5);
setcolor(11);
setfillstyle(1,11);
ellipse(325,80,130,340,20,20);
ellipse(325,80,130,340,19,19);
line(325,115,325,100);
line(324,115,324,100);
setcolor(11);
ellipse(325,240,360,180,125,125);
line(200,240,450,240);
setfillstyle(1,11);
floodfill(325,230,11);



setcolor(3);
     line(0,720,1024,500);
     setfillstyle(1,3);
     floodfill(250,710,3);

              cout<<"\n     4.MOSQUE";
                break;
            }
            default:
            {
                cout<<"\n     Please enter  correctly";
                break;
            }
    }

    getch();
    closegraph();
}
