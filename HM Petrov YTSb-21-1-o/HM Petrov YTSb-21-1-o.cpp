#include <iostream>
#include <cmath>

void RectPS(float x1, float y1, float x2, float y2, float&P, float&S);
void DigitCountSum(int k, int& c, int& s);
void Swap(float& x, float& y);
void ShiftRight3(float& a, float& b, float& c);
void ShiftLeft3(float& a, float& b, float& c);
float RingS(float r1, float r2);
float Calc(float a, float b, int op);
int Quarter(int x, int y);
bool Even(int k);
bool IsPower5(int k);
void TimeToHMS(int t, int&h, int&m, int&s);
void IncTime(int&h, int&m, int&s, int t);
float Leng(float xA, float yA, float xB, float yB);
void yotx(float x, float& y);



const float pi = 3.14;

int main()
{






/*
    //9-10 неделя

    float y,x,a,h;
    y = 0;
    x = 0;
    std::cout << "Write y(x) to your number, and step\n";
    std::cin >> a >> h;
    while (x < a) {
        yotx(x, y);
        x+=h;
        std::cout << "y(" << x << ") =" << y << "\n";
    }






    float xA, xB, xC, xD, yA, yB, yC, yD;
    std::cout << "Write A(x;y), B(x,y), C(x,y), D(x,y)\n";
    std::cin >> xA >> yA >> xB >> yB >> xC >> yC >> xD >> yD;
    std::cout << "AB =" << Leng(xA, yA, xB, yB) << " AC=" << Leng(xA, yA, xC, yC) << " AD=" << Leng(xA, yA, xD, yD);







    int t, h, m, s;
    std::cout << "Write Hour minutes seconds and +seconds\n";
    std::cin >> h>>m>>s>>t;
    while (s >= 60) {
        m++;
        s -= 60;
    }
    while (m >= 60) {
        h++;
        m -= 60;
    }
    IncTime(h, m, s, t);
    std::cout << h << " hour " << m << " minutes " << s << " seconds\n";





    int t, h, m, s;
    h = 0;
    m = 0;
    s = 0;
    std::cout << "Write secinds\n";
    std::cin >> t;
    TimeToHMS(t, h, m, s);
    std::cout << h << " hour " << m << " minutes " << s << " seconds\n";







    int k=0;
    std::cout << "Write 10 numbers \n";
    for (int i = 1; i <= 10; i++) {
        int g;
        std::cin >> g;
        if (IsPower5(g))
            k++;
    }
    std::cout << k << " numbers to the 5th power.";






    int kl = 0;
    std::cout << "Write 10 numbers\n";
    for (int i = 1; i <= 10; i++) {
        int k;
        std::cin >> k;
        if (Even(k))
            kl++;
    }
    std::cout << kl << " numbers is even";








    int x, y;
    std::cout << "Write X and Y coordinate\n";
    std::cin >> x >> y;
    std::cout << "Your point in " << Quarter(x, y) << " quarter";







    float a, b;
    int c;
    std::cout << "Write A nd B numbers and chuse operation: 1- a-b, 2 - a*b, 3 - a/b, other values - a+b. \n";
    std::cin >> a >> b >> c;
    std::cout << "Answer is " << Calc(a, b, c);







    float r1, r2;
    std::cout << "Write R1 and R2\n";
    std::cin >> r1 >> r2;
    if (r1 > r2)
        Swap(r1, r2);
    std::cout << "Ring square is " << RingS(r1, r2);





    float a, b, c;
    std::cout << "Write A B C\n";
    std::cin >> a >> b >> c;
    ShiftLeft3(a, b, c);
    std::cout << "A=" << a << " B=" << b << " C=" << c;






    float a, b, c;
    std::cout << "Write A B C\n";
    std::cin >> a >> b >> c;
    ShiftRight3(a, b, c);
    std::cout <<"A="<<a<<" B="<<b<<" C="<<c;








    float a, b, c, d;
    std::cout << "Write A, B, C, D\n";
    std::cin >> a >> b >> c >> d;
    Swap(a, b);
    Swap(c, d);
    Swap(b, c);
    std::cout << "A=" << a << " B=" << b << " C=" << c << " D=" << d;






    int k, s, c;
    s = 0;
    c = 0;
    std::cout << "Write K, K>0! \n";
    std::cin >> k;
    if (k <= 0)
        std::cout << "You write k<=0";
    DigitCountSum(k, c, s);
    std::cout << "The entered number consists of " << c << ", and their sum is equal to " << s;





    float x1, x2, y1, y2, p, s;
    std::cout << "Write A(x1;y1), B(x2;y2) points coortinates. C(0;0)\n";
    std::cin >> x1 >> y1 >> x2 >> y2;
    p = 0;
    s = 0;
    RectPS(x1, y1, x2, y2, p, s);
    std::cout << "P= " << p << " ,and S= " << s << "\n";






    //7-8 неделя
    float a, b, x,m;
    std::cout << "Write how much money you put in the bank, how much money do you want to receive, write interest rate.\n";
    std::cin >> a >> b >> x;
    m = 0;

    while (a < b) {
        m++;
        a += (a / 100) * x;
    }
    std::cout << "You need wait " << m << " months.\n";








    for (int x = 0; x <= 100; x++) {
        for (int y = 0; y <= 100; y++) {
            for (int z = 0; z <= 100; z++) {
                if ((15 * x + 20 * y + 30 * z) == 270) {
                    std::cout << "X= " << x << " Y= " << y << " Z= " << z << "\n";
                }
            }
        }
    }









    
    int a, b;
    std::cout << "Write from 3 to 27 \n";
    std::cin >> a;
    b = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            for (int k = 1; k <= 9; k++) {
                if ((i + j + k) == a) {
                    b += 1;
                    std::cout << i << j << k<<"\n";
                }
            }
        }
    }
    std::cout << "Your number is made up of " << b << " sums of 3 numbers. \n";


    
    
    
    
    
    
    
    int xc, y, x;
    x = 1;
    std::cout << "Write Number and extent \n";
    std::cin >> xc >> y;
    for (int i = 1; i <= y; i++) {
        x *= xc;
    }
    std::cout << "X in your extent = "<<x;








    int x,y;
    y = 1;
    std::cout << "Write factorial number \n";
    std::cin >> x;
    for (int i = 1; i <= x; i++)
        y *= i;
    std::cout << "Factorial you number = " << y;
    
    







    int m, n, h;
    std::cout << "Write M to N and step H \n";
    std::cin >> m >> n >> h;
    for (int i = m; i <= n; i += h) {
        std::cout << i<<" ";
    }










    float x, a, y;
    y = 0;
    std::cout << "Write number and x " << "\n";
    std::cin >> a >> x;
    float i = 0;
    while (i <= a-1) {
        i++;
        y += (1 / i * x);
        std::cout << y << "\n";
    }
    std::cout << "Y= " << y << "\n";






    float x, a, b, y;
    std::cout << "Write A to B and step ";
    std::cin >> a >> b >> x;
    float i = a;
    while (i <= b-1) {
        i += x;
        y = sqrt(2 + 3 * i) + 72 * i + tan(4 * i + 31);
        std::cout << y << "\n";
    }





    int x;
    std::cout << "Write how lines you wont ";
    std::cin >> x;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << "0";
        }
        std::cout << "\n";
    }


    //6 неделя
    float x, y;
    float r = 1;
    std::cout << "Write X and Y coordinate \n";
    std::cin >> x >> y;
    float l = sqrt(x * x + y * y);
    if (l < r) {
        if (y < (x/2)) {
            std::cout << "Yes, your point in the area";
         }
        else {
            std::cout << "No, your point not in the area";
         }
    }
    else {
        std::cout << "No";
    }





    float x, y;
    float r = 1;
    std::cout << "Write X and Y coordinate \n";
    std::cin >> x >> y;
    float l = sqrt(x * x + y * y);
    if (l < r) {
        if (x > 0 && x < 1) {
            if (y > x) {
                std::cout << "Yes";
            }
            else {
                std::cout << "No";
            }
        }

        else {
            std::cout << "Yes";
        }
    }
    else {
        std::cout << "No";
    }

        
        // 5 неделя
        int x, y;
        y = 0;
        std::cout << "Write x \n";
        std::cin >> x;

        if (x > 5)
            y = 2 * (x*x) + 10;
        if (x < 5)
            y = 2 * abs(x+6)-(x*x);
        if (x == 0)
            y = 0;

        std::cout << "y = "<<y<<"\n";





        int x, y;
        y = 0;
        std::cout << "Write x \n";
        std::cin >> x;
        if (x > (-8))
            y = (2 + x) * (2 + x) + 7;
        if (x == (-8))
            y = 5;
        if (x < (-8))
            y = abs(2 * x - 1) - 1;

        std::cout << "y = " << y << "\n";
        */
}

void RectPS(float x1, float y1, float x2, float y2, float&p, float&s) {
    float a,b,c;

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
    
    if ((k%2) == 0)
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
void TimeToHMS(int t, int&h, int&m, int&s) {
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
void IncTime(int&h, int&m, int&s, int t) {
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