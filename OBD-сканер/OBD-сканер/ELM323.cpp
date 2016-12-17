#include "StdAfx.h"
#include "ELM323.h"

ELM323::ELM323(void)
{
	///this->OBDCOM2 =  gcnew System::IO::Ports::SerialPort();
	mode1=gcnew array<String^>(100);
	mode2=gcnew array<String^>(100);
	mode3=gcnew array<String^>(100);
	mode4=gcnew array<String^>(100);
	mode5=gcnew array<String^>(100);
	mode6=gcnew array<String^>(100);
	mode7=gcnew array<String^>(100);
	mode8=gcnew array<String^>(100);
	mode9=gcnew array<String^>(100);
	mode10=gcnew array<String^>(100);
	pid=gcnew array<bool^>(100);

}

int ELM323::Openport(void)
{
	return 1;
}

bool ELM323::setSpeed(int Speed)
{
	return false;
}

int	 ELM323::getSpeed(void)
{
	return 0;
}

ELM323::~ELM323()
 {

}

void ELM323::ReadDataELM( String^ readdate )
{
	
	String^ delim=" ";
	String^ z=readdate->Trim(delim->ToCharArray());
	int i=-1;
	if (!connectOBD)
	{
		readdate=readdate->ToLower();
		i=readdate->IndexOf("elm");
		if (i>=0)
		{
			connectOBD=true;
			readyOBD=true;
			return;
		}
	}

	i=readdate->IndexOf("?");
	if (i>=0)
	{
		badcomand=true;
		return;
	}

	i=readdate->IndexOf(">"); //3E
	if (i>=0)
	{
		readyOBD=true;
		badcomand=false;
	}


	int sp=0;
	if (i<0) i=0;
	String ^ first = readdate->Substring(i,1);

	if (first!="4")
	{
		badcomand=true;
		return ;
	}

	if (readdate->Length>3)
	{
		if (readdate->Substring(i+2,1)==" ") 
			sp++;
	}

	String ^ mode	= readdate->Substring(i+1,1)->Trim();
	String ^ pid	= readdate->Substring(i+2+sp,2)->Trim();
	String ^ valuepid;
	String ^ tempstr;
	String ^ val;

	valuepid=readdate->Substring(i+4+sp,readdate->Length-(4+i+sp))->Trim();
	IEnumerator^ OperandEnum = valuepid->GetEnumerator();
	while ( OperandEnum->MoveNext() )
	{
		tempstr=OperandEnum->Current->ToString();
		if (tempstr==" ")
			continue;
		val+=tempstr;
	}

	//String ^ b1 = readdate->Substring(i+4+sp,readdate->Length-(4+i+sp))->Trim();

	int b1,b2,b3;
	
	try
	{
		b1 = Convert::ToInt32(mode,16);
		b2 = Convert::ToInt32(pid,16);
		b3 = Convert::ToInt32(val,16);
		
	}
	catch(Exception^ e)
	{

	}
	ParserELM(b1,b2,b3);
	
}

void ELM323::ParserELM(int mode,int pid, int valuepid)
{
	ELM323 device;
	int temp;
	String^ tempstr;
	switch(mode)
	{
		case 1: 
			{
				switch(pid)
				{
				case 0:
					{
						int n = 0; // номер проверяемого бита
						int a=valuepid;
						bool zz;
						while (n < 32)
						{							
							zz=a&1;
							if (a & 1)
							{
								device.pid[n]=true;
							}
							else
							{
								device.pid[n]=false;
							}
							a >>= 1;
							++n;
						}
					}	
					break;
				case 4://нагрузка двигателя
					{
						temp=valuepid*100/255;
						mode1[pid]=Convert::ToString(temp);
					}
					break;
				case 5://температура
					{
						temp=valuepid-40;
						mode1[pid]=Convert::ToString(temp);
					}
					break;
				case 10: //давление топлива
					{
						temp=valuepid*3;
						mode1[pid]=Convert::ToString(temp);
					}
					break;
				case 12: //обороты двигателя
					{
						temp=valuepid/4;
						mode1[pid]=Convert::ToString(temp);
					}
					break;
					
				}
			}
			break;
	}
}



