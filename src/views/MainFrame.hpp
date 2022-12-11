#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

namespace workout_builder {
namespace views {
class MainFrame : public wxFrame {
 public:
  MainFrame();
  virtual ~MainFrame(){};
};
}  // namespace views
}  // namespace workout_builder

#endif /* MAINFRAME_H */
