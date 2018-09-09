#include "main.h"
//#include "simple.h"
//#include "icon.h"
//#include "button.h"
#include "communicate.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
    //Simple *simple = new Simple(wxT("Simple"));
    //simple->Show(true);
    
    //Icon *icon = new Icon(wxT("Icon"));
    //icon->Show(true);

    //Button *btnapp = new Button(wxT("Button"));
    //btnapp->Show(true);
    
    Communicate *communicate = new Communicate(wxT("Widgets communicate"));
    communicate->Show(true);
    
    return true;
}
