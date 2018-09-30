#include "Entry.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	try {
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		TCS::Entry form;
		Application::Run(%form);
	}

	catch (Exception ^ ex) {
		MessageBox::Show(ex->Message);
	}
	
}
