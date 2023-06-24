#include <iostream>
#include <array>
#include <cstring>
#include "UInstaller.h"


int main(int argc, char* argv[])
{
	if (argc > 1)
	{
		string file_name = argv[1];
		uInstall uI;
		uI.start(file_name);
	}else{
		return 0;
	}
	
	return 0;
}