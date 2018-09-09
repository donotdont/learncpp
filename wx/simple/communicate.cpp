#include "communicate.h"
#include "iostream"

using namespace std;

Communicate::Communicate(const wxString& title)
       : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(640, 480))
{
  panel = new wxPanel(this, wxID_ANY);

  SetIcon(wxIcon(wxT("ironman.ico")));

  wxBoxSizer *hbox = new wxBoxSizer(wxHORIZONTAL);

  m_tp = new TopPanel(panel);
  m_lp = new LeftPanel(panel);
  m_rp = new RightPanel(panel);

  hbox->Add(m_tp, 1,wxEXPAND | wxALL, 5);
  hbox->Add(m_lp, 1,wxEXPAND | wxALL, 5);
  hbox->Add(m_rp, 1,wxEXPAND | wxALL, 5);

  panel->SetSizer(hbox);

  this->Centre();
}
