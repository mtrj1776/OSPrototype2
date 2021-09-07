#include "cMain.h"

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "OS Prototype 2")
{
	mainPanel = new panelLayout(this, wxID_ANY);
	mainPanel->Show();
}

cMain::~cMain()
{
}
