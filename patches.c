    HDC desk = GetDC(0);
    int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1), rx;
    while (1) {
        desk = GetDC(0);
        SetStretchBltMode(desk, STRETCH_HALFTONE);
        if (rand() % 2 == 0) {
            int w = rand() % sw;
            int h = rand() % sh;
            for (int i = 5; i < 16; i++) {
                HRGN rgn = CreateEllipticRgn(w - w / i, h + h / i, w + 2000 / i, h - 950 / i);
                SelectClipRgn(desk, rgn);
                StretchBlt(desk, 1, 1, sw + 2, sh - 2, desk, 0, 0, sw, sh, SRCCOPY);
            }
        }
    }
