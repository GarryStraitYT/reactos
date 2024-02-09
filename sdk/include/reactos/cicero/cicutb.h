/*
 * PROJECT:     ReactOS Kernel
 * LICENSE:     GPL-2.0-or-later (https://spdx.org/licenses/GPL-2.0-or-later)
 * PURPOSE:     Private header for msutb.dll
 * COPYRIGHT:   Copyright 2023 Katayama Hirofumi MZ <katayama.hirofumi.mz@gmail.com>
 */

#pragma once

DEFINE_GUID(GUID_COMPARTMENT_SPEECH_OPENCLOSE, 0x544D6A63, 0xE2E8, 0x4752, 0xBB, 0xD1, 0x00, 0x09, 0x60, 0xBC, 0xA0, 0x83);
DEFINE_GUID(GUID_LBI_TRAYMAIN,                 0xE0B724E9, 0x6F76, 0x45F7, 0xB4, 0xC1, 0xB1, 0xC0, 0xFA, 0xBC, 0xE2, 0x3E);
DEFINE_GUID(GUID_LBI_INATITEM,                 0xCDBC683A, 0x55CE, 0x4717, 0xBA, 0xC0, 0x50, 0xBF, 0x44, 0xA3, 0x27, 0x0C);
DEFINE_GUID(GUID_LBI_CTRL,                     0x58C99D96, 0x2F9B, 0x42CE, 0x91, 0xBE, 0x37, 0xEF, 0x18, 0x60, 0xF8, 0x82);
DEFINE_GUID(GUID_TFCAT_TIP_KEYBOARD,           0x34745C63, 0xB2F0, 0x4784, 0x8B, 0x67, 0x5E, 0x12, 0xC8, 0x70, 0x1A, 0x31);
DEFINE_GUID(CLSID_SYSTEMLANGBARITEM,           0xBEBACC94, 0x5CD3, 0x4662, 0xA1, 0xE0, 0xF3, 0x31, 0x99, 0x49, 0x36, 0x69);

EXTERN_C LPVOID WINAPI GetLibTls(VOID);
EXTERN_C BOOL WINAPI GetPopupTipbar(HWND hWnd, BOOL fWinLogon);
EXTERN_C HRESULT WINAPI SetRegisterLangBand(BOOL bRegister);
EXTERN_C VOID WINAPI ClosePopupTipbar(VOID);

struct ITfLangBarEventSink_P : IUnknown
{
    STDMETHOD(OnLangBarUpdate)(TfLBIClick click, BOOL bFlag) = 0;
};
