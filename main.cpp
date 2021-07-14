#include <windows.h>

int CALLBACK WinMain(
  HINSTANCE hInstance,
  HINSTANCE hPrevInstance,
  LPSTR     lpCmdLine,
  int       nShowCmd
) {
  HWND window;
  MessageBox(nullptr, "The start of a journey.", "My Game", MB_OK | MB_HELP);
  return 0;
}