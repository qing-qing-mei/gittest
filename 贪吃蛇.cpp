
#include"CUnit.h"
#include"CMenu.h"
#include<windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

int main()
{
	CMenu::loadGame();
	PlaySound(L"Lemon.wav",
		NULL, SND_FILENAME | SND_ASYNC | SND_LOOP); //加入背景音乐
	while (true)
	{
		CMenu m_iMenu;
		if(m_iMenu.showMenu())
			break;
		cout << "再来一局?(y/n): ";
		char ch;
		cin >> ch;
		if (ch == 'y');
		else break;
	}
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单
