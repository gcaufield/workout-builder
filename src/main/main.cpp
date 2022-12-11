#include <wx/wxprec.h>

#include <memory>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "MainFrame.hpp"

namespace workout_builder {
using views::MainFrame;

class MyApp : public wxApp {
 public:
  virtual bool OnInit();
};

bool MyApp::OnInit() {
  MainFrame* frame_ = new MainFrame();
  frame_->Show(true);
  return true;
}

}  // namespace workout_builder

wxIMPLEMENT_APP(workout_builder::MyApp);
