#pragma once
#ifdef MYDLL_EXPORTS
#define MYDLL_API extern "C" __declspec(dllexport)
#else
#define MYDLL_API extern "C" __declspec(dllimport)
#endif

MYDLL_API char* load_image(const char* filename, int& width, int& height);