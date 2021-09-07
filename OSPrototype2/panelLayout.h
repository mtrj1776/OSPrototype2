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
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/slider.h>
#include <wx/panel.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/notebook.h>
#include <wx/treectrl.h>
#include <wx/statbmp.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class panelLayout
///////////////////////////////////////////////////////////////////////////////
class panelLayout : public wxPanel
{
private:

protected:
	wxPanel* m_panelLayout;
	wxButton* m_buttonLayoutHeader;
	wxStaticText* m_staticText4;
	wxTextCtrl* m_textCtrl1;
	wxStaticText* m_staticText6;
	wxTextCtrl* m_textCtrl2;
	wxStaticText* m_staticText7;
	wxSlider* m_slider1;
	wxStaticText* m_staticText8;
	wxSlider* m_slider2;
	wxStaticText* m_staticText9;
	wxSlider* m_slider5;
	wxPanel* m_panelLayers;
	wxButton* m_buttonLayersHeader;
	wxNotebook* m_notebookLayers;
	wxPanel* m_panelNotebookPage1;
	wxPanel* m_panelNotebookPage2;
	wxPanel* m_panelNotebookPage3;
	wxPanel* m_panelData;
	wxButton* m_buttonDataHeader;
	wxTreeCtrl* m_treeDataFileList;
	wxPanel* m_panelNodeImage;
	wxButton* m_buttonLayersHeader1;
	wxStaticBitmap* m_bitmap1;
	wxStaticBitmap* m_bitmap11;
	wxStaticBitmap* m_bitmap12;
	wxStaticBitmap* m_bitmap13;
	wxStaticBitmap* m_bitmap14;
	wxStaticBitmap* m_bitmap15;
	wxStaticBitmap* m_bitmap16;
	wxStaticBitmap* m_bitmap17;
	wxStaticBitmap* m_bitmap18;
	wxStaticBitmap* m_bitmap19;
	wxStaticBitmap* m_bitmap110;

public:

	panelLayout(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(1920, 1080), long style = wxTAB_TRAVERSAL);
	~panelLayout();

};