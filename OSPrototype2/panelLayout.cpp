#include "panelLayout.h"
#include <string.h>

///////////////////////////////////////////////////////////////////////////

panelLayout::panelLayout(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style) : wxPanel(parent, id, pos, size, style)
{
	wxBoxSizer* bSizerFrameMain;
	bSizerFrameMain = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer(wxHORIZONTAL);

	m_panelLayout = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerLayout;
	bSizerLayout = new wxBoxSizer(wxVERTICAL);

	m_panel10 = new wxPanel(m_panelLayout, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerLayoutHeader;
	bSizerLayoutHeader = new wxBoxSizer(wxVERTICAL);

	m_buttonLayoutHeader = new wxButton(m_panel10, wxID_ANY, wxT("Layout"), wxDefaultPosition, wxDefaultSize, wxNO_BORDER);
	bSizerLayoutHeader->Add(m_buttonLayoutHeader, 1, wxEXPAND, 0);

	m_panel10->SetSizer(bSizerLayoutHeader);
	m_panel10->Layout();
	bSizerLayoutHeader->Fit(m_panel10);
	bSizerLayout->Add(m_panel10, 1, wxEXPAND | wxALL, 5);

	m_panel11 = new wxPanel(m_panelLayout, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer242;
	bSizer242 = new wxBoxSizer(wxVERTICAL);

	wxFlexGridSizer* fgSizerLayoutBody;
	fgSizerLayoutBody = new wxFlexGridSizer(0, 2, 0, 0);
	fgSizerLayoutBody->SetFlexibleDirection(wxBOTH);
	fgSizerLayoutBody->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

	m_staticText4 = new wxStaticText(m_panel11, wxID_ANY, wxT("Columns"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText4->Wrap(-1);
	fgSizerLayoutBody->Add(m_staticText4, 1, wxALL, 5);

	m_spinCtrl1 = new wxSpinCtrl(m_panel11, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 3, 10, 6);
	fgSizerLayoutBody->Add(m_spinCtrl1, 1, wxALL, 5);

	m_staticText6 = new wxStaticText(m_panel11, wxID_ANY, wxT("Rows"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText6->Wrap(-1);
	fgSizerLayoutBody->Add(m_staticText6, 0, wxALL, 5);

	m_spinCtrl2 = new wxSpinCtrl(m_panel11, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 6, 10, 6);
	fgSizerLayoutBody->Add(m_spinCtrl2, 0, wxALL, 5);

	m_staticText7 = new wxStaticText(m_panel11, wxID_ANY, wxT("Labels"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText7->Wrap(-1);
	fgSizerLayoutBody->Add(m_staticText7, 0, wxALL, 5);

	m_slider1 = new wxSlider(m_panel11, wxID_ANY, 0, 0, 1, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	fgSizerLayoutBody->Add(m_slider1, 0, wxALL, 5);

	m_staticText8 = new wxStaticText(m_panel11, wxID_ANY, wxT("Image / Activation"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText8->Wrap(-1);
	fgSizerLayoutBody->Add(m_staticText8, 0, wxALL, 5);

	m_slider2 = new wxSlider(m_panel11, wxID_ANY, 0, 0, 1, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	fgSizerLayoutBody->Add(m_slider2, 0, wxALL, 5);

	m_staticText9 = new wxStaticText(m_panel11, wxID_ANY, wxT("Zoom"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText9->Wrap(-1);
	fgSizerLayoutBody->Add(m_staticText9, 0, wxALL, 5);

	m_slider5 = new wxSlider(m_panel11, wxID_ANY, 50, 0, 400, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	fgSizerLayoutBody->Add(m_slider5, 0, wxALL | wxEXPAND, 0);


	bSizer242->Add(fgSizerLayoutBody, 9, wxEXPAND, 0);


	m_panel11->SetSizer(bSizer242);
	m_panel11->Layout();
	bSizer242->Fit(m_panel11);
	bSizerLayout->Add(m_panel11, 13, wxEXPAND | wxALL, 5);


	m_panelLayout->SetSizer(bSizerLayout);
	m_panelLayout->Layout();
	bSizerLayout->Fit(m_panelLayout);
	bSizer28->Add(m_panelLayout, 1, wxEXPAND | wxALL, 0);

	m_panelLayers = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);

	//get initial folders
	getFolders("", fileList);
	getFolders(fileList[0].GetData(), fileListFolder1);
	getFolders(fileList[1].GetData(), fileListFolder2);
	getFolders(fileList[2].GetData(), fileListFolder3);
	getFolders(fileList[3].GetData(), fileListFolder4);
	getFolders(fileList[4].GetData(), fileListFolder5);
	getFolders(fileList[5].GetData(), fileListFolder6);
	getFolders(fileList[6].GetData(), fileListFolder7);
	getFolders(fileList[7].GetData(), fileListFolder8);

	m_panelNotebookPages = new wxPanel * [fileList.size()];
	m_notebookPage1buttons = new wxButton * [fileListFolder1.size()];
	m_notebookPage2buttons = new wxButton * [fileListFolder2.size()];
	m_notebookPage3buttons = new wxButton * [fileListFolder3.size()];
	m_notebookPage4buttons = new wxButton * [fileListFolder4.size()];
	m_notebookPage5buttons = new wxButton * [fileListFolder5.size()];
	m_notebookPage6buttons = new wxButton * [fileListFolder6.size()];
	m_notebookPage7buttons = new wxButton * [fileListFolder7.size()];
	m_notebookPage8buttons = new wxButton * [fileListFolder8.size()];

	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer(wxVERTICAL);

	m_panel12 = new wxPanel(m_panelLayers, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerLayoutHeader1;
	bSizerLayoutHeader1 = new wxBoxSizer(wxVERTICAL);

	m_buttonLayersHeader = new wxButton(m_panel12, wxID_ANY, wxT("Layers"), wxDefaultPosition, wxDefaultSize, wxNO_BORDER);
	bSizerLayoutHeader1->Add(m_buttonLayersHeader, 1, wxALL | wxEXPAND, 0);


	m_panel12->SetSizer(bSizerLayoutHeader1);
	m_panel12->Layout();
	bSizerLayoutHeader1->Fit(m_panel12);
	bSizer24->Add(m_panel12, 1, wxEXPAND | wxALL, 5);

	m_panel13 = new wxPanel(m_panelLayers, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerLayersBody;
	bSizerLayersBody = new wxBoxSizer(wxHORIZONTAL);

	m_notebookLayers = new wxNotebook(m_panel13, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0);

	//Tab 1
	m_panelNotebookPages[0] = new wxPanel(m_notebookLayers, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer(wxVERTICAL);

	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer(0, 12, 0, 0);

	for (m_numberOfPage1Buttons = 0; m_numberOfPage1Buttons < fileListFolder1.size(); m_numberOfPage1Buttons++)
	{
		m_notebookPage1buttons[m_numberOfPage1Buttons] = new wxButton(m_panelNotebookPages[0], 10001, fileListFolder1[m_numberOfPage1Buttons].data(), wxDefaultPosition, wxDefaultSize, 0);
		gSizer1->Add(m_notebookPage1buttons[m_numberOfPage1Buttons], 0, wxALL, 5);
		m_notebookPage1buttons[m_numberOfPage1Buttons]->Bind(wxEVT_BUTTON, &panelLayout::tabButtonPress, this);
	}

	bSizer33->Add(gSizer1, 1, wxEXPAND, 5);


	m_panelNotebookPages[0]->SetSizer(bSizer33);
	m_panelNotebookPages[0]->Layout();
	bSizer33->Fit(m_panelNotebookPages[0]);
	m_notebookLayers->AddPage(m_panelNotebookPages[0], fileList[0].GetData(), false);

	//Tab 2
	m_panelNotebookPages[1] = new wxPanel(m_notebookLayers, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer331;
	bSizer331 = new wxBoxSizer(wxVERTICAL);

	wxGridSizer* gSizer11;
	gSizer11 = new wxGridSizer(0, 12, 0, 0);

	for (m_numberOfPage2Buttons = 0; m_numberOfPage2Buttons < fileListFolder2.size(); m_numberOfPage2Buttons++)
	{
		m_notebookPage2buttons[m_numberOfPage2Buttons] = new wxButton(m_panelNotebookPages[1], 10001, fileListFolder2[m_numberOfPage2Buttons].data(), wxDefaultPosition, wxDefaultSize, 0);
		gSizer11->Add(m_notebookPage2buttons[m_numberOfPage2Buttons], 0, wxALL, 5);
		m_notebookPage2buttons[m_numberOfPage2Buttons]->Bind(wxEVT_BUTTON, &panelLayout::tabButtonPress, this);
	}

	bSizer331->Add(gSizer11, 1, wxEXPAND, 5);

	m_panelNotebookPages[1]->SetSizer(bSizer331);
	m_panelNotebookPages[1]->Layout();
	bSizer331->Fit(m_panelNotebookPages[1]);
	m_notebookLayers->AddPage(m_panelNotebookPages[1], fileList[1].GetData(), true);

	//Tab 3
	m_panelNotebookPages[2] = new wxPanel(m_notebookLayers, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerT3;
	bSizerT3 = new wxBoxSizer(wxVERTICAL);

	wxGridSizer* gSizerT3;
	gSizerT3 = new wxGridSizer(0, 12, 0, 0);

	for (m_numberOfPage3Buttons = 0; m_numberOfPage3Buttons < fileListFolder3.size(); m_numberOfPage3Buttons++)
	{
		m_notebookPage3buttons[m_numberOfPage3Buttons] = new wxButton(m_panelNotebookPages[2], 10001, fileListFolder3[m_numberOfPage3Buttons].data(), wxDefaultPosition, wxDefaultSize, 0);
		gSizerT3->Add(m_notebookPage3buttons[m_numberOfPage3Buttons], 0, wxALL, 5);
		m_notebookPage3buttons[m_numberOfPage3Buttons]->Bind(wxEVT_BUTTON, &panelLayout::tabButtonPress, this);
	}

	bSizerT3->Add(gSizerT3, 1, wxEXPAND, 5);

	m_panelNotebookPages[2]->SetSizer(bSizerT3);
	m_panelNotebookPages[2]->Layout();
	bSizerT3->Fit(m_panelNotebookPages[2]);

	m_notebookLayers->AddPage(m_panelNotebookPages[2], fileList[2].GetData(), false);

	//Tab 4
	m_panelNotebookPages[3] = new wxPanel(m_notebookLayers, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerT4;
	bSizerT4 = new wxBoxSizer(wxVERTICAL);

	wxGridSizer* gSizerT4;
	gSizerT4 = new wxGridSizer(0, 12, 0, 0);

	for (m_numberOfPage4Buttons = 0; m_numberOfPage4Buttons < fileListFolder4.size(); m_numberOfPage4Buttons++)
	{
		m_notebookPage4buttons[m_numberOfPage4Buttons] = new wxButton(m_panelNotebookPages[3], 10001, fileListFolder4[m_numberOfPage4Buttons].data(), wxDefaultPosition, wxDefaultSize, 0);
		gSizerT4->Add(m_notebookPage4buttons[m_numberOfPage4Buttons], 0, wxALL, 5);
		m_notebookPage4buttons[m_numberOfPage4Buttons]->Bind(wxEVT_BUTTON, &panelLayout::tabButtonPress, this);
	}

	bSizerT4->Add(gSizerT4, 1, wxEXPAND, 5);

	m_panelNotebookPages[3]->SetSizer(bSizerT4);
	m_panelNotebookPages[3]->Layout();
	bSizerT4->Fit(m_panelNotebookPages[3]);

	m_notebookLayers->AddPage(m_panelNotebookPages[3], fileList[3].GetData(), false);

	//Tab 5
	m_panelNotebookPages[4] = new wxPanel(m_notebookLayers, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerT5;
	bSizerT5 = new wxBoxSizer(wxVERTICAL);

	wxGridSizer* gSizerT5;
	gSizerT5 = new wxGridSizer(0, 12, 0, 0);

	for (m_numberOfPage5Buttons = 0; m_numberOfPage5Buttons < fileListFolder5.size(); m_numberOfPage5Buttons++)
	{
		m_notebookPage5buttons[m_numberOfPage5Buttons] = new wxButton(m_panelNotebookPages[4], 10001, fileListFolder5[m_numberOfPage5Buttons].data(), wxDefaultPosition, wxDefaultSize, 0);
		gSizerT5->Add(m_notebookPage5buttons[m_numberOfPage5Buttons], 0, wxALL, 5);
		m_notebookPage5buttons[m_numberOfPage5Buttons]->Bind(wxEVT_BUTTON, &panelLayout::tabButtonPress, this);
	}

	bSizerT5->Add(gSizerT5, 1, wxEXPAND, 5);

	m_panelNotebookPages[4]->SetSizer(bSizerT5);
	m_panelNotebookPages[4]->Layout();
	bSizerT5->Fit(m_panelNotebookPages[4]);

	m_notebookLayers->AddPage(m_panelNotebookPages[4], fileList[4].GetData(), false);

	//Tab 6
	m_panelNotebookPages[5] = new wxPanel(m_notebookLayers, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerT6;
	bSizerT6 = new wxBoxSizer(wxVERTICAL);

	wxGridSizer* gSizerT6;
	gSizerT6 = new wxGridSizer(0, 12, 0, 0);

	for (m_numberOfPage6Buttons = 0; m_numberOfPage6Buttons < fileListFolder6.size(); m_numberOfPage6Buttons++)
	{
		m_notebookPage6buttons[m_numberOfPage6Buttons] = new wxButton(m_panelNotebookPages[5], 10001, fileListFolder6[m_numberOfPage6Buttons].data(), wxDefaultPosition, wxDefaultSize, 0);
		gSizerT6->Add(m_notebookPage6buttons[m_numberOfPage6Buttons], 0, wxALL, 5);
		m_notebookPage6buttons[m_numberOfPage6Buttons]->Bind(wxEVT_BUTTON, &panelLayout::tabButtonPress, this);
	}

	bSizerT6->Add(gSizerT6, 1, wxEXPAND, 5);

	m_panelNotebookPages[5]->SetSizer(bSizerT6);
	m_panelNotebookPages[5]->Layout();
	bSizerT6->Fit(m_panelNotebookPages[5]);

	m_notebookLayers->AddPage(m_panelNotebookPages[5], fileList[5].GetData(), false);

	//Tab 7
	m_panelNotebookPages[6] = new wxPanel(m_notebookLayers, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerT7;
	bSizerT7 = new wxBoxSizer(wxVERTICAL);

	wxGridSizer* gSizerT7;
	gSizerT7 = new wxGridSizer(0, 12, 0, 0);

	for (m_numberOfPage7Buttons = 0; m_numberOfPage7Buttons < fileListFolder7.size(); m_numberOfPage7Buttons++)
	{
		m_notebookPage7buttons[m_numberOfPage7Buttons] = new wxButton(m_panelNotebookPages[6], 10001, fileListFolder7[m_numberOfPage7Buttons].data(), wxDefaultPosition, wxDefaultSize, 0);
		gSizerT7->Add(m_notebookPage7buttons[m_numberOfPage7Buttons], 0, wxALL, 5);
		m_notebookPage7buttons[m_numberOfPage7Buttons]->Bind(wxEVT_BUTTON, &panelLayout::tabButtonPress, this);
	}

	bSizerT7->Add(gSizerT7, 1, wxEXPAND, 5);

	m_panelNotebookPages[6]->SetSizer(bSizerT7);
	m_panelNotebookPages[6]->Layout();
	bSizerT7->Fit(m_panelNotebookPages[6]);

	m_notebookLayers->AddPage(m_panelNotebookPages[6], fileList[6].GetData(), false);

	//Tab 8
	m_panelNotebookPages[7] = new wxPanel(m_notebookLayers, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerT8;
	bSizerT8 = new wxBoxSizer(wxVERTICAL);

	wxGridSizer* gSizerT8;
	gSizerT8 = new wxGridSizer(0, 12, 0, 0);

	for (m_numberOfPage8Buttons = 0; m_numberOfPage8Buttons < fileListFolder8.size(); m_numberOfPage8Buttons++)
	{
		m_notebookPage8buttons[m_numberOfPage8Buttons] = new wxButton(m_panelNotebookPages[7], 10001, fileListFolder8[m_numberOfPage8Buttons].data(), wxDefaultPosition, wxDefaultSize, 0);
		gSizerT8->Add(m_notebookPage8buttons[m_numberOfPage8Buttons], 0, wxALL, 5);
		m_notebookPage8buttons[m_numberOfPage8Buttons]->Bind(wxEVT_BUTTON, &panelLayout::tabButtonPress, this);
	}

	bSizerT8->Add(gSizerT8, 1, wxEXPAND, 5);

	m_panelNotebookPages[7]->SetSizer(bSizerT8);
	m_panelNotebookPages[7]->Layout();
	bSizerT8->Fit(m_panelNotebookPages[7]);

	m_notebookLayers->AddPage(m_panelNotebookPages[7], fileList[7].GetData(), false);

	bSizerLayersBody->Add(m_notebookLayers, 1, wxEXPAND | wxALL, 0);


	m_panel13->SetSizer(bSizerLayersBody);
	m_panel13->Layout();
	bSizerLayersBody->Fit(m_panel13);
	bSizer24->Add(m_panel13, 13, wxEXPAND | wxALL, 5);

	m_panelLayers->SetSizer(bSizer24);
	m_panelLayers->Layout();
	bSizer24->Fit(m_panelLayers);
	bSizer28->Add(m_panelLayers, 17, wxEXPAND | wxALL, 0);


	bSizerFrameMain->Add(bSizer28, 1, wxALL | wxEXPAND, 5);

	wxBoxSizer* bSizerOuterHorizontal;
	bSizerOuterHorizontal = new wxBoxSizer(wxHORIZONTAL);

	m_panelData = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerData;
	bSizerData = new wxBoxSizer(wxVERTICAL);

	m_panel14 = new wxPanel(m_panelData, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerDataHeader;
	bSizerDataHeader = new wxBoxSizer(wxVERTICAL);

	m_buttonDataHeader = new wxButton(m_panel14, wxID_ANY, wxT("Data"), wxDefaultPosition, wxDefaultSize, wxNO_BORDER);
	bSizerDataHeader->Add(m_buttonDataHeader, 1, wxEXPAND, 0);

	m_panel14->SetSizer(bSizerDataHeader);
	m_panel14->Layout();
	bSizerDataHeader->Fit(m_panel14);
	bSizerData->Add(m_panel14, 1, wxEXPAND | wxALL, 5);

	m_panel15 = new wxPanel(m_panelData, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer(wxVERTICAL);

	m_dirCtrl = new wxGenericDirCtrl(m_panel15, wxID_ANY, filePath, wxDefaultPosition, wxDefaultSize, wxDIRCTRL_3D_INTERNAL, "*.png", 0, "File");

	bSizer22->Add(m_dirCtrl, 1, wxALL | wxEXPAND, 10);

	m_panel15->SetSizer(bSizer22);
	m_panel15->Layout();
	bSizer22->Fit(m_panel15);
	bSizerData->Add(m_panel15, 13, wxEXPAND | wxALL, 5);


	m_panelData->SetSizer(bSizerData);
	m_panelData->Layout();
	bSizerData->Fit(m_panelData);
	bSizerOuterHorizontal->Add(m_panelData, 3, wxEXPAND | wxALL, 0);

	m_panelNodeImage = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer241;
	bSizer241 = new wxBoxSizer(wxVERTICAL);

	m_panel16 = new wxPanel(m_panelNodeImage, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerLayoutHeader11;
	bSizerLayoutHeader11 = new wxBoxSizer(wxVERTICAL);

	m_buttonLayersHeader1 = new wxButton(m_panel16, wxID_ANY, wxT("Node Image Activations"), wxDefaultPosition, wxDefaultSize, wxNO_BORDER);
	bSizerLayoutHeader11->Add(m_buttonLayersHeader1, 1, wxALL | wxEXPAND, 0);

	m_panel16->SetSizer(bSizerLayoutHeader11);
	m_panel16->Layout();
	bSizerLayoutHeader11->Fit(m_panel16);
	bSizer241->Add(m_panel16, 1, wxEXPAND | wxALL, 5);

	m_panel17 = new wxPanel(m_panelNodeImage, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);

	bSizerLayersBody1 = new wxBoxSizer(wxHORIZONTAL);

	fgSizerNodeImages = new wxFlexGridSizer(3, 6, 0, 0);
	fgSizerNodeImages->SetFlexibleDirection(wxBOTH);
	fgSizerNodeImages->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

	bSizerLayersBody1->Add(fgSizerNodeImages, 0, wxALL | wxEXPAND, 0);


	m_panel17->SetSizer(bSizerLayersBody1);
	m_panel17->Layout();
	bSizerLayersBody1->Fit(m_panel17);
	bSizer241->Add(m_panel17, 13, wxEXPAND | wxALL, 5);


	m_panelNodeImage->SetSizer(bSizer241);
	m_panelNodeImage->Layout();
	bSizer241->Fit(m_panelNodeImage);
	bSizerOuterHorizontal->Add(m_panelNodeImage, 21, wxEXPAND | wxALL, 0);


	bSizerFrameMain->Add(bSizerOuterHorizontal, 100, wxALL | wxEXPAND, 5);

	this->SetSizer(bSizerFrameMain);

	this->Layout();

	// Connect Events
	/*m_buttonLayoutHeader->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(panelLayout::m_hideLayoutHeader), NULL, this);
	m_buttonLayersHeader->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(panelLayout::m_hideLayersHeader), NULL, this);

	m_buttonDataHeader->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(panelLayout::m_hideDataHeader), NULL, this);
	m_buttonLayersHeader1->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(panelLayout::m_hideLayersHeader1), NULL, this);*/

	m_spinCtrl1->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(panelLayout::m_onChange), NULL, this);
	m_spinCtrl2->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(panelLayout::m_onChange), NULL, this);
	m_slider5->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(panelLayout::m_zoom), NULL, this);
}

panelLayout::~panelLayout()
{
	// Disconnect Events
	/*m_buttonLayoutHeader->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(panelLayout::m_hideLayoutHeader), NULL, this);
	m_buttonLayersHeader->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(panelLayout::m_hideLayersHeader), NULL, this);

	m_buttonDataHeader->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(panelLayout::m_hideDataHeader), NULL, this);
	m_buttonLayersHeader1->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(panelLayout::m_hideLayersHeader1), NULL, this);*/

	m_spinCtrl1->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(panelLayout::m_onChange), NULL, this);
	m_spinCtrl2->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(panelLayout::m_onChange), NULL, this);
	m_slider5->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(panelLayout::m_zoom), NULL, this);

	//delete memory allocated
	delete[] m_panelNotebookPages;
	delete[] m_notebookPage1buttons;
}

void panelLayout::getFolders(wxString appendPath, wxArrayString& fileListFolder)
{

	//make sure fileList is empty before adding new folders
	fileListFolder.Clear();
	wxString filePathTemp = filePath;

	if (!appendPath.empty())
	{
		//add slash to end of filePath and then add path
		appendPath.Prepend("\\");

		filePathTemp.append(appendPath);
	}

	wxDir dir(filePathTemp);
	if (!dir.IsOpened()) {
		return;
		//handle error
	}
	wxString subdir;
	for (bool cont = dir.GetFirst(&subdir, wxString(), wxDIR_DIRS);
		cont;
		cont = dir.GetNext(&subdir)) {
		fileListFolder.Add(subdir);
	}

	dir.Close();
}

void panelLayout::tabButtonPress(wxCommandEvent& event)
{

	wxButton* btn = (wxButton*)event.GetEventObject();
	wxString buttonName = btn->GetLabelText();
	int selectedTab = m_notebookLayers->GetSelection();

	wxString tabName = fileList[selectedTab].GetData();
	Refresh();
	if (event.GetId())
		//skip the event.
		event.Skip();

	//Load the images
	buttonPath = filePath + tabName + "\\" + buttonName + "\\";
	loadImages();
}

void panelLayout::loadImages()
{
	wxString image[9] = { "maxim_000", "maxim_001", "maxim_002", "maxim_003", "maxim_004", "maxim_005", "maxim_006", "maxim_007", "maxim_008" };
	fgSizerNodeImages->Clear();

	for (int i = 0; i < 9; i++)
	{
		wxString newPath = buttonPath + image[i] + ".png";
		wxImage start_image;
		start_image.LoadFile(newPath, wxBITMAP_TYPE_PNG, 1);
		start_image.Rescale(m_slider5->GetValue(), m_slider5->GetValue(), wxIMAGE_QUALITY_HIGH);

		if (m_bitmap[i])
		{
			m_bitmap[i]->Hide();

			m_bitmap[i] = new wxStaticBitmap(m_panel17, wxID_ANY, wxBitmap(start_image), wxDefaultPosition, wxDefaultSize, 0);
			m_bitmap[i]->Show();
		}
		else
		{
			m_bitmap[i] = new wxStaticBitmap(m_panel17, wxID_ANY, wxBitmap(start_image), wxDefaultPosition, wxDefaultSize, 0);
			m_bitmap[i]->SetSize(wxSize(128, 128));
		}
		fgSizerNodeImages->Add(m_bitmap[i], 1, wxALL, 5);
	}

	m_panel17->SetSizer(bSizerLayersBody1);
	m_panel17->Layout();
	bSizerLayersBody1->Fit(m_panel17);
}
