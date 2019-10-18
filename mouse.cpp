#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int i,j;
	SetCursorPos(640,500);
	while(!(false))
	{
		for(i=0;i<300;i++)
		{
			SetCursorPos(640+i,500);
			Sleep(20);
			SetCursorPos(640,500+i);
			Sleep(20);
			SetCursorPos(640-i,500);
			Sleep(20);
			SetCursorPos(640,500-i);
			Sleep(20);
		}
		for(j=0;j<300;j++)
		{
			SetCursorPos(640+i-j,500);
			Sleep(20);
			SetCursorPos(640,500+i-j);
			Sleep(20);
			SetCursorPos(640-i+j,500);
			Sleep(20);
			SetCursorPos(640,500-i+j);
			Sleep(20);
		}
	}
}

