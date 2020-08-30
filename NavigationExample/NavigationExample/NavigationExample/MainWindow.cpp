#include "pch.h"
#include "MainWindow.h"
#include "MainWindow.g.cpp"

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Navigation;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::NavigationExample::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainWindow::NavView_ItemInvoked(
        Windows::Foundation::IInspectable const& /* sender */,
        Microsoft::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs const& args)
    {
        if (args.IsSettingsInvoked())
        {
            // Navigate to Settings.
        }
        else if (args.InvokedItemContainer())
        {
            Windows::UI::Xaml::Interop::TypeName PageTypeName;
            PageTypeName.Name = unbox_value<hstring>(args.InvokedItemContainer().Tag());
            PageTypeName.Kind = Windows::UI::Xaml::Interop::TypeKind::Metadata;
            
            // TODO: use above TypeName object to navigate.
            if (PageTypeName.Name == L"A") {
                this->ContentFrame().Navigate(xaml_typename<PageA>());
            }
            else if (PageTypeName.Name == L"B") {
                this->ContentFrame().Navigate(xaml_typename<PageB>());
            }
        }
    }


    bool MainWindow::On_BackRequested()
    {
        if (!ContentFrame().CanGoBack())
            return false;

        // Don't go back if the nav pane is overlaid.
        if (NavView().IsPaneOpen() &&
            (NavView().DisplayMode() == winrt::Microsoft::UI::Xaml::Controls::NavigationViewDisplayMode::Compact ||
                NavView().DisplayMode() == winrt::Microsoft::UI::Xaml::Controls::NavigationViewDisplayMode::Minimal))
            return false;

        ContentFrame().GoBack();
        return true;
    }
}
