#include "pch.h"
#include "PageB.xaml.h"
#if __has_include("PageB.g.cpp")
#include "PageB.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::NavigationExample::implementation
{
    PageB::PageB()
    {
        InitializeComponent();
    }

    int32_t PageB::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void PageB::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void PageB::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}
