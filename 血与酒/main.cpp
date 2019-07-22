#include <graphics.h>
#include <windows.h>
#include <MMSystem.h>//打开音乐所需要的头文件
#pragma comment(lib,"winmm.lib")//告诉编译器,加载Winmm.lib库文件

int main(void){
	initgraph(1920,1080);
	loadimage(0,"wushi3.jpg");

	//重复播放音乐
	mciSendString(_T("play 血与酒.mp3 repeat"),0,0,0);

	system("pause");
	closegraph();
	return 0;

}