
#include "MainFrame.hpp"

using namespace workout_builder::views;

enum { ID_Hello };

MainFrame::MainFrame() : wxFrame(nullptr, wxID_ANY, "Hello World") {
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
      [this](wxCommandEvent&) { wxLogMessage("Hello world from wxWidgets"); },
      ID_Hello);
  Bind(
      wxEVT_MENU, [this](wxCommandEvent&) { Close(true); }, wxID_EXIT);
}
