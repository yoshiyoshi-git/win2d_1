#pragma once

#include "MainPage.g.h"
#include <Microsoft.Graphics.Canvas.UI.Xaml.h>

namespace winrt::win2d_1::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();
        void CanvasControl_Draw(winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl const& sender, winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasDrawEventArgs const& args);
    };
}

namespace winrt::win2d_1::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
