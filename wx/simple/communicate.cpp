#include "communicate.h"
//#include "panels.h"
#include "iostream"

using namespace std;

Communicate::Communicate(const wxString& title)
       : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(640, 480))
{
  menubar = new wxMenuBar;
  file = new wxMenu;
  //file->Append(wxID_EXIT, wxT("&Quit"));
  
  file->Append(wxID_ANY, wxT("&New"));
  file->Append(wxID_ANY, wxT("&Open"));
  file->Append(wxID_ANY, wxT("&Save"));
  file->AppendSeparator();

  imp = new wxMenu;
  imp->Append(wxID_ANY, wxT("Import newsfeed list..."));
  imp->Append(wxID_ANY, wxT("Import bookmarks..."));
  imp->Append(wxID_ANY, wxT("Import mail..."));

  file->AppendSubMenu(imp, wxT("I&mport"));

  quit = new wxMenuItem(file, wxID_EXIT, wxT("&Quit\tCtrl+W"));
  file->Append(quit);
  
  
  menubar->Append(file, wxT("&File"));  
  SetMenuBar(menubar);

  Connect(wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(Communicate::OnQuit));
  Centre();

  panel = new wxPanel(this, wxID_ANY);

  SetIcon(wxIcon(wxT("ironman.ico")));

  //wxBoxSizer *hbox = new wxBoxSizer(wxHORIZONTAL);
  wxBoxSizer *hbox = new wxBoxSizer(wxVERTICAL);

  m_tp = new TopPanel(panel);
  m_lp = new LeftPanel(panel);
  m_rp = new RightPanel(panel);

  hbox->Add(m_tp, 1,wxEXPAND | wxALL, 5);
  hbox->Add(m_lp, 1,wxEXPAND | wxALL, 5);
  hbox->Add(m_rp, 1,wxEXPAND | wxALL, 5);

  panel->SetSizer(hbox);

  this->Centre();
}

void Communicate::OnQuit(wxCommandEvent& WXUNUSED(event))
{
  Close(true);
}
