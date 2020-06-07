#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd, &gm,"C:\\TC\\BGI");
    setcolor(RED);
    int i,j,k,w,q;

    outtextxy(100,100,"Hey Buddy this is small video for you.....:)\nEnjoy it \n press enter to watch");

    getch();
    cleardevice();
    outtextxy(100,100,"[pavan_creates_$]Loading file............/");
    delay(3000);
    cleardevice();
outtextxy(100,100,"Blinking Circle....:)");
   delay(200);
    cleardevice();
    for(i=0;i<30;i++)
    {
        j=rand()%500+10;
        w=rand()%100+1;
        k=rand()%500+10;


        for(q=0;q<40;q++)
        { setcolor(q/7);
        circle(10+k,10+j,q);
        delay(10);

        }

    }
    cleardevice();
    outtextxy(100,100,"Crazy Lines....:)");
    delay(2000);
    cleardevice();
    for(i=0;i<100;i++)
    {
        j=rand()%500+10;
        w=rand()%10+1;
        k=rand()%500+10;


        for(q=0;q<40;q++)
        {setcolor(w);
        line(10+k,10+j,10+j,10+k);
        line(11+k,w+j,11+j,11+k);
        line(j+k,w+j,10+k,w+j);
        line(w+k,10+j,53+j,123+k);
        line(80+k,w+j,15+j,12+k);
        line(67+k,45+j,45+k,w+j);

        delay(1);
       line(230+w,10+j,10+j,10+k);
        line(11+w,w+j,11+j,11+k);
        line(j+k,w+23,10+k,w+j);
        line(w+k,10+j,53+q,123+k);
        line(80+k,w+j,15+k,12+k);
        line(67+j,125+j,23+k,w+j);
        delay(1);
       cleardevice();

        }

    }
    outtextxy(100,100,"Dumb Rectangle....:)");
   delay(2000);
    cleardevice();
        for(i=0;i<100;i++)
    {
        j=rand()%500+10;
        w=rand()%10+1;
        k=rand()%500+10;


        for(q=0;q<40;q++)
        {
            setcolor(w);
        rectangle(10+k,10+j,10+j,10+k);
        rectangle(11+k,w+j,11+j,11+k);
        rectangle(j+k,w+j,10+k,w+j);
        rectangle(w+k,10+j,53+j,123+k);
        rectangle(80+k,w+j,15+j,12+k);
        rectangle(67+k,45+j,45+k,w+j);

        delay(1);
       rectangle(230+w,10+j,10+j,10+k);
        rectangle(11+w,w+j,11+j,11+k);
        rectangle(j+k,w+23,10+k,w+j);
        rectangle(w+k,10+j,53+q,123+k);
        rectangle(80+k,w+j,15+k,12+k);
        rectangle(67+j,125+j,23+k,w+j);
        delay(1);
       cleardevice();

        }

    } outtextxy(100,100,"[pavan_creates_$]Exiting Program ............/");
    delay(4000);
    closegraph();

    return 0;
}

