#include <windows.h>
#include <iostream>
using namespace std;

int main()
{
	system("color 7F");
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	HWND hwnd = GetConsoleWindow();
	HDC hdc = GetDC(hwnd);

	system("title Real Graphics: Pen and Brush");
	system("mode con cols=120 lines=50");
	//////////////////////////////////////////////////////
	HPEN pen = CreatePen(PS_SOLID, 10, RGB(0, 0, 0));
	HBRUSH brush = CreateSolidBrush(RGB(0, 0, 0));

	SelectObject(hdc, pen);
	SelectObject(hdc, brush);

	int x = 50;
	int y = 50;

	int width = 700;
	int height = 150;

	Rectangle(hdc, x, y, x + width, y + height);
	///////////////////////////////////////////////////////
	HPEN pen2 = CreatePen(PS_SOLID, 10, RGB(189, 20, 10));
	HBRUSH brush2 = CreateSolidBrush(RGB(189, 20, 10));

	SelectObject(hdc, pen2);
	SelectObject(hdc, brush2);

	int x2 = 50;
	int y2 = 205;

	int width2 = 700;
	int height2 = 150;

	Rectangle(hdc, x2, y2, x2 + width2, y2 + height2);
	///////////////////////////////////////////////////////
	HPEN pen3 = CreatePen(PS_SOLID, 10, RGB(235, 187, 0));
	HBRUSH brush3 = CreateSolidBrush(RGB(235, 187, 0));

	SelectObject(hdc, pen3);
	SelectObject(hdc, brush3);

	int x3 = 50;
	int y3 = 360;

	int width3 = 700;
	int height3 = 150;

	Rectangle(hdc, x3, y3, x3 + width3, y3 + height3);
	///////////////////////////////////////////////////////
	CONSOLE_CURSOR_INFO cci;
	cci.bVisible = false;
	cci.dwSize = 100;
	SetConsoleCursorInfo(h, &cci);

	Sleep(INFINITE);
}