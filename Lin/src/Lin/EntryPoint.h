#pragma once

#ifdef LIN_PLATFORM_WINDOWS

extern Lin::Application* Lin::CreateApplication();

int main(int argc,char** argv)//�������������������Ĳ���win main�����Ա���һЩ��Ϣ�����ڳ�����δ���
{
	Lin::Application* application = Lin::CreateApplication();
	application->Run();
	delete application;		
}

#endif // LIN_PLATFORM_WINDOWS

