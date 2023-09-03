#pragma once

#include "Core.h"

namespace T60E
{
	class T60E_API Application
	{

	public:

		Application();
		

		virtual ~Application();
		

		void Run();
	};

	// To be defined in the launcher or other Client applications.
	Application* CreateApplication();
}


