#pragma once

#ifdef T60E_PLATFORM_WINDOWS
	#ifdef T60E_BUILD_DLL
		#define T60E_API __declspec(dllexport)
	#else
		#define T60E_API __declspec(dllimport)
	#endif
#else
	#error Support Windows Only!
#endif