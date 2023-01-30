#include "mainMenuForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]


void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	D1_19L1110_Train::mainMenuForm myForm;
	Application::Run(%myForm);

}