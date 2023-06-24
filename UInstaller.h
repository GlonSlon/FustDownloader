#include <iostream>
#include <fstream>
#include <cstring>
#include <array>


using std::string;
using std::begin;
using std::end;
using std::ifstream;

class fRead
{
public:
	
	int count = 0;
	string *readF(string file_n)
	{
		string *str_buff = new string[200];
		ifstream file;
		file.open(file_n);
		
		if (file.is_open())
		{
			while (file)
			{
				str_buff[count] = file.get();
				count++;
			}
		}
		return str_buff;
	}
};

class uInstall : public fRead
{
public:
	void update()
	{
		system("apt update");
		system("apt upgrade -y");
	}

	void install(string prut)
	{
		string cmd_s = "apt-get install " + prut;
		char cmd_c[1024];
		strcpy(cmd_c, cmd_s.c_str());
		system(cmd_c);
	}

	void start(string file_name)
	{
		int lenA;
		string *arr = new string[200];
		
		arr = readF(file_name);

		lenA = end(*arr)-begin(*arr);
		

		update();



		for (int i=0; i<lenA; i++)
			install(arr[i]);
		

		update();

		

	}
};

