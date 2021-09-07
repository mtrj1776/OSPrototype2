#include "panelLayout.h"

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

	wxBoxSizer* bSizerLayoutHeader;
	bSizerLayoutHeader = new wxBoxSizer(wxVERTICAL);

	m_buttonLayoutHeader = new wxButton(m_panelLayout, wxID_ANY, wxT("Layout"), wxDefaultPosition, wxDefaultSize, wxNO_BORDER);
	bSizerLayoutHeader->Add(m_buttonLayoutHeader, 1, wxEXPAND, 0);


	bSizerLayout->Add(bSizerLayoutHeader, 1, wxALL | wxEXPAND, 0);

	wxFlexGridSizer* fgSizerLayoutBody;
	fgSizerLayoutBody = new wxFlexGridSizer(0, 2, 0, 0);
	fgSizerLayoutBody->SetFlexibleDirection(wxBOTH);
	fgSizerLayoutBody->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

	m_staticText4 = new wxStaticText(m_panelLayout, wxID_ANY, wxT("Rows"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText4->Wrap(-1);
	fgSizerLayoutBody->Add(m_staticText4, 0, wxALL, 5);

	m_textCtrl1 = new wxTextCtrl(m_panelLayout, wxID_ANY, wxT("5"), wxDefaultPosition, wxDefaultSize, wxTE_CENTRE);
	fgSizerLayoutBody->Add(m_textCtrl1, 0, wxALL, 5);

	m_staticText6 = new wxStaticText(m_panelLayout, wxID_ANY, wxT("Columns"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText6->Wrap(-1);
	fgSizerLayoutBody->Add(m_staticText6, 0, wxALL, 5);

	m_textCtrl2 = new wxTextCtrl(m_panelLayout, wxID_ANY, wxT("9"), wxDefaultPosition, wxDefaultSize, wxTE_CENTRE);
	fgSizerLayoutBody->Add(m_textCtrl2, 0, wxALL, 5);

	m_staticText7 = new wxStaticText(m_panelLayout, wxID_ANY, wxT("Labels"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText7->Wrap(-1);
	fgSizerLayoutBody->Add(m_staticText7, 0, wxALL, 5);

	m_slider1 = new wxSlider(m_panelLayout, wxID_ANY, 0, 0, 1, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	fgSizerLayoutBody->Add(m_slider1, 0, wxALL, 5);

	m_staticText8 = new wxStaticText(m_panelLayout, wxID_ANY, wxT("Image / Activation"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText8->Wrap(-1);
	fgSizerLayoutBody->Add(m_staticText8, 0, wxALL, 5);

	m_slider2 = new wxSlider(m_panelLayout, wxID_ANY, 0, 0, 1, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	fgSizerLayoutBody->Add(m_slider2, 0, wxALL, 5);

	m_staticText9 = new wxStaticText(m_panelLayout, wxID_ANY, wxT("Zoom"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText9->Wrap(-1);
	fgSizerLayoutBody->Add(m_staticText9, 0, wxALL, 5);


	fgSizerLayoutBody->Add(0, 0, 1, wxEXPAND, 5);


	bSizerLayout->Add(fgSizerLayoutBody, 9, wxEXPAND, 0);

	wxBoxSizer* bSizerLayoutZoomBar;
	bSizerLayoutZoomBar = new wxBoxSizer(wxVERTICAL);

	m_slider5 = new wxSlider(m_panelLayout, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	bSizerLayoutZoomBar->Add(m_slider5, 0, wxALL | wxEXPAND, 0);


	bSizerLayout->Add(bSizerLayoutZoomBar, 1, wxEXPAND, 0);


	m_panelLayout->SetSizer(bSizerLayout);
	m_panelLayout->Layout();
	bSizerLayout->Fit(m_panelLayout);
	bSizer28->Add(m_panelLayout, 3, wxEXPAND | wxALL, 0);

	m_panelLayers = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizerLayoutHeader1;
	bSizerLayoutHeader1 = new wxBoxSizer(wxVERTICAL);

	m_buttonLayersHeader = new wxButton(m_panelLayers, wxID_ANY, wxT("Layers"), wxDefaultPosition, wxDefaultSize, wxNO_BORDER);
	bSizerLayoutHeader1->Add(m_buttonLayersHeader, 1, wxALL | wxEXPAND, 0);


	bSizer24->Add(bSizerLayoutHeader1, 1, wxEXPAND, 0);

	wxBoxSizer* bSizerLayersBody;
	bSizerLayersBody = new wxBoxSizer(wxHORIZONTAL);

	m_notebookLayers = new wxNotebook(m_panelLayers, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0);
	m_panelNotebookPage1 = new wxPanel(m_notebookLayers, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_notebookLayers->AddPage(m_panelNotebookPage1, wxT("Input"), false);
	m_panelNotebookPage2 = new wxPanel(m_notebookLayers, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_notebookLayers->AddPage(m_panelNotebookPage2, wxT("Conv_2d"), false);
	m_panelNotebookPage3 = new wxPanel(m_notebookLayers, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_notebookLayers->AddPage(m_panelNotebookPage3, wxT("Conv_2d"), false);

	bSizerLayersBody->Add(m_notebookLayers, 1, wxEXPAND | wxALL, 0);


	bSizer24->Add(bSizerLayersBody, 10, wxALL | wxEXPAND, 0);


	m_panelLayers->SetSizer(bSizer24);
	m_panelLayers->Layout();
	bSizer24->Fit(m_panelLayers);
	bSizer28->Add(m_panelLayers, 9, wxEXPAND | wxALL, 0);


	bSizerFrameMain->Add(bSizer28, 1, wxALL | wxEXPAND, 5);

	wxBoxSizer* bSizerOuterHorizontal;
	bSizerOuterHorizontal = new wxBoxSizer(wxHORIZONTAL);

	m_panelData = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerData;
	bSizerData = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizerDataHeader;
	bSizerDataHeader = new wxBoxSizer(wxVERTICAL);

	m_buttonDataHeader = new wxButton(m_panelData, wxID_ANY, wxT("Data"), wxDefaultPosition, wxDefaultSize, wxNO_BORDER);
	bSizerDataHeader->Add(m_buttonDataHeader, 1, wxEXPAND, 0);


	bSizerData->Add(bSizerDataHeader, 1, wxALL | wxEXPAND, 0);

	wxFlexGridSizer* fgSizerDatatBody;
	fgSizerDatatBody = new wxFlexGridSizer(0, 2, 0, 0);
	fgSizerDatatBody->SetFlexibleDirection(wxBOTH);
	fgSizerDatatBody->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

	m_treeDataFileList = new wxTreeCtrl(m_panelData, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_DEFAULT_STYLE);
	fgSizerDatatBody->Add(m_treeDataFileList, 1, wxALL | wxEXPAND, 5);


	bSizerData->Add(fgSizerDatatBody, 10, wxEXPAND, 0);


	m_panelData->SetSizer(bSizerData);
	m_panelData->Layout();
	bSizerData->Fit(m_panelData);
	bSizerOuterHorizontal->Add(m_panelData, 1, wxEXPAND | wxALL, 0);

	m_panelNodeImage = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer241;
	bSizer241 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizerLayoutHeader11;
	bSizerLayoutHeader11 = new wxBoxSizer(wxVERTICAL);

	m_buttonLayersHeader1 = new wxButton(m_panelNodeImage, wxID_ANY, wxT("Node Image Activations"), wxDefaultPosition, wxDefaultSize, wxNO_BORDER);
	bSizerLayoutHeader11->Add(m_buttonLayersHeader1, 1, wxALL | wxEXPAND, 0);


	bSizer241->Add(bSizerLayoutHeader11, 1, wxALL | wxEXPAND, 0);

	wxBoxSizer* bSizerLayersBody1;
	bSizerLayersBody1 = new wxBoxSizer(wxHORIZONTAL);

	wxFlexGridSizer* fgSizerNodeImages;
	fgSizerNodeImages = new wxFlexGridSizer(3, 6, 0, 0);
	fgSizerNodeImages->SetFlexibleDirection(wxBOTH);
	fgSizerNodeImages->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

	m_bitmap1 = new wxStaticBitmap(m_panelNodeImage, wxID_ANY, wxBitmap(wxT("C:\Users\Michael Johns/Downloads/placeholder-1320568685473343206.png"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxDefaultSize, 0);
	m_bitmap1->SetMaxSize(wxSize(128, 128));

	fgSizerNodeImages->Add(m_bitmap1, 1, wxALL, 10);

	m_bitmap11 = new wxStaticBitmap(m_panelNodeImage, wxID_ANY, wxBitmap(wxT("C:\Users\Michael Johns/Downloads/placeholder-1320568685473343206.png"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxDefaultSize, 0);
	m_bitmap11->SetMaxSize(wxSize(128, 128));

	fgSizerNodeImages->Add(m_bitmap11, 0, wxALL, 5);

	m_bitmap12 = new wxStaticBitmap(m_panelNodeImage, wxID_ANY, wxBitmap(wxT("../Downloads/placeholder-1320568685473343206.png"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxDefaultSize, 0);
	m_bitmap12->SetMaxSize(wxSize(128, 128));

	fgSizerNodeImages->Add(m_bitmap12, 0, wxALL, 5);

	m_bitmap13 = new wxStaticBitmap(m_panelNodeImage, wxID_ANY, wxBitmap(wxT("../Downloads/placeholder-1320568685473343206.png"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxDefaultSize, 0);
	m_bitmap13->SetMaxSize(wxSize(128, 128));

	fgSizerNodeImages->Add(m_bitmap13, 0, wxALL, 5);

	m_bitmap14 = new wxStaticBitmap(m_panelNodeImage, wxID_ANY, wxBitmap(wxT("../Downloads/placeholder-1320568685473343206.png"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxDefaultSize, 0);
	m_bitmap14->SetMaxSize(wxSize(128, 128));

	fgSizerNodeImages->Add(m_bitmap14, 0, wxALL, 5);

	m_bitmap15 = new wxStaticBitmap(m_panelNodeImage, wxID_ANY, wxBitmap(wxT("../Downloads/placeholder-1320568685473343206.png"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxDefaultSize, 0);
	m_bitmap15->SetMaxSize(wxSize(128, 128));

	fgSizerNodeImages->Add(m_bitmap15, 0, wxALL, 5);

	m_bitmap16 = new wxStaticBitmap(m_panelNodeImage, wxID_ANY, wxBitmap(wxT("../Downloads/placeholder-1320568685473343206.png"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxDefaultSize, 0);
	m_bitmap16->SetMaxSize(wxSize(128, 128));

	fgSizerNodeImages->Add(m_bitmap16, 0, wxALL, 5);

	m_bitmap17 = new wxStaticBitmap(m_panelNodeImage, wxID_ANY, wxBitmap(wxT("../Downloads/placeholder-1320568685473343206.png"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxDefaultSize, 0);
	m_bitmap17->SetMaxSize(wxSize(128, 128));

	fgSizerNodeImages->Add(m_bitmap17, 0, wxALL, 5);

	m_bitmap18 = new wxStaticBitmap(m_panelNodeImage, wxID_ANY, wxBitmap(wxT("../Downloads/placeholder-1320568685473343206.png"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxDefaultSize, 0);
	m_bitmap18->SetMaxSize(wxSize(128, 128));

	fgSizerNodeImages->Add(m_bitmap18, 0, wxALL, 5);

	m_bitmap19 = new wxStaticBitmap(m_panelNodeImage, wxID_ANY, wxBitmap(wxT("../Downloads/placeholder-1320568685473343206.png"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxDefaultSize, 0);
	m_bitmap19->SetMaxSize(wxSize(128, 128));

	fgSizerNodeImages->Add(m_bitmap19, 0, wxALL, 5);

	m_bitmap110 = new wxStaticBitmap(m_panelNodeImage, wxID_ANY, wxBitmap(wxT("../Downloads/placeholder-1320568685473343206.png"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxDefaultSize, 0);
	m_bitmap110->SetMaxSize(wxSize(128, 128));

	fgSizerNodeImages->Add(m_bitmap110, 0, wxALL, 5);


	bSizerLayersBody1->Add(fgSizerNodeImages, 0, wxALL | wxEXPAND, 0);


	bSizer241->Add(bSizerLayersBody1, 10, wxALL | wxEXPAND, 0);


	m_panelNodeImage->SetSizer(bSizer241);
	m_panelNodeImage->Layout();
	bSizer241->Fit(m_panelNodeImage);
	bSizerOuterHorizontal->Add(m_panelNodeImage, 3, wxEXPAND | wxALL, 0);


	bSizerFrameMain->Add(bSizerOuterHorizontal, 100, wxALL | wxEXPAND, 5);


	this->SetSizer(bSizerFrameMain);
	this->Layout();
}

panelLayout::~panelLayout()
{
}
