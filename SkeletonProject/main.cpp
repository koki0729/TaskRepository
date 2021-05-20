#include <DxLib.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	SetWindowText(L"2016038_‹gŽŸ–¦‹P");
	ChangeWindowMode(true);
	if (DxLib_Init() == -1)
	{
		return 1;
	}
	SetDrawScreen(DX_SCREEN_BACK);

	while (ProcessMessage() != -1)
	{
		ClearDrawScreen();
		DrawBox(100, 100, 200, 200, 0xff0000, true);
		ScreenFlip();
	}
	DxLib_End();
	return 0;
}