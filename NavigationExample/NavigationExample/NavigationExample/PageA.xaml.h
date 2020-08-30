#pragma once

#include "PageA.g.h"

namespace winrt::NavigationExample::implementation
{
    struct PageA : PageAT<PageA>
    {
        PageA();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::NavigationExample::factory_implementation
{
    struct PageA : PageAT<PageA, implementation::PageA>
    {
    };
}
