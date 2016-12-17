#pragma once


#include "StdAfx.h"
#include <iostream>   
#include "Error_def.h"

//#include <String>  
//#include <stdlib.h> 
//#include <io.h>         //הכÿ נאבמעû ס פאיכאלט
//#include <fcntl.h>      //הכÿ נאבמעû ס פאיכאלט
//#include <sys\stat.h>   //הכÿ נאבמעû ס פאיכאלט
//#include "Windows.h"
//#include "Winbase.h"


using namespace System;
//using namespace System::ComponentModel;
//using namespace System::Collections;
//using namespace System::Windows::Forms;
//using namespace System::Data;
//using namespace System::Drawing;

using namespace std;
using namespace System::Collections;



//public ref class ELM323
static ref  class ELM323
{
public:
	ELM323(void);
	
	 ~ELM323();
	 int	Openport(void);
	 bool	setSpeed(int Speed);
	 int	getSpeed(void);
	 
	///static System::IO::Ports::SerialPort^  OBDCOM2;
	 int * i;
	static bool connectOBD;
	static bool readyOBD;
	static bool badcomand;

	static array<bool^>^ pid;
	static String ^  comport;
	static int BaudRate;
	static array<String^>^ mode1;
	static array<String^>^ mode2;
	static array<String^>^ mode3;
	static array<String^>^ mode4;
	static array<String^>^ mode5;
	static array<String^>^ mode6;
	static array<String^>^ mode7;
	static array<String^>^ mode8;
	static array<String^>^ mode9;
	static array<String^>^ mode10;


	 void  ReadDataELM(String^ readdate);
	 void  ParserELM( int mode,int pid, int valuepid);

};

