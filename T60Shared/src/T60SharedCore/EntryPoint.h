#pragma once

#ifdef T60E_PLATFORM_WINDOWS

extern T60E::Application* T60E::CreateApplication();

int main(int argc, char** argv)
{
	
	auto app = T60E::CreateApplication();
	app->Run();
	delete app;

}

#endif