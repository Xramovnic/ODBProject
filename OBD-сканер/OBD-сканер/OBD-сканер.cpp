// OBD-сканер.cpp : main project file.

#include "stdafx.h"
#include "MainForm.h"
#include "ELM323.h"

using namespace OBDсканер;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

//	ELM323 device = new ELM323();
	//device.setSpeed(1);
	// Create the main window and run it
	Application::Run(gcnew MainForm());
	return 0;
}
