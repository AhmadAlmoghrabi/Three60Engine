#include <T60Client.h>

class T60Launcher : public T60E::Application
{

public:

	T60Launcher()
	{

	}

	~T60Launcher()
	{

	}
	
};

T60E::Application* T60E::CreateApplication()
{
	return new T60Launcher();
}