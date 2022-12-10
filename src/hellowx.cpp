#include <wx/wxprec.h>

#include <memory>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

class MyFrame : public wxFrame {
 public:
  MyFrame();

 private:
  void OnHello(wxCommandEvent& event);
  void OnExit(wxCommandEvent& event);
  void OnAbout(wxCommandEvent& event);
};

class MyApp : public wxApp {
 public:
  virtual bool OnInit();

 private:
};

enum { ID_Hello };

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit() {
  MyFrame* frame_ = new MyFrame();
  frame_->Show(true);
  return true;
}

MyFrame::MyFrame() : wxFrame(nullptr, wxID_ANY, "Hello World") {
  wxMenu* menuFile_ = new wxMenu();
  menuFile_->Append(ID_Hello, "&Hello...\tCtrl-H",
                    "Help string shown in status bar for this menu item");
  menuFile_->AppendSeparator();
  menuFile_->Append(wxID_EXIT);

  wxMenuBar* menuBar_ = new wxMenuBar();
  menuBar_->Append(menuFile_, "&File");

  SetMenuBar(menuBar_);

  CreateStatusBar();
  SetStatusText("Welcome to wxWidgets!");
  Bind(
      wxEVT_MENU,
      [=](wxCommandEvent&) { wxLogMessage("Hellow world from wxWidgets"); },
      ID_Hello);
  Bind(
      wxEVT_MENU, [=](wxCommandEvent&) { Close(true); }, wxID_EXIT);
}
