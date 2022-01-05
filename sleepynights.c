    HDC desk = GetDC(0);
    int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1), rx;
    while (1) {
        desk = GetDC(0);
        rx = rand() % sw;
        int ry = rand() % sh;
        if (rand() % 4 == 0) { BitBlt(desk, rx, 1, 10, sh, desk, rx, 0, SRCPAINT); Sleep(1); }
        else if (rand() % 4 == 1) { BitBlt(desk, rx, -1, -10, sh, desk, rx, 0, SRCPAINT); Sleep(1); }
        else if (rand() % 4 == 2) { BitBlt(desk, 1, ry, sw, 66, desk, 0, ry, SRCPAINT); Sleep(1); }
        else if (rand() % 4 == 3) { BitBlt(desk, -1, ry, sw, -66, desk, 0, ry, SRCPAINT); Sleep(1); }
    }
