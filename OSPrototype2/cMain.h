#pragma once
#include "wx/wx.h"
#include "panelLayout.h"

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

	panelLayout* mainPanel = nullptr;

};

