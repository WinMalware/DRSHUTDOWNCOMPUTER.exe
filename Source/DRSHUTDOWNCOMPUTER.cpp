#include "ClientShutdown.h"
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Sleep(5000);
	ForceShutdownComputer();
}