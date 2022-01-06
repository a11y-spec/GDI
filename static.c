    int sx = GetSystemMetrics(SM_CXSCREEN), sy = GetSystemMetrics(SM_CYSCREEN);
    int c = 0;
    for (int a = 0;; a++, a %= 9)
    {
        if (!a) RedrawWindow(0, 0, 0, 133);

        for (int t = 0; t < rand() % 3; t++)
        {
            for (int c = 0; c < rand() % 10; c++)
            {
                int y = rand() % sx, h = sy - rand() % sy - (sy / 2 - 58);
                int r = rand() % 3;
                HBRUSH brush;
                HDC hdc = GetDC(0);
                if (r == 0)
                {
                    brush = CreateSolidBrush(RGB(rand() % 100 + 155, 0, 0));
                    SelectObject(hdc, brush);
                }
                if (r == 1)
                {
                    brush = CreateSolidBrush(RGB(0, rand() % 100 + 155, 0));
                    SelectObject(hdc, brush);
                }
                if (r == 2)
                {
                    brush = CreateSolidBrush(RGB(0, 0, rand() % 100 + 155));
                    SelectObject(hdc, brush);
                }

                BitBlt(hdc, 0, y, sx, h, hdc, rand() % 244 - 112, y, SRCCOPY);
                PatBlt(hdc, 0, y, sx, h, PATINVERT);
            }
            Sleep(1);
        }
    }
    return 0;
