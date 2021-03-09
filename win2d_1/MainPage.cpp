#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::win2d_1::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
    }
}

void winrt::win2d_1::implementation::MainPage::CanvasControl_Draw(winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasControl const& sender, winrt::Microsoft::Graphics::Canvas::UI::Xaml::CanvasDrawEventArgs const& args)
{
    args.DrawingSession().DrawText(L"Hello, world!", 250, 280, winrt::Windows::UI::Colors::Black());
    args.DrawingSession().DrawCircle(300, 300, 200, winrt::Windows::UI::Colors::BlueViolet(), 5);
    args.DrawingSession().FillRoundedRectangle(600, 50, 300, 200, 20, 20, winrt::Windows::UI::Colors::MediumSeaGreen());
    args.DrawingSession().DrawText(L"Hello, world!", 700, 125, winrt::Windows::UI::Colors::Aqua());
}
