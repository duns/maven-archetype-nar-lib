#ifndef NativeLib_H
#define NativeLib_H

#ifdef WIN32
__declspec(dllexport) 
#endif
extern char* NativeLib_sayHello();

#endif
