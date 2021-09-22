#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/button.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/slider.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/notebook.h>
#include <wx/treectrl.h>
#include <wx/statbmp.h>
#include <wx/spinctrl.h>
#include <wx/dirctrl.h>
#include <wx/dir.h>
///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class panelLayout
///////////////////////////////////////////////////////////////////////////////
class panelLayout : public wxPanel
{
private:

protected:
	wxPanel* m_panelLayout;
	wxPanel* m_panel10;
	wxButton* m_buttonLayoutHeader;
	wxSpinCtrl* m_spinCtrl1;
	wxSpinCtrl* m_spinCtrl2;
	wxPanel* m_panel11;
	wxStaticText* m_staticText4;
	wxStaticText* m_staticText6;
	wxTextCtrl* m_textCtrl2;
	wxStaticText* m_staticText7;
	wxSlider* m_slider1;
	wxStaticText* m_staticText8;
	wxSlider* m_slider2;
	wxStaticText* m_staticText9;
	wxSlider* m_slider5;
	wxPanel* m_panelLayers;
	wxPanel* m_panel12;
	wxButton* m_buttonLayersHeader;
	wxPanel* m_panel13;
	wxNotebook* m_notebookLayers;
	wxPanel** m_panelNotebookPages;
	wxButton** m_notebookPage1buttons;
	wxButton** m_notebookPage2buttons;
	wxButton** m_notebookPage3buttons;
	wxButton** m_notebookPage4buttons;
	wxButton** m_notebookPage5buttons;
	wxButton** m_notebookPage6buttons;
	wxButton** m_notebookPage7buttons;
	wxButton** m_notebookPage8buttons;
	int m_numberOfTabs;
	int m_numberOfPage1Buttons, m_numberOfPage2Buttons, m_numberOfPage3Buttons, m_numberOfPage4Buttons, m_numberOfPage5Buttons, m_numberOfPage6Buttons, m_numberOfPage7Buttons, m_numberOfPage8Buttons;
	wxPanel* m_panelData;
	wxPanel* m_panel14;
	wxButton* m_buttonDataHeader;
	wxPanel* m_panel15;
	wxGenericDirCtrl* m_dirCtrl;
	wxPanel* m_panelNodeImage;
	wxPanel* m_panel16;
	wxButton* m_buttonLayersHeader1;
	wxPanel* m_panel17;
	wxFlexGridSizer* fgSizerNodeImages;
	wxBoxSizer* bSizerLayersBody1;
	wxStaticBitmap* m_bitmap[8];
	wxArrayString fileList;
	wxArrayString fileListFolder1;
	wxArrayString fileListFolder2;
	wxArrayString fileListFolder3;
	wxArrayString fileListFolder4;
	wxArrayString fileListFolder5;
	wxArrayString fileListFolder6;
	wxArrayString fileListFolder7;
	wxArrayString fileListFolder8;
	wxString filePath = "C:\\root\\DeepLearningrepos\\toponet\\toponetvis_outputs\\shapes\\shapes40x40_c32c32c32c08_classifier_top09_maxactimages\\";
	wxString buttonPath = "";
	bool LayoutHeaderShow = true;
	bool LayersHeaderShow = true;
	bool DataHeaderShow = true;
	bool LayersHeader1 = true;

	// Virtual event handlers, overide them in your derived class

	virtual void m_hideLayoutHeader(wxMouseEvent& event)
	{
		if (LayoutHeaderShow) { LayoutHeaderShow = false; m_panel11->Hide(); }
		else { LayoutHeaderShow = true; m_panel11->Show(); }
		this->Layout(); event.Skip();
	}
	virtual void m_hideLayersHeader(wxMouseEvent& event)
	{
		if (LayersHeaderShow) { LayersHeaderShow = false; m_panel13->Hide(); }
		else { LayersHeaderShow = true; m_panel13->Show(); }
		this->Layout(); event.Skip();
	}

	virtual void m_hideDataHeader(wxMouseEvent& event)
	{
		if (DataHeaderShow) { DataHeaderShow = false; m_panel15->Hide(); }
		else { DataHeaderShow = true; m_panel15->Show(); }
		this->Layout(); event.Skip();
	}

	virtual void m_hideLayersHeader1(wxMouseEvent& event)
	{
		if (LayersHeader1) { LayersHeader1 = false; m_panel17->Hide(); }
		else { LayersHeader1 = true; m_panel17->Show(); }
		this->Layout(); event.Skip();
	}


	virtual void m_onChange(wxMouseEvent& event)
	{
		fgSizerNodeImages->SetCols(m_spinCtrl1->GetValue());
		fgSizerNodeImages->SetRows(m_spinCtrl2->GetValue());
		m_panelNodeImage->Show();
		this->Layout(); event.Skip();
	}

	virtual void m_zoom(wxMouseEvent& event)
	{
		if (buttonPath != "")
		{
			loadImages();
			this->Layout();
		}
		event.Skip();
	}

public:

	panelLayout(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(1920, 1080), long style = wxTAB_TRAVERSAL);
	~panelLayout();

	void getFolders(wxString, wxArrayString&);
	void tabButtonPress(wxCommandEvent& event);
	void loadImages();
};
