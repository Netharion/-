#include <graphics.h>
#include <windows.h>
#include <MMSystem.h>//����������Ҫ��ͷ�ļ�
#pragma comment(lib,"winmm.lib")//���߱�����,����Winmm.lib���ļ�

int main(void){
	initgraph(1920,1080);
	loadimage(0,"wushi3.jpg");

	//�ظ���������
	mciSendString(_T("play Ѫ���.mp3 repeat"),0,0,0);

	system("pause");
	closegraph();
	return 0;

}