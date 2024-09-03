#pragma once
#include "Core.h"

namespace Lin
{
	class LIN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};

	//定义在客户端中
	Application* CreateApplication();
}


