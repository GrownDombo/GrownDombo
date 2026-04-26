
#pragma once

#ifdef _USRDLL
#define IESTATE dllexport
#else
#define IESTATE dllimport
#endif

#ifdef __cplusplus
#define DECLSPEC extern "C" __declspec(IESTATE)
#else
#define DECLSPEC __declspec(IESTATE)
#endif

DECLSPEC void MemoryLeak();