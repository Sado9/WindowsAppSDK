#include "pch.h"
#include "MainWindow.xaml.h"
#include "MainWindow.g.cpp"

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::$safeprojectname$::implementation
{
    void MainWindow::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myButton.Content(box_value(L"Clicked"));
    }
}
