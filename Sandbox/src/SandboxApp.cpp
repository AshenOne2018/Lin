#include <Lin.h>

class Sandbox : public Lin::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

private:

};


Lin::Application* Lin::CreateApplication()
{
	return new Sandbox();
}