// LoadTimeDll.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <windows.h> 

extern "C" int __cdecl myPuts(LPCWSTR);   // a function from a DLL

int main(VOID)
{
    int Ret = 1;

    Ret = myPuts(L"Message sent to the DLL function\n");
    return Ret;
}