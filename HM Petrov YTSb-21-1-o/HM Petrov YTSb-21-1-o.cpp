#include <iostream>
#include <cmath>
#include <array>
#include "myFnS.h"


int main(){


    //15-16 неделя
    srand(5);









    /*
    int mx;
    std::array < std::array< int, 10>, 10 > a;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            a[i][j] = rand() % 81 - 30;
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n\n";
    mx = a[0][0];
    for (int i = 0; i < 10; i++) {
        for (int j=0; j < 10; j++) {
            if (mx < a[i][j])
                mx = a[i][j];
        }
        for (int j=0; j < 10; j++) {
            a[i][j] = mx;
            std::cout << a[i][j] << " ";
        }
        mx = 0;
        std::cout << "\n";
    }









    std::array < std::array< int, 10>, 10 > a;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            a[i][j] = rand() % 81 - 30;
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n\n";
    int low = a[0][0];
    int l;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (low > a[i][j]) {
                low = a[i][j];
                l = j;
            }
        }
        a[i][l] = a[i][i];
        a[i][i] = low;
    }
    std::cout << "\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }








    std::array < std::array< int, 10>, 10 > a;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            a[i][j] = rand() % 81 - 30;
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n\n";

    int sum_plg ,x;
    sum_plg = 0;

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
           x = i + 1;
        }
        else
            x = i + 2;
        for (int j = x; j < 10; j += 2) {
            if (a[i][j] > 0)
                sum_plg += a[i][j];
            if ((a[i][i] > 0) && (i%2 == 0))
                sum_plg += a[i][i];
            std::cout << a[i][j]<< " "<< a[i][i]<<" ";
        }
    }
    std::cout << "\n";
    std::cout << "Sum all even numbers heiare glavnaia diagonal = " << sum_plg << "\n";









    std::array < std::array< int, 10>, 10 > a;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            a[i][j] = rand() % 81 - 30;
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n\n";

    int sum_diag=0;
    for (int i = 0; i < 10; i++) {
        if(a[i][i]<0)
        sum_diag += a[i][i];
    }
    std::cout << "GLav diag sum =" << sum_diag << "\n";








    int x = 0;
    std::array < std::array< int, 10>, 10 > a;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
                a[i][j] = rand() % 5;
            std::cout << a[i][j] << " ";
            if (j == 1)
                x = a[i][j];
        }
        for (int k = 0; k < 10; k++) {
            a[i][k] *= x;
        }
        std::cout << "\n";
    }
        std::cout << "\n";
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                std::cout << a[i][j] << " ";
            }
            std::cout << "\n";
        }
    









    int x;
    std::array < std::array< int, 10>, 10 > a;
    for (int i = 0; i < 10; i++) {
        for (int j=0; j < 10; j++) {
            a[i][j] = rand() % 81-30;
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    x = a[0][0];
    int lin;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (x > a[i][j]) {
                x = a[i][j];
                lin = i;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i==lin) 
                a[i][j]=0;
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }







    //13-14 неделя

    srand(1356);
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cout << "Write pasajer Names \n";
        std::cin.getline(pasajars.i names);
        std::cout << pasajars.names;
    }
    };


    workers w1,w2,w3,w4;
    w1.Familia = "Petrov";
    w1.specialnost = "Slesar";
    w1.sr_oclad = 3000;
    w1.vozrast = 21;

    w2.Familia = "Ivanov";
    w2.specialnost = "Tokar";
    w2.sr_oclad = 3500;
    w2.vozrast = 28;

    w3.Familia =  "Shpunko";
    w3.specialnost = "Tokar";
    w3.sr_oclad = 8000;
    w3.vozrast = 13;

    w4.Familia = "Homova";
    w4.specialnost = "Tokar";
    w4.sr_oclad = 1000;
    w4.vozrast = 19;

    struct workers zavod1[2]{
    w1,
    w2
    };
    struct workers zavod2[2]{
    w3,
    w4
    };
    int tok, sles;
    tok = 0;
    sles = 0;
    std::cout << "Zavod 1 \n";
    for (int i = 0; i < 2; i++) {
        if (zavod1[i].specialnost == "Slesar") {
            sles += 1;
        }
        if (zavod1[i].specialnost == "Tokar") {
            tok += 1;
        }
        std::cout << zavod1[i].Familia << " " << zavod1[i].specialnost << " " << zavod1[i].sr_oclad << " rub " << zavod1[i].vozrast<<" years\n";
    }
    std::cout << "In first Zavod works " << sles << " slesorei, and " << tok << " tokarei \n\n";

    std::cout << "Zavod 2 \n";
    for (int i = 0; i < 2; i++) {
        if (zavod2[i].specialnost == "Slesar") {
            sles += 1;
        }
        if (zavod2[i].specialnost == "Tokar") {
            tok += 1;
        }
        std::cout << zavod2[i].Familia << " " << zavod2[i].specialnost << " " << zavod2[i].sr_oclad << " rub " << zavod2[i].vozrast << " years\n";
    }
    std::cout << "In first Zavod works " << sles << " slesorei, and " << tok << " tokarei \n\n";

    
 







    std::array<int, 10>a;
    for (int i = 0; i < 10; i++) {
        a[i] = rand() % 80;
        std::cout << a[i] << " ";
    }
    std::cout << "\n";
    std::array<int, 10>b;
    for (int i = 0; i < 10; i++) {
        b[i] = rand() % 80;
        std::cout << b[i] << " ";
    }
    std::cout <<"\n";
    std::array<int, 10>c;
    for (int i = 0; i < 10; i++) {
        c[i] = a[i] - b[i];
        std::cout << c[i] << " ";
    }
    std::cout << "\n";






    std::array<int, 20>numb;
    for (int i = 0; i < 20; i++) {
        numb[i] = rand() % 31-10;
        std::cout << numb[i] << " ";
    }
    std::cout << "\n";

    int s = 0;
    for (int i = 0; i < 20; i++) {
        if (SumNarr(numb[i], 5, 2)) {
            s += numb[i];
        }
    }
    std::cout << "Summ numbers > 5 =" << s << "\n";

    s=0;
    for (int i = 0; i < 20; i++) {
        if (SumNarr(numb[i], 7, 1)) {
            s += numb[i];
        }
    }
    std::cout << "Summ numbers < 7 =" << s << "\n";

    s = 0;
    for (int i = 0; i < 20; i++) {
        if (SumNarr(numb[i], 3, 2)) {
            s += numb[i];
        }
    }
    std::cout << "Summ numbers > 3 =" << s << "\n";

    s = 0;
    for (int i = 0; i < 20; i++) {
        if (numb[i]%2 == 0) {
            s += numb[i];
            numb[i] *= 2;
        }
    }
    std::cout << "Sum of even numbers  =" << s << "\n";
    std::cout << "All even numbers *2 array: \n";
        for (int i = 0; i < 20; i++) {
            std::cout << numb[i] << " ";
        }
    std::cout << "\n";

    s = 0;
    for (int i = 0; i < 20; i++) {
        if (numb[i] % 2 != 0) {
            s += numb[i];
            numb[i] += 3;
        }
    }
    std::cout << "Sum of odd numbers  =" << s << "\n";
    std::cout << "All odd numbers +3 array: \n";
    for (int i = 0; i < 20; i++) {
        std::cout << numb[i] << " ";
    }
    std::cout << "\n";

    std::cout << "All (numbers < 0) +5 and all (numbers >0) -1 \n";
    for (int i = 0; i < 20; i++) {
        if (numb[i] > 0)
            numb[i] -= 1;
        if (numb[i] <= 0)
            numb[i] += 5;
        
        std::cout << numb[i] << " ";
    }
    std::cout << "\n";

    s = 1;
    int sr = 0;
    float srAr=0;
    for (int i = 0; i < 20; i++) {
        if (numb[i] > 0) {
            s *= numb[i];
            sr += numb[i];
            srAr++;
        }
    }
    std::cout << "Posirive numbers in array =" << srAr << "\n";
    std::cout << "Numbers > 0 = " << srAr << "\n";
    srAr = sr / srAr;
    std::cout << "Arithmetic mean of positive =" << srAr << "\n";
    std::cout << "Product of positive numbers  =" << s << "\n";

    s = 1;
    sr = 0;
    srAr = 0;
    for (int i = 0; i < 20; i++) {
        if (numb[i] < 0) {
            s *= numb[i];
            sr += numb[i];
            srAr++;
        }
    }
    std::cout << "Negative numbers in array =" << srAr << "\n";
    srAr = sr / srAr;
    std::cout << "Arithmetic mean of negative =" << srAr << "\n";
    std::cout << "Product of negative numbers  =" << s << "\n";

    int h, nh,ns;
    h = 0;
    s = numb[1];
    for (int i = 0; i < 20; i++) {
        if (h < numb[i]) {
            h = numb[i];
            nh = i+1;
        }
        if (s > numb[i]) {
            s = numb[i];
            ns = i+1;
        }
    }
    std::cout << "Smolest numbers = " << s << " and his number in array is " << ns << "\nBigger number = " << h << " and his number in array is " << nh << "\n";


    h = 0;
    s = numb[1];
    for (int i = 0; i < 20; i++) {
        if (h < abs(numb[i])) {
            h = abs(numb[i]);
            nh = i + 1;
        }
        if (s > abs(numb[i])) {
            s = abs(numb[i]);
            ns = i + 1;
        }
    }
    std::cout << "Smolest the absolute value of a number = " << s << " and his number in array is " << ns << "\nBigger the absolute value of a number = " << h << " and his number in array is " << nh << "\n";

    s = 0;
    for (int i = 0; i < 20; i++) {
        s += numb[i];
    }
    s = s / 20;
    std::cout << "Numbers < then arithmetic mean: \n";
    for (int i = 0; i < 20; i++) {
        if ((numb[i] < s) && (numb[i] != 0)) {
            std::cout << numb[i] << " ";
        }
    }
    std::cout << "\n";


    for (int i = 0; i < 20; i++) {
        if (numb[i] < 0) {
            numb[i] = 0;
        }
        std::cout << numb[i]<<" ";
    }
    std::cout << "\n";


    





    //11-12 неделя

    Rob_Car car1;
    car1.speed = 85;
    car1.time = 15;
    car1.number = 1;

    std::cout << "Way = " << RCway(car1) << '\n';






    Rob_Plane p1;
    p1.propeller_speed = 1800;
    p1.screw_radius = 2;
    p1.thrust_coefficient = 25;

    std::cout << "Trust robot-plane =" << ThrustP(p1) << '\n';







    Sensor s1, s2;
    s1.val_min = 1;
    s1.val_max = 10;
    s1.mis = 5;
    s1.max_spd = 15;

    s2.val_min = 0.5;
    s2.val_max = 25;
    s2.mis = 1.5;
    s2.max_spd = 16;

    SenMS(s1, s2);
    std::cout << "\n";
    SenLS(s1, s2);
    std::cout << "\n";
    SenHV(s1, s2);
    std::cout << "\n";
    SenMedMS(s1, s2);


    



    Robots r1, r2;
    r1.dim = 50;
    r1.weight = 116;
    r1.max_speed = 5;

    r2.dim = 18;
    r2.weight = 60;
    r2.max_speed = 1;

    RobSpd(r1, r2);







    Robots r1, r2;
    r1.dim = 10;
    r1.weight = 135;
    r1.max_speed = 18;

    r2.dim = 9;
    r2.weight = 100;
    r2.max_speed = 13;

    RobHeh(r1, r2);






    Robots r1, r2;
    r1.dim = 120;
    r1.weight = 15;
    r1.max_speed = 10;
    
    r2.dim = 80;
    r2.weight = 168;
    r2.max_speed = 5;

    RobSml(r1, r2);





    Complex k1, k2;
    std::cout << "Write First and Second Complex numbers, imaginary and real parts\n";
    std::cin >> k1.im >> k1.re >> k2.im >> k2.re;
    ComplexRel(k1,k2);






    myTime t1,t2;

    std::cout << "Write First time Hour Minutes Seconds\n";
    std::cin >> t1.hour >> t1.minutes >> t1.seconds;
    IncTime(t1.hour, t1.minutes, t1.seconds, 0);
    std::cout << "First time " << t1.hour << ":" << t1.minutes << ":" << t1.seconds<<"\n";
    std::cout << "Write Second time Hour Minutes Seconds\n";
    std::cin >> t2.hour >> t2.minutes >> t2.seconds;
    IncTime(t2.hour, t2.minutes, t2.seconds, 0);
    std::cout << "Second time " << t2.hour << ":" << t2.minutes << ":" << t2.seconds << "\n"

    if (timeS(t1, t2))
        std::cout << "First time is bigger then Second time\n";
    else
        std::cout << "Second time is bigger then First";




      

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
    Points a;
    float r = 1;
    std::cout << "Write X and Y coordinate \n";
    std::cin >> a.xC >> a.yC;
    float l = sqrt(a.xC * a.xC + a.yC * a.yC);
    if (l < r) {
        if (a.yC < (a.xC / 2)) {
            std::cout << "Yes, your point in the area";
        }
        else {
            std::cout << "No, your point not in the area";
        }
    }
    else {
        std::cout << "No, your point not in the area";
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

