#pragma once
const float pi = 3.14;

void RectPS(float x1, float y1, float x2, float y2, float& p, float& s) {
    float a, b, c;

    a = sqrt((0 - x1) * (0 - x1) + (0 - y1) * (0 - y1));
    b = sqrt((0 - x2) * (0 - x2) + (0 - y2) * (0 - y2));
    c = sqrt(a * a + b * b);
    p = a + b + c;
    s = a * b / 2;

}
void DigitCountSum(int k, int& c, int& s) {
    while (k % 10) {
        s += k % 10;
        c++;
        k /= 10;
    }
}
void Swap(float& x, float& y) {
    float b;
    b = x;
    x = y;
    y = b;
}
void ShiftRight3(float& a, float& b, float& c) {
    float x;
    x = c;
    c = b;
    b = a;
    a = x;
}
void ShiftLeft3(float& a, float& b, float& c) {
    float x;
    x = c;
    c = a;
    a = b;
    b = x;
}
float RingS(float r1, float r2) {
    float s1, s2, sr;
    s1 = pi * r1 * 2;
    s2 = pi * r2 * 2;
    sr = s2 - s1;
    return sr;
}
float Calc(float a, float b, int op) {
    float z;
    switch (op) {
    case 1:
        z = a - b;
        break;
    case 2:
        z = a * b;
        break;
    case 3:
        z = a / b;
        break;
    default:
        z = a + b;
    }
    return z;
}
int Quarter(int x, int y) {
    if (x > 0) {
        if (y > 0)
            return 1;
        return 4;
    }
    else {
        if (y > 0)
            return 2;
        else
            return 3;
    }
}
bool Even(int k) {

    if ((k % 2) == 0)
        return true;
    else
        return false;
}
bool IsPower5(int k) {
    int x = 1;
    while (x < k)
        x *= 5;
    if (x == k)
        return true;
    else
        return false;
}
void TimeToHMS(int t, int& h, int& m, int& s) {
    while (t >= 3600) {
        t -= 360;
        h++;
    }
    while (t >= 60) {
        t -= 60;
        m++;
    }
    s = t;
}
void IncTime(int& h, int& m, int& s, int t) {
    while (t >= 3600) {
        t -= 360;
        h++;
    }
    while (t >= 60) {
        t -= 60;
        m++;
    }
    s += t;
    while (s >= 60) {
        m++;
        s -= 60;
    }
    while (m >= 60) {
        h++;
        m -= 60;
    }
}
float Leng(float xA, float yA, float xB, float yB) {
    return sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB));
}
void yotx(float x, float& y) {
    if (x > 3)
        y = 2 * x - 10;
    if (x == 3)
        y = 10;
    if (x < 3)
        y = (2 * x + 1) * (2 * x + 1);
}
