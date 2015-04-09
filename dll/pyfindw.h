#ifndef _DLL_H_
#define _DLL_H_

#if BUILDING_DLL
# define PYFINDW __declspec (dllexport)
#else /* Not BUILDING_DLL */
# define PYFINDW __declspec (dllimport)
#endif /* Not BUILDING_DLL */

#include <windows.h>

PYFINDW HWND findWindow (char *window); //Find the specified window
PYFINDW char* currentWindow (void); //Return the text of current window


#endif /* _DLL_H_ */
