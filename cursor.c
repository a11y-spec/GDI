    HDC desk = GetDC(0);
    POINT pt;
    CURSORINFO curinf;
    while (1) {
        desk = GetDC(0);
        GetCursorPos(&pt);
        GetCursorInfo(&curinf);
        curinf.cbSize = sizeof(curinf);
        DrawIcon(desk, pt.x, pt.y, curinf.hCursor);
    }
