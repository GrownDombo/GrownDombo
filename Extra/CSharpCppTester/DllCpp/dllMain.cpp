// dllmain.cpp : DLL 애플리케이션의 진입점을 정의합니다.
#include "pch.h"
#include "dllMain.h"

void MemoryLeak() {
	char* pLeak = new char[1024];  // 1KB 할당 후 해제하지 않음 일부러 메모리 누수 나게함 
	memset(pLeak, 0xAA, 1024);     // 할당만하고 해제하지 않아 메모리 누수 일어나도록
}

