    while (1) {
        HWND hwnd = GetDesktopWindow();
        HDC desktop = GetWindowDC(hwnd);
        HDC hdc = GetDC(NULL);
        RECT rekt;
        GetWindowRect(hwnd, &rekt);
        SetStretchBltMode(hdc, STRETCH_HALFTONE);
        BitBlt(hdc, rekt.left + rand() % 1 + 1, rekt.top + rand() % 1 + 1, rekt.right + rand() % 1 + 1, rekt.bottom + rand() % 1 + 1, hdc, rekt.left, rekt.top, SRCPAINT);
        BitBlt(hdc, rekt.left + rand() % 1 - 1, rekt.top + rand() % 1 - 1, rekt.right + rand() % 1 + 1, rekt.bottom + rand() % 1 - 1, hdc, rekt.left, rekt.top, SRCINVERT);
        Sleep(10);
    }
