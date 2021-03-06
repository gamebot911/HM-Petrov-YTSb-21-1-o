#pragma once
#include <string>
#include<array>

const float pi = 3.14;

struct myTime {
    int hour;
    int minutes;
    int seconds;
};
struct Complex {
    float re;
    float im;

};
struct Robots {
    float dim;
    float weight;
    float max_speed;
};
struct Sensor {
    float val_max, val_min;
    float mis;
    float max_spd;
};
struct Rob_Plane {
    float propeller_speed;
    float screw_radius;
    float thrust_coefficient;
};
struct Rob_Car {
    float speed;
    float time;
    float number;

};
struct Points {
    float xC,yC;

};
struct workers {
    std::string (Familia);
    int vozrast;
    std::string(specialnost);
    int sr_oclad;
};
struct pasajars {
    std::string names;
    
};





void RectPS(float x1, float y1, float x2, float y2, float& p, float& s) {
    /*Описать функцию RectPS(x1, y1, x2, y2, P, S), вычисляющую периметр P и площадь
S прямоугольника со сторонами, параллельными осям координат, по координатам
(x1, y1), (x2, y2) его противоположных вершин (x1, y1, x2, y2) — входные, P и S —
выходные параметры вещественного типа. С помощью этой функцию найти
периметры и площади трех прямоугольников с данными противоположными
вершинами.*/

    float a, b, c;

    a = sqrt((0 - x1) * (0 - x1) + (0 - y1) * (0 - y1));
    b = sqrt((0 - x2) * (0 - x2) + (0 - y2) * (0 - y2));
    c = sqrt(a * a + b * b);
    p = a + b + c;
    s = a * b / 2;

}
void DigitCountSum(int k, int& c, int& s) {
    /*Описать процедуру DigitCountSum(K, C, S), находящую количество C цифр целого
положительного числа K, а также их сумму S (K — входной, C и S — выходные
параметры целого типа). С помощью этой процедуры найти количество и сумму
цифр для каждого из пяти данных целых чисел.*/

    while (k % 10) {
        s += k % 10;
        c++;
        k /= 10;
    }
}
void Swap(float& x, float& y) {
    /*Описать процедуру Swap(X, Y), меняющую содержимое переменных X и Y (X и Y
— вещественные параметры, являющиеся одновременно входными и выходными).
С ее помощью для данных переменных A, B, C, D последовательно поменять
содержимое следующих пар: A и B, C и D, B и C и вывести новые значения A, B, C,
D.*/

    float b;
    b = x;
    x = y;
    y = b;
}
void ShiftRight3(float& a, float& b, float& c) {
    /*Описать процедуру ShiftRight3(A, B, C), выполняющую правый циклический сдвиг:
значение A переходит в B, значение B — в C, значение C — в A (A, B, C —
вещественные параметры, являющиеся одновременно входными и выходными). С
помощью этой процедуры выполнить правый циклический сдвиг для двух данных
наборов из трех чисел: (A1, B1, C1) и (A2, B2, C2)*/

    float x;
    x = c;
    c = b;
    b = a;
    a = x;
}
void ShiftLeft3(float& a, float& b, float& c) {
    /*Описать процедуру ShiftLeft3(A, B, C), выполняющую левый циклический сдвиг:
значение A переходит в C, значение C — в B, значение B — в A (A, B, C —
вещественные параметры, являющиеся одновременно входными и выходными). С
помощью этой процедуры выполнить левый циклический сдвиг для двух данных
наборов из трех чисел: (A1, B1, C1) и (A2, B2, C2).*/

    float x;
    x = c;
    c = a;
    a = b;
    b = x;
}
float RingS(float r1, float r2) {
    /*Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца,
заключенного между двумя окружностями с общим центром и радиусами R1 и R2
(R1 и R2 — вещественные, R1 > R2). С ее помощью найти площади трех колец, для
которых даны внешние и внутренние радиусы. Воспользоваться формулой площади
круга радиуса R: S = π·R2. В качестве значения π использовать 3.14.*/

    float s1, s2, sr;
    s1 = pi * r1 * 2;
    s2 = pi * r2 * 2;
    sr = s2 - s1;
    return sr;
}
float Calc(float a, float b, int op) {
    /*Описать функцию Calc(A, B, Op) вещественного типа, выполняющую над
ненулевыми вещественными числами A и B одну из арифметических операций и
возвращающую ее результат. Вид операции определяется целым параметром Op: 
1— вычитание, 2 — умножение, 3 — деление, остальные значения — сложение. С
помощью Calc выполнить для данных A и B операции, определяемые данными
целыми N1, N2, N3.
*/

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
    /*Описать функцию Quarter(x, y) целого типа, определяющую номер координатной
четверти, в которой находится точка с ненулевыми вещественными координатами
(x, y). С помощью этой функции найти номера координатных четвертей для трех
точек с данными ненулевыми координатами.*/

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
    /*Описать функцию Even(K) логического типа, возвращающую TRUE, если целый
параметр K является четным, и FALSE в противном случае. С ее помощью найти
количество четных чисел в наборе из 10 целых чисел.*/

    if ((k % 2) == 0)
        return true;
    else
        return false;
}
bool IsPower5(int k) {
    /*Описать функцию IsPower5(K) логического типа, возвращающую TRUE, если целый
параметр K (> 0) является степенью числа 5, и FALSE в противном случае. С ее
помощью найти количество степеней числа 5 в наборе из 10 целых положительных
чисел.*/

    int x = 1;
    while (x < k)
        x *= 5;
    if (x == k)
        return true;
    else
        return false;
}
void TimeToHMS(int t, int& h, int& m, int& s) {
    /*Описать процедуру TimeToHMS(T, H, M, S), определяющую по времени T (в
секундах) содержащееся в нем количество часов H, минут M и секунд S (T —
входной, H, M и S — выходные параметры целого типа). Используя эту процедуру,
найти количество часов, минут и секунд для пяти данных отрезков времени T1, T2,
. . ., T5.*/

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
    /*Описать процедуру IncTime(H, M, S, T), которая увеличивает на T секунд время,
заданное в часах H, минутах M и секундах S (H, M и S — входные и выходные
параметры, T — входной параметр; все параметры — целые положительные). Дано
время (в часах H, минутах M, секундах S) и целое число T. Используя процедуру
IncTime, увеличить данное время на T секунд и вывести новые значения H, M, S.*/

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
    /*Описать функцию Leng(xA, yA, xB, yB) вещественного типа, находящую длину
отрезка AB на плоскости по координатам его концов: |AB|=
sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB)), (xA, yA, xB, yB — вещественные параметры). С
помощью этой функции найти длины отрезков AB, AC, AD, если даны координаты
точек A, B, C, D.*/

    return sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB));
}
void yotx(float x, float& y) {
    /*Реализовать функцию y=f(x). Протабулировать функцию.*/

    if (x > 3)
        y = 2 * x - 10;
    if (x == 3)
        y = 10;
    if (x < 3)
        y = (2 * x + 1) * (2 * x + 1);
}
bool timeS(struct myTime a, struct myTime b) {
    /*Написать функцию, которая сравнивает два времени. Возвращает true, если
первый аргумент больше второго.*/

    int at, bt;
    at = a.seconds + a.minutes * 60 + a.hour * 3600;
    bt = b.seconds + b.minutes * 60 + b.hour * 3600;
    if (at > bt)
        return true;
    else
        return false;
}
void ComplexRel(struct Complex a, struct Complex b) {
    /*Напишите функцию, которая будет сравнивать вещественную часть
комплексного числа.*/

    if (a.re > b.re)
        std::cout << "First real part > Second real part\n";
    else
        std::cout << "Second real part > First real part\n";
}
void RobSml(struct Robots a, struct Robots b) {
    /*Вывести
данные о самом маленьком роботе.*/

    float sml = a.dim;
    if (sml < b.dim) {
        std::cout << "First robot is smoller\n";
        std::cout << "Dimensions =" << a.dim << "\n";
        std::cout << "Weight =" << a.weight << "\n";
        std::cout << "Maximum speed =" << a.max_speed << "\n";
    }
    else {
        std::cout << "Second robot is smoller\n";
        std::cout << "Dimensions =" << b.dim << "\n";
        std::cout << "Weight =" << b.weight << "\n";
        std::cout << "Maximum speed =" << b.max_speed << "\n";
    }
}
void RobSpd(struct Robots a, struct Robots b) {
    /*Вывести
данные о самом тяжёлом роботе.*/

    float sml = a.weight;
    if (sml > b.weight) {
        std::cout << "First robot is heavier\n";
        std::cout << "Dimensions =" << a.dim << "\n";
        std::cout << "Weight =" << a.weight << "\n";
        std::cout << "Maximum speed =" << a.max_speed << "\n";
    }
    else {
        std::cout << "Second robot is heavier\n";
        std::cout << "Dimensions =" << b.dim << "\n";
        std::cout << "Weight =" << b.weight << "\n";
        std::cout << "Maximum speed =" << b.max_speed << "\n";
    }
}
void RobHeh(struct Robots a, struct Robots b) {
    /*Вывести
данные о самом быстром роботе.*/

    float sml = a.max_speed;
    if (sml > b.max_speed) {
        std::cout << "First robot is heavier\n";
        std::cout << "Dimensions =" << a.dim << "\n";
        std::cout << "Weight =" << a.weight << "\n";
        std::cout << "Maximum speed =" << a.max_speed << "\n";
    }
    else {
        std::cout << "Second robot is heavier\n";
        std::cout << "Dimensions =" << b.dim << "\n";
        std::cout << "Weight =" << b.weight << "\n";
        std::cout << "Maximum speed =" << b.max_speed << "\n";
    }
}
void SenMS(struct Sensor a, struct Sensor b) {
    /*Вывести данные о самом точном датчике.*/

    float sml = a.mis;
    if (sml < b.mis) {
        std::cout << "First sensor is most accurate\n";
        std::cout << "Max and Min values =" << a.val_max <<" and "<< a.val_min<< "\n";
        std::cout << "Accurate =" << a.mis << "\n";
        std::cout << "Maximum speed =" << a.max_spd << "\n";
    }
    else {
        std::cout << "Second sensor is most accurate\n";
        std::cout << "Max and Min values =" << b.val_max << " and " << b.val_min<< "\n";
        std::cout << "Accurate =" << b.mis << "\n";
        std::cout << "Maximum speed =" << b.max_spd << "\n";
    }
}
void SenLS(struct Sensor a, struct Sensor b) {
    /*Вывести данные о датчике с наименьшей
скоростью работы..*/

    float sml = a.max_spd;
    if (sml < b.max_spd) {
        std::cout << "First sensor is slowerst\n";
        std::cout << "Max and Min values =" << a.val_max << " and " << a.val_min << "\n";
        std::cout << "Accurate =" << a.mis << "\n";
        std::cout << "Maximum speed =" << a.max_spd << "\n";
    }
    else {
        std::cout << "Second sensor is slowerst\n";
        std::cout << "Max and Min values =" << b.val_max << " and " << b.val_min << "\n";
        std::cout << "Accurate =" << b.mis << "\n";
        std::cout << "Maximum speed =" << b.max_spd << "\n";
    }
}
void SenHV(struct Sensor a, struct Sensor b) {
    /*Вывести данные о датчике с наибольшим
диапазоном значений.*/

    float sml = a.val_max-a.val_min;
    if (sml > (b.val_max-b.val_min)) {
        std::cout << "First sensor volume is bigger\n";
        std::cout << "Max and Min values =" << a.val_max << " and " << a.val_min << "\n";
        std::cout << "Accurate =" << a.mis << "\n";
        std::cout << "Maximum speed =" << a.max_spd << "\n";
    }
    else {
        std::cout << "Second sensor volume is bigger\n";
        std::cout << "Max and Min values =" << b.val_max << " and " << b.val_min << "\n";
        std::cout << "Accurate =" << b.mis << "\n";
        std::cout << "Maximum speed =" << b.max_spd << "\n";
    }
}
void SenMedMS(struct Sensor a, struct Sensor b) {
    /*Вывести среднюю погрешность работы двух
датчиков.*/

    float medms = (a.mis + b.mis) / 2;
    std::cout << "Medium accurates = " << medms << '\n';
}
float ThrustP(struct Rob_Plane a) {
    float t;
    t = a.propeller_speed * a.screw_radius * a.thrust_coefficient;
    return t;
}
float RCway(struct Rob_Car a) {
    return a.speed * a.time;
}
bool SumNarr(int a, int b, int us) {
    switch (us)
    {
    case 1:
        if (a < b)
            return true;
        else
            return false;
        break;
    case 2:
        if (a > b)
            return true;
        else
            return false;
        break;
    case 3:
        if (a == b)
            return true;

    }
    
}
void MatrixCalc(int act) {
    //Реализовать сложение, вычитание, умножение, транспонирование матриц (разрешается фиксированный размер матриц).

    std::cout << "A matrix:\n";
    std::array<std::array < int, 10>, 10>a;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            a[i][j] = rand() %5;
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    std::cout << "B matrix:\n";
    std::array<std::array < int, 10>, 10>b;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            b[i][j] = rand() %3;
            std::cout << b[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    switch (act) {
    case 1:
        std::cout << "Sum matrix A and B = C:\n";
        std::array<std::array < int, 10>, 10>c;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                c[i][j] = a[i][j] + b[i][j];
                std::cout << c[i][j] << " ";
            }
            std::cout << "\n";
        }
        break;
    case 2:
        std::cout << "Difference matrix A and B = C:\n";
        std::array<std::array < int, 10>, 10>k;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                k[i][j] = a[i][j] - b[i][j];
                std::cout << k[i][j] << " ";
            }
            std::cout << "\n";
        }
        break;
    case 3:
        std::cout << " Product of matrix A and B = C:\n";
        std::array<std::array < int, 10>, 10>h;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                h[i][j] = 0;
                for (int s = 0; s < 10; s++) {
                    h[i][j] += a[i][s] * b[s][j];
                }
                std::cout << h[i][j] << " ";
            }
            std::cout << "\n";
        }
        break;
    case 4:
        std::cout << "Transpone A:\n";
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                std::cout << a[j][i] << " ";
            }
            std::cout << "\n";
        }
        std::cout << "\n";
        std::cout << "Transpone B:\n";
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                std::cout << b[j][i] << " ";
            }
            std::cout << "\n";
        }
        break;
    }
}
