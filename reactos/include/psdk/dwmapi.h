/*
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __WINE_DWMAPI_H
#define __WINE_DWMAPI_H

#include "wtypes.h"
#include "uxtheme.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef DWMAPI
# define DWMAPI        STDAPI
# define DWMAPI_(type) STDAPI_(type)
#endif

DECLARE_HANDLE(HTHUMBNAIL);

typedef struct _MilMatrix3x2D
{
    DOUBLE S_11;
    DOUBLE S_12;
    DOUBLE S_21;
    DOUBLE S_22;
    DOUBLE DX;
    DOUBLE DY;
} MilMatrix3x2D;

DWMAPI DwmEnableComposition(UINT);
DWMAPI DwmEnableMMCSS(BOOL);
DWMAPI DwmExtendFrameIntoClientArea(HWND,const MARGINS*);
DWMAPI DwmGetColorizationColor(DWORD*,BOOL);
DWMAPI DwmIsCompositionEnabled(BOOL*);
DWMAPI DwmSetWindowAttribute(HWND, DWORD, LPCVOID, DWORD);
DWMAPI DwmUnregisterThumbnail(HTHUMBNAIL);

#ifdef __cplusplus
}
#endif

#endif  /* __WINE_DWMAPI_H */
