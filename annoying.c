    HDC desktop = GetDC(NULL);
    int ScrW = GetSystemMetrics(SM_CXSCREEN), ScrM = GetSystemMetrics(SM_CYSCREEN);
    while (1) {
        desktop = GetDC(NULL);
        if (rand() % 4 == 0) {
            BitBlt(desktop, 0, 0, ScrW, ScrM, desktop, -90, 20, SRCCOPY);
        }
        else if (rand() % 4 == 1) {
            BitBlt(desktop, 0, 0, ScrW, ScrM, desktop, 90, -20, SRCCOPY);
        }
        else if (rand() % 4 == 2) {
            BitBlt(desktop, 0, 0, ScrW, ScrM, desktop, -90, -20, SRCCOPY);
        }
        else if (rand() % 4 == 3) {
            BitBlt(desktop, 0, 0, ScrW, ScrM, desktop, 90, 20, SRCCOPY);
        }
        Sleep(1);
    }
