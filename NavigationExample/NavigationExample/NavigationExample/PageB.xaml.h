#pragma once

#include "PageB.g.h"

namespace winrt::NavigationExample::implementation
{
    struct PageB : PageBT<PageB>
    {
        PageB();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::NavigationExample::factory_implementation
{
    struct PageB : PageBT<PageB, implementation::PageB>
    {
    };
}
