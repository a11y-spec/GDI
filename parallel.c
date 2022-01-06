    HDC desk = GetDC(0);
    int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1), rx;
    while (1) {
        desk = GetDC(0);
        int a = rand() % sw, b = rand() % sh;
        BitBlt(desk, a, b, sw, sh, desk, a + cos(rand() % 21 - 10), b + cos(rand() % 21 - 10), SRCCOPY);
        BitBlt(desk, a, b, -sw, -sh, desk, a + cos(rand() % 21 - 10), b + cos(rand() % 21 - 10), SRCCOPY);
        Sleep(5);
    }
