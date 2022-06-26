#include <iostream>
#include <cmath>
#include <array>
#include "myFnS.h"


int main(){


    //15-16 неделя
    srand(1356);









    /*

    int m[2][10];

    for (int i = 0; i < 10; i++) {
        m[0][i] = rand() % 100;
        m[1][i] = rand() % 4;
    }
    struct PowMot {
        int number;
        int power;
    };
    PowMot mox{ 0, 0 };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++) {
            std::cout << m[i][j] << " ";
            if ((m[1][j] == 3) && (m[0][j] > mox.power)) {
                mox.number = j + 1;
                mox.power = m[0][j];
            }
        }
        std::cout << "\n";
    }
    std::cout << "Number of best motor " << mox.number << " and his power is " << mox.power << "%\n";





    



    //Дана матрица. Элементы первой строки — количество осадков в соответствующий день, второй строки — сила ветра в этот день. Найти, был ли в эти дни ураган? (ураган — когда самый сильный ветер был в самый дождливый день).

    int storm = 0;
    int day;
    int b[2][31];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 31; j++) {
            b[i][j] = rand() % 10;
            std::cout << b[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < 31; i++) {
        if (b[0][i] * b[1][i] > storm) {
            storm = b[0][i] * b[1][i];
            day = i+1;
        }
    }
    std::cout << "Strongger Storm has been in " << day << " day\n" << storm;






    //Дана матрица. Составить массив, каждый элемент которого равен максимальному элементу соответствующей строки матрица.

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





    //В квадратной матрице для каждой строки найти минимальный элемент и переставить его с элементом, стоящим в этой строке на главной диагонали.

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




    //В квадратной матрице найти сумму положительных элементов, лежащих на и выше главной диагонали и расположенных в чётных столбцах.

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






    //В квадратной матрице, найти сумму отрицательных элементов, лежащих на главной диагонали.


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




    //Преобразовать матрицу, умножив элементы каждой строки на значение второго элемента этой строки.

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
    






    //Преобразовать матрицу: элементы строки, в которой находится минимальный элемент матрицы, заменить нулями.

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

    //Информация по N заводам города задается строкой следующего вида: фамилия, средний возраст, специальность, средний оклад.
    //Ввести информацию по заводам, посчитать количество слесарей и токарей. Напечатать эти значения.

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

    
 





 //Сгенерировать массив со случайными числами в диапазоне: [-10,20]
 //Создать новый массив из двух других массивов путём операций над элементами массивов:вычитания

    std::array<int, 10>a;
    for (int i = 0; i < 10; i++) {
        a[i] = rand() % 31-10;
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
    //Вычислить сумму элементов массива больших 5
    int s = 0;
    for (int i = 0; i < 20; i++) {
        if (SumNarr(numb[i], 5, 2)) {
            s += numb[i];
        }
    }
    std::cout << "Summ numbers > 5 =" << s << "\n";


    //Вычислить сумму элементов массива меньших 7 
    s=0;
    for (int i = 0; i < 20; i++) {
        if (SumNarr(numb[i], 7, 1)) {
            s += numb[i];
        }
    }
    std::cout << "Summ numbers < 7 =" << s << "\n";


    //Вычислить сумму элементов массива больших 3
    s = 0;
    for (int i = 0; i < 20; i++) {
        if (SumNarr(numb[i], 3, 2)) {
            s += numb[i];
        }
    }
    std::cout << "Summ numbers > 3 =" << s << "\n";
    

    //Вычислить сумму чётных элементов массива
    //Увеличить все а чётные в 2 раза
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

    //Вычислить сумму нечётных элементов массива
    //Увеличить все нечётные элементы массива на 3

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


    //Увеличить все отрицательные элементы на 5, а положительные уменьшить на 1

    std::cout << "All (numbers < 0) +5 and all (numbers >0) -1 \n";
    for (int i = 0; i < 20; i++) {
        if (numb[i] > 0)
            numb[i] -= 1;
        if (numb[i] <= 0)
            numb[i] += 5;
        
        std::cout << numb[i] << " ";
    }
    std::cout << "\n";

    //Вывести элементы массива, меньших среднего арифметического

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

    //Заменить все отрицательные элементы массива нулями

    for (int i = 0; i < 20; i++) {
        if (numb[i] < 0) {
            numb[i] = 0;
        }
        std::cout << numb[i]<<" ";
    }
    std::cout << "\n";


    





    //11-12 неделя

    //Робот-автомобиль описывается как структура с полями: скорость, длительность движения и номер. Напишите функцию для расчёта пройденного расстояния.

    Rob_Car car1;
    car1.speed = 85;
    car1.time = 15;
    car1.number = 1;

    std::cout << "Way = " << RCway(car1) << '\n';




    //Робот-самолёт описывается как структура с полями: скорость вращения винта, радиус винта, коэффициент тяги. Напишите функцию для расчёта тяги, создаваемую винтом (произведение всех характеристик).

    Rob_Plane p1;
    p1.propeller_speed = 1800;
    p1.screw_radius = 2;
    p1.thrust_coefficient = 25;

    std::cout << "Trust robot-plane =" << ThrustP(p1) << '\n';




    //Имеется информация о датчиках: диапазон измеряемых значений (min, max), погрешность, максимальная скорость. Вывести данные о самом точном датчике.
    //о датчике с наименьшейскоростью работы.
    //о датчике с наибольшим диапазоном значений.
    //Вывести среднюю погрешность работы двух датчиков.

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


    
    //Имеется информация о роботах: габариты, вес, максимальная скорость. Вывестиданные о самом быстром роботе.

    Robots r1, r2;
    r1.dim = 50;
    r1.weight = 116;
    r1.max_speed = 5;

    r2.dim = 18;
    r2.weight = 60;
    r2.max_speed = 1;

    RobSpd(r1, r2);





    //Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести данные о самом тяжёлом роботе.

    Robots r1, r2;
    r1.dim = 10;
    r1.weight = 135;
    r1.max_speed = 18;

    r2.dim = 9;
    r2.weight = 100;
    r2.max_speed = 13;

    RobHeh(r1, r2);




    //Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести данные о самом маленьком роботе.

    Robots r1, r2;
    r1.dim = 120;
    r1.weight = 15;
    r1.max_speed = 10;
    
    r2.dim = 80;
    r2.weight = 168;
    r2.max_speed = 5;

    RobSml(r1, r2);



    //Создайте структуру для хранения комплексных чисел. Атрибуты: вещественная и мнимая части. Объявите два числа и получите их значения от пользователя.
    //Напишите функцию, которая будет сравнивать вещественную часть комплексного числа.

    Complex k1, k2;
    std::cout << "Write First and Second Complex numbers, imaginary and real parts\n";
    std::cin >> k1.im >> k1.re >> k2.im >> k2.re;
    ComplexRel(k1,k2);




    //Создайте структуру, которая хранит время: часы, минуты, секунды.
    //Написать функцию, которая сравнивает два времени. Возвращает true, если первый аргумент больше второго.

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

        //Реализовать функцию y=f(x). Протабулировать функцию.

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


        //Описать функцию Leng(xA, yA, xB, yB) вещественного типа, находящую длину
        //отрезка AB на плоскости по координатам его концов: |AB| =
        //sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB)),(xA, yA, xB, yB — вещественные параметры). С
        //помощью этой функции найти длины отрезков AB, AC, AD, если даны координаты точек A, B, C, D.



        float xA, xB, xC, xD, yA, yB, yC, yD;
        std::cout << "Write A(x;y), B(x,y), C(x,y), D(x,y)\n";
        std::cin >> xA >> yA >> xB >> yB >> xC >> yC >> xD >> yD;
        std::cout << "AB =" << Leng(xA, yA, xB, yB) << " AC=" << Leng(xA, yA, xC, yC) << " AD=" << Leng(xA, yA, xD, yD);



        //Описать процедуру IncTime(H, M, S, T), которая увеличивает на T секунд время,
        //заданное в часах H, минутах M и секундах S (H, M и S — входные и выходные
        //параметры, T — входной параметр; все параметры — целые положительные). Дано
        //время (в часах H, минутах M, секундах S) и целое число T. Используя процедуру
        //IncTime, увеличить данное время на T секунд и вывести новые значения H, M, S.



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


        //Описать процедуру TimeToHMS(T, H, M, S), определяющую по времени T (в
        //секундах) содержащееся в нем количество часов H, минут M и секунд S (T —
        //входной, H, M и S — выходные параметры целого типа). Используя эту процедуру,
        //найти количество часов, минут и секунд для пяти данных отрезков времени T1, T2,. . ., T5.


        int t, h, m, s;
        h = 0;
        m = 0;
        s = 0;
        std::cout << "Write secinds\n";
        std::cin >> t;
        TimeToHMS(t, h, m, s);
        std::cout << h << " hour " << m << " minutes " << s << " seconds\n";



        //Описать функцию IsPower5(K) логического типа, возвращающую TRUE, если целый
        //параметр K (> 0) является степенью числа 5, и FALSE в противном случае. С ее
        //помощью найти количество степеней числа 5 в наборе из 10 целых положительных чисел.



        int k=0;
        std::cout << "Write 10 numbers \n";
        for (int i = 1; i <= 10; i++) {
            int g;
            std::cin >> g;
            if (IsPower5(g))
                k++;
        }
        std::cout << k << " numbers to the 5th power.";


        //Описать функцию Even(K) логического типа, возвращающую TRUE, если целый
        //параметр K является четным, и FALSE в противном случае. С ее помощью найти
        //количество четных чисел в наборе из 10 целых чисел.



        int kl = 0;
        std::cout << "Write 10 numbers\n";
        for (int i = 1; i <= 10; i++) {
            int k;
            std::cin >> k;
            if (Even(k))
                kl++;
        }
        std::cout << kl << " numbers is even";



        //Описать функцию Quarter(x, y) целого типа, определяющую номер координатной
        //четверти, в которой находится точка с ненулевыми вещественными координатами
        //(x, y). С помощью этой функции найти номера координатных четвертей для трех
        //точек с данными ненулевыми координатами




        int x, y;
        std::cout << "Write X and Y coordinate\n";
        std::cin >> x >> y;
        std::cout << "Your point in " << Quarter(x, y) << " quarter";




        //Описать функцию Calc(A, B, Op) вещественного типа, выполняющую над
        //ненулевыми вещественными числами A и B одну из арифметических операций и
        //возвращающую ее результат. Вид операции определяется целым параметром Op: 1
        //— вычитание, 2 — умножение, 3 — деление, остальные значения — сложение. С
        //помощью Calc выполнить для данных A и B операции, определяемые данными
        //целыми N1, N2, N3.


        float a, b;
        int c;
        std::cout << "Write A nd B numbers and chuse operation: 1- a-b, 2 - a*b, 3 - a/b, other values - a+b. \n";
        std::cin >> a >> b >> c;
        std::cout << "Answer is " << Calc(a, b, c);



        //Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца,
        //заключенного между двумя окружностями с общим центром и радиусами R1 и R2
        //(R1 и R2 — вещественные, R1 > R2). С ее помощью найти площади трех колец, для
        //которых даны внешние и внутренние радиусы. Воспользоваться формулой площади
        //круга радиуса R: S = π·R2. В качестве значения π использовать 3.14.



        float r1, r2;
        std::cout << "Write R1 and R2\n";
        std::cin >> r1 >> r2;
        if (r1 > r2)
            Swap(r1, r2);
        std::cout << "Ring square is " << RingS(r1, r2);


        //Описать процедуру ShiftLeft3(A, B, C), выполняющую левый циклический сдвиг:
        //значение A переходит в C, значение C — в B, значение B — в A (A, B, C —
        //вещественные параметры, являющиеся одновременно входными и выходными). С
        //помощью этой процедуры выполнить левый циклический сдвиг для двух данных
        //наборов из трех чисел: (A1, B1, C1) и (A2, B2, C2).


        float a, b, c;
        std::cout << "Write A B C\n";
        std::cin >> a >> b >> c;
        ShiftLeft3(a, b, c);
        std::cout << "A=" << a << " B=" << b << " C=" << c;



        //Описать процедуру ShiftRight3(A, B, C), выполняющую правый циклический сдвиг:
        //значение A переходит в B, значение B — в C, значение C — в A (A, B, C —
        //вещественные параметры, являющиеся одновременно входными и выходными). С
        //помощью этой процедуры выполнить правый циклический сдвиг для двух данных
        //наборов из трех чисел: (A1, B1, C1) и (A2, B2, C2).


        float a, b, c;
        std::cout << "Write A B C\n";
        std::cin >> a >> b >> c;
        ShiftRight3(a, b, c);
        std::cout <<"A="<<a<<" B="<<b<<" C="<<c;



        //Описать процедуру Swap(X, Y), меняющую содержимое переменных X и Y (X и Y
        //— вещественные параметры, являющиеся одновременно входными и выходными).
        //С ее помощью для данных переменных A, B, C, D последовательно поменять
        //содержимое следующих пар: A и B, C и D, B и C и вывести новые значения A, B, C, D.




        float a, b, c, d;
        std::cout << "Write A, B, C, D\n";
        std::cin >> a >> b >> c >> d;
        Swap(a, b);
        Swap(c, d);
        Swap(b, c);
        std::cout << "A=" << a << " B=" << b << " C=" << c << " D=" << d;



        //Описать процедуру DigitCountSum(K, C, S), находящую количество C цифр целого
        //положительного числа K, а также их сумму S (K — входной, C и S — выходные
        //параметры целого типа). С помощью этой процедуры найти количество и сумму
        //цифр для каждого из пяти данных целых чисел.


        int k, s, c;
        s = 0;
        c = 0;
        std::cout << "Write K, K>0! \n";
        std::cin >> k;
        if (k <= 0)
            std::cout << "You write k<=0";
        DigitCountSum(k, c, s);
        std::cout << "The entered number consists of " << c << ", and their sum is equal to " << s;



        //Описать функцию RectPS(x1, y1, x2, y2, P, S), вычисляющую периметр P и площадь
        //S прямоугольника со сторонами, параллельными осям координат, по координатам
        //(x1, y1), (x2, y2) его противоположных вершин (x1, y1, x2, y2) — входные, P и S —
        //выходные параметры вещественного типа. С помощью этой функцию найти
        //периметры и площади трех прямоугольников с данными противоположными
        //вершинами.

        float x1, x2, y1, y2, p, s;
        std::cout << "Write A(x1;y1), B(x2;y2) points coortinates. C(0;0)\n";
        std::cin >> x1 >> y1 >> x2 >> y2;
        p = 0;
        s = 0;
        RectPS(x1, y1, x2, y2, p, s);
        std::cout << "P= " << p << " ,and S= " << s << "\n";






        //7-8 неделя


        //Начальный вклад в банк составил А денег. Через сколько месяцев сумма вклада
        //составит В денег, если каждый месяц сумма вклада увеличивается на Х процентов?

        float a, b, x,m;
        std::cout << "Write how much money you put in the bank, how much money do you want to receive, write interest rate.\n";
        std::cin >> a >> b >> x;
        m = 0;

        while (a < b) {
            m++;
            a += (a / 100) * x;
        }
        std::cout << "You need wait " << m << " months.\n";





        //Составить алгоритм (возможно, не самый оптимальный), находящий три
        //натуральных числа X, Y, Z, удовлетворяющих условию: 15x+12y+30z=270


        for (int x = 0; x <= 100; x++) {
            for (int y = 0; y <= 100; y++) {
                for (int z = 0; z <= 100; z++) {
                    if ((15 * x + 20 * y + 30 * z) == 270) {
                        std::cout << "X= " << x << " Y= " << y << " Z= " << z << "\n";
                    }
                }
            }
        }





        //Составить алгоритм, определяющий количество трёхзначных натуральных чисел, сумма цифр которого равна А.

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




        //Вычислить степень введенного числа (с помощью циклов).



        int xc, y, x;
        x = 1;
        std::cout << "Write Number and extent \n";
        std::cin >> xc >> y;
        for (int i = 1; i <= y; i++) {
            x *= xc;
        }
        std::cout << "X in your extent = "<<x;




        //Вычислить факториал введенного числа (с помощью циклов)



        int x,y;
        y = 1;
        std::cout << "Write factorial number \n";
        std::cin >> x;
        for (int i = 1; i <= x; i++)
            y *= i;
        std::cout << "Factorial you number = " << y;





        //Вывести на экран ряд натуральных чисел от Н до М с шагом Ш. Например, если
        //Н=10, М=35, Ш=5, то вывод должен быть таким: 10 15 20 25 30 35. Значения Н, М,
        //Ш указываются пользователем (считываются с клавиатуры или из файла).



        int m, n, h;
        std::cout << "Write M to N and step H \n";
        std::cin >> m >> n >> h;
        for (int i = m; i <= n; i += h) {
            std::cout << i<<" ";
        }




        //Пользователь задаёт число Ч и Х. Посчитать y: c y += (1 / 1 * x)+y += (1 / 2 * x)+...+y += (1 / K * x)

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




        //Протабулировать функцию (шаг и диапазон задаёт пользователь):N y = sqrt(2 + 3 * i) + 72 * i + tan(4 * i + 31)

        float x, a, b, y;
        std::cout << "Write A to B and step ";
        std::cin >> a >> b >> x;
        float i = a;
        while (i <= b-1) {
            i += x;
            y = sqrt(2 + 3 * i) + 72 * i + tan(4 * i + 31);
            std::cout << y << "\n";
        }


        //Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
        //равно номеру строки. Количество строк Н вводит пользователь (можно из файла).


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

