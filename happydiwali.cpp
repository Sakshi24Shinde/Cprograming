
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <dos.h>

#define PI 3.14159

int W, H;
float s;
int ox, oy;
int frame = 0;

int X(float x)
{
    return ox + (int)(x * s);
}

int Y(float y)
{
    return oy + (int)(y * s);
}

int R(float r)
{
    return (int)(r * s);
}

void drawStar(int x, int y, int color)
{
    setcolor(color);

    line(X(x - 5), Y(y), X(x + 5), Y(y));
    line(X(x), Y(y - 5), X(x), Y(y + 5));

    putpixel(X(x), Y(y), WHITE);
}

void firework(int x, int y, int radius, int color)
{
    int i;
    float angle;
    int x1, y1, x2, y2;

    for (i = 0; i < 24; i++)
    {
        angle = i * 2 * PI / 24;

        x1 = x + radius * cos(angle);
        y1 = y + radius * sin(angle);

        x2 = x + (radius + 15) * cos(angle);
        y2 = y + (radius + 15) * sin(angle);

        setcolor(color);
        setlinestyle(SOLID_LINE, 0, 2);

        line(X(x1), Y(y1), X(x2), Y(y2));

        setfillstyle(SOLID_FILL, YELLOW);
        fillellipse(X(x2), Y(y2), R(2), R(2));
    }

    setlinestyle(SOLID_LINE, 0, 1);
}

void rocket(int x, int y)
{
    int p[10];

    // Rocket body
    p[0] = X(x);
    p[1] = Y(y - 35);

    p[2] = X(x + 12);
    p[3] = Y(y + 10);

    p[4] = X(x);
    p[5] = Y(y + 22);

    p[6] = X(x - 12);
    p[7] = Y(y + 10);

    p[8] = X(x);
    p[9] = Y(y - 35);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL, LIGHTRED);
    fillpoly(5, p);

    // Nose
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(X(x), Y(y - 35), R(5), R(5));

    // Flames
    setcolor(YELLOW);

    line(X(x - 5), Y(y + 20), X(x), Y(y + 48));
    line(X(x), Y(y + 20), X(x), Y(y + 55));
    line(X(x + 5), Y(y + 20), X(x), Y(y + 48));

    // Fins
    setcolor(LIGHTRED);

    line(X(x - 10), Y(y + 8), X(x - 20), Y(y + 23));
    line(X(x + 10), Y(y + 8), X(x + 20), Y(y + 23));
}

void diamond(int x, int y, int size, int color)
{
    int p[10];

    p[0] = X(x);
    p[1] = Y(y - size);

    p[2] = X(x + size);
    p[3] = Y(y);

    p[4] = X(x);
    p[5] = Y(y + size);

    p[6] = X(x - size);
    p[7] = Y(y);

    p[8] = X(x);
    p[9] = Y(y - size);

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, color);

    fillpoly(5, p);
}

// ==================================
// STABLE KANDIL
// ==================================

void lantern()
{
    int i, x;
    int p[10];

    // Hanging chain
    setcolor(WHITE);

    line(X(500), Y(15), X(500), Y(105));

    // Top ornament
    diamond(500, 105, 25, YELLOW);
    diamond(500, 105, 12, RED);

    // Top roof
    p[0] = X(335);
    p[1] = Y(170);

    p[2] = X(665);
    p[3] = Y(170);

    p[4] = X(610);
    p[5] = Y(245);

    p[6] = X(390);
    p[7] = Y(245);

    p[8] = X(335);
    p[9] = Y(170);

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, RED);

    fillpoly(5, p);

    // Roof decorations
    for (i = 0; i < 17; i++)
    {
        diamond(350 + i * 19, 185, 5, YELLOW);
    }

    // Main body
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, LIGHTRED);

    bar(X(300), Y(240), X(700), Y(540));

    // Main borders
    setlinestyle(SOLID_LINE, 0, 3);

    rectangle(X(300), Y(240), X(700), Y(540));
    rectangle(X(315), Y(255), X(685), Y(525));

    setlinestyle(SOLID_LINE, 0, 1);

    // Side panels
    setfillstyle(SOLID_FILL, RED);

    bar(X(300), Y(240), X(360), Y(540));
    bar(X(640), Y(240), X(700), Y(540));

    // Side diamonds
    for (i = 0; i < 7; i++)
    {
        diamond(330, 265 + i * 42, 12, YELLOW);
        diamond(670, 265 + i * 42, 12, YELLOW);
    }

    // Inner golden border
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);

    bar(X(360), Y(270), X(640), Y(510));

    // Inner light panel
    setfillstyle(SOLID_FILL, LIGHTCYAN);

    bar(X(375), Y(285), X(625), Y(495));

    rectangle(X(375), Y(285), X(625), Y(495));

    // FIXED GLOW - NO ANIMATION
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);

    fillellipse(X(500), Y(390), R(65), R(75));

    setfillstyle(SOLID_FILL, LIGHTRED);

    fillellipse(X(500), Y(390), R(58), R(70));

    setfillstyle(SOLID_FILL, YELLOW);

    fillellipse(X(500), Y(390), R(43), R(53));

    setfillstyle(SOLID_FILL, WHITE);

    fillellipse(X(500), Y(390), R(24), R(34));

    diamond(500, 390, 16, RED);

    // Decorative flowers
    for (i = 0; i < 7; i++)
    {
        x = 405 + i * 32;

        setcolor(RED);

        circle(X(x), Y(305), R(7));
        circle(X(x), Y(475), R(7));

        setcolor(YELLOW);

        putpixel(X(x), Y(305), YELLOW);
        putpixel(X(x), Y(475), YELLOW);
    }

    // Bottom roof
    p[0] = X(300);
    p[1] = Y(540);

    p[2] = X(700);
    p[3] = Y(540);

    p[4] = X(610);
    p[5] = Y(620);

    p[6] = X(390);
    p[7] = Y(620);

    p[8] = X(300);
    p[9] = Y(540);

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, RED);

    fillpoly(5, p);

    // Bottom decorations
    for (i = 0; i < 17; i++)
    {
        diamond(350 + i * 19, 555, 6, YELLOW);
    }

    // FIXED HANGING TASSELS
    for (i = 0; i < 17; i++)
    {
        x = 350 + i * 19;

        setcolor(YELLOW);

        line(X(x), Y(605), X(x), Y(675));

        setcolor(LIGHTGREEN);
        setfillstyle(SOLID_FILL, LIGHTGREEN);

        fillellipse(X(x), Y(680), R(6), R(12));

        setcolor(LIGHTRED);

        line(X(x), Y(690), X(x - 7), Y(705));
        line(X(x), Y(690), X(x + 7), Y(705));
    }
}

// ==================================
// MAIN PROGRAM
// ==================================

int main()
{
    int gd = DETECT, gm;

    int i;
    int r1, r2, r3, r4;

    int rocketY1, rocketY2;

    initgraph(&gd, &gm, "");

    W = getmaxx();
    H = getmaxy();

    // Fit design to screen
    s = W / 1000.0;

    if (H / 700.0 < s)
        s = H / 700.0;

    ox = (W - (int)(1000 * s)) / 2;
    oy = (H - (int)(700 * s)) / 2;

    srand(time(NULL));

    r1 = 20;
    r2 = 25;
    r3 = 15;
    r4 = 20;

    while (!kbhit())
    {
        cleardevice();

        // Background stars
        for (i = 0; i < 55; i++)
        {
            int sx = 20 + (i * 173) % 960;
            int sy = 20 + (i * 97) % 650;

            if (i % 3 == frame % 3)
                drawStar(sx, sy, YELLOW);
            else
                putpixel(X(sx), Y(sy), LIGHTGRAY);
        }

        // Animated fireworks
        firework(120, 160, r1, LIGHTRED);
        firework(850, 130, r2, LIGHTCYAN);
        firework(100, 490, r3, LIGHTGREEN);
        firework(900, 470, r4, LIGHTMAGENTA);

        // Changing firework sizes
        r1 = 15 + (frame % 25);
        r2 = 20 + ((frame + 8) % 30);
        r3 = 15 + ((frame + 15) % 25);
        r4 = 20 + ((frame + 5) % 30);

        // Moving rockets
        rocketY1 = 650 - (frame * 5) % 700;
        rocketY2 = 650 - (frame * 4 + 300) % 700;

        rocket(220, rocketY1);
        rocket(780, rocketY2);

        // Sparkling rocket trails
        for (i = 0; i < 12; i++)
        {
            drawStar(230 + i * 3, rocketY1 + 55 + i * 3, YELLOW);

            drawStar(770 - i * 3, rocketY2 + 55 + i * 3, LIGHTRED);
        }

        // DRAW STABLE KANDIL
        lantern();

        // Greeting
        setcolor(YELLOW);

        settextstyle(3, 0, 5);

        outtextxy(X(250), Y(20), "HAPPY DIWALI!");

        setcolor(LIGHTCYAN);

        settextstyle(1, 0, 2);

        outtextxy(X(365), Y(695), "FESTIVAL OF LIGHTS");

        // Animation speed
        delay(60);

        frame++;
    }

    getch();

    closegraph();

    return 0;
}
