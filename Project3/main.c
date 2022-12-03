#include "acllib.h"
#include <stdio.h>

//void mouseListener(int x, int y, int button, int event)
//{
//	printf("x=%d, y=%d, button=%d, event=%d\n", x, y, button, event);
//}

void mouseListener(int x, int y, int button, int event)
{
	static int ox = 0;
	static int oy = 0;
	printf("x = %d, y = %d,button= %d, event = %d\n", x, y, button, event);
	beginPaint();
	line(ox, oy, x, y);
	endPaint();
	ox = x; oy = y;
}

void keyListener(int key, int event)
{
	printf("key = %d, event = %d\n", key, event);
}

void timerListener(int id)
{
	printf("id = %d\n", id);
}

int Setup()
{
	initWindow("Test", DEFAULT, DEFAULT, 800, 600);
	initConsole();
	printf("Hello\n");

	registerMouseEvent(mouseListener);
	registerMouseEvent(keyListener);
	registerMouseEvent(timerListener);

	beginPaint();
	line(10, 10, 100, 100);
	endPaint();

	return 0;

}

