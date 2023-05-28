#include <iostream>
#include <array>
#include <cstring>


void update()
{
	system("apt-get update");
	system("apt-get upgrade -y");
}

void install(std::string prut)
{
	std::string cmd_s = "apt-get install " + prut;
	char cmd_c[1024];
	strcpy(cmd_c, cmd_s.c_str());
	system(cmd_c);
}

int main()
{
	std::string prutA[] = {"gcc","g++","clang","perl","lua5.4","python3","pip3","net-tools","iw","nmap","wireshark","git","dia","libimage-exiftool-perl"};
	uint lenA 			= std::end(prutA)-std::begin(prutA);
	
	update();

	for (uint i=0; i<lenA;i++)
			install(prutA[i]);

	update();
	
	return 0;
}