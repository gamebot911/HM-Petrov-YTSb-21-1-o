#include <iostream>

int main()
{
    //6 неделя
    float x, y;
    float r = 1;
    std::cout << "Wright X and Y coordinate \n";
    std::cin >> x >> y;
    float l = sqrt(x * x + y * y);
    if (l < r) {
        if (y < (x/2)) {
            std::cout << "Yes";
         }
        else {
            std::cout << "No";
         }
    }
    else {
        std::cout << "No";
    }

/*
    float x, y;
    float r = 1;
    std::cout << "Wright X and Y coordinate \n";
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
*/
        /*
        // 5 неделя
        int x, y;
        y = 0;
        std::cout << "Wrigt x \n";
        std::cin >> x;

        if (x > 5)
            y = 2 * (x*x) + 10;
        if (x < 5)
            y = 2 * abs(x+6)-(x*x);
        if (x == 0)
            y = 0;

        std::cout << "y = "<<y<< "\n";

        int x, y;
        y = 0;
        std::cout << "Wrigt x \n";
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

