#pragma once

#pragma push_macro("GetCurrentTime")
#undef GetCurrentTime

#include "MainWindow.g.h"

#pragma pop_macro("GetCurrentTime")

namespace winrt::NavigationExample::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        // navigation methods
        void NavView_ItemInvoked(Windows::Foundation::IInspectable const&, Microsoft::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs const& args);
        bool On_BackRequested();
    };
}

namespace winrt::NavigationExample::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
