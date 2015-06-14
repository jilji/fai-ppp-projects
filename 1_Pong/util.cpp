#include "util.h"
#include <wx/log.h>
#include <cmath>

using namespace std;

wxPoint getMousePositionInsideArea(const wxPoint& position, const wxSize& size)
{
    wxPoint mousePosition = wxGetMousePosition();

    mousePosition.x = normalizeFromZero(mousePosition.x, position.x, size.GetWidth());
    mousePosition.y = normalizeFromZero(mousePosition.y, position.y, size.GetHeight());
    
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

int signum(int x) {
    if (x == 0)
        return 0;

    if (x > 0)
        return 1;

    return -1;
}