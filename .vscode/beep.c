#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <dos.h>
#include <mmsystem.h>
void main()
{


    for (int a = 1; a < 20; a++)
    {
        Beep(1000, 1100 );
        _sleep(600);
                
    }
   // PlaySound(TEXT("C:\\Users\\yogid\\Music\\Agar Tum Sath Ho _ C:Ringtone _ Alka Yagnik _ Arijit Singh _ Ringtone(MP3_128K).mp3"),NULL, SND_ASYNC);
}
