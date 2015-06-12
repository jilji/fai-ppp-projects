#ifndef __UTIL_H__
#define __UTIL_H__

#include <wx/wx.h>

wxPoint getMousePositionInsideArea(const wxPoint& position, const wxSize& size);
int normalizeFromZero(int value, int zeroValue, int maxValue);

#endif // __UTIL_H__