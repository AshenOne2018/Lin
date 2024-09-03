#pragma once

#ifdef LIN_PLATFORM_WINDOWS

extern Lin::Application* Lin::CreateApplication();

int main(int argc,char** argv)//好像是有这两个参数的才是win main，可以保留一些信息，关于程序如何错误
{
	Lin::Application* application = Lin::CreateApplication();
	application->Run();
	delete application;		
}

#endif // LIN_PLATFORM_WINDOWS

