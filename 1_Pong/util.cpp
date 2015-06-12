#include "util.h"

wxPoint getMousePositionInsideArea(const wxPoint& position, const wxSize& size)
{
    wxPoint mousePosition = wxGetMousePosition();

    mousePosition.x = normalizeFromZero(mousePosition.x, position.x, size.GetHeight());
    mousePosition.y = normalizeFromZero(mousePosition.y, position.y, size.GetWidth());
    
    return mousePosition;
}

int normalizeFromZero(int value, int zeroValue, int maxValue)
{
    value -= zeroValue;
    
    if (value < 0)
        return 0;
        
    if (value > maxValue)
        return maxValue;
        
    return value;
}