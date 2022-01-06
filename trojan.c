    HWND upWnd = GetForegroundWindow();
    HDC upHdc = GetDC(upWnd);
    HDC desk = GetDC(NULL);
    int sw = GetSystemMetrics(SM_CXSCREEN);
    int sh = GetSystemMetrics(SM_CYSCREEN);
    while (1) {
        upWnd = GetForegroundWindow();
        upHdc = GetDC(upWnd);
        desk = GetDC(NULL);
        POINT c;
        GetCursorPos(&c);
        BitBlt(desk, -1, 1, sw, sh, desk, 2, 2, NOTSRCCOPY);
        SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)));
        BitBlt(desk, -rand() % 15, rand() % 15, sw, sh, desk, -rand() % 11, rand() % 11, 0x2837E28);
        DrawIcon(desk, c.x, c.y, LoadIcon(0, IDI_ERROR));
        DrawIcon(desk, c.x, c.y, LoadIcon(1, IDI_INFORMATION));
    }
