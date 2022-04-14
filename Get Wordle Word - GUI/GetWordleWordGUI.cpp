#include "GetWordleWordGUI.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String ^> ^ args) {
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  GetWordleWordGUI::GetWordleWordGUI GetWordleWordForm;
  Application::Run(% GetWordleWordForm);
}