/* Replace "dll.h" with the name of your header */
#include <windows.h>
#include <stdio.h>
#include "pyfindw.h"

//Find the specified window
PYFINDW HWND findWindow (char *window)
{
    return FindWindow(0, window);
}

// ---------------------- variables of the function currentWindow --------------------------------
HWND window; //Handle number of the window
char windowText[256]; //Title of the window
//------------------------------------------------------------------------------------------------

//Return the text of current window
PYFINDW char* currentWindow (void)
{
    window = GetForegroundWindow(); //Handle of the window

    if(windowText)
    {
        GetWindowText(window, windowText, 256); //Get the title of the window
    }

    return windowText;
}
