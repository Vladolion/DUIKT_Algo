#include <iostream>

void z1(){
    int a = 1, b = 4, c = 8;
    std::cout << a << " " << b << " " << c << std::endl;
    int n = 5;
    if(1 <= a && a <= n) std::cout << a << " ";
    if(1 <= b && b <= n) std::cout << b << " ";
    if(1 <= c && c <= n) std::cout << c << " ";

    std::cout << std::endl;
}

void z2(){
    int a = 2, b = 3, c = 5;
    std::cout << a << " " << b << " " << c << std::endl;

    if(a > b && a > c) std::cout << a << std::endl;
    if(b > a && b > c) std::cout << b << std::endl;
    if(c > a && c > b) std::cout << c << std::endl;
}

void z3(){
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    double a = 1;
    double s = 0;
    for(int i = 0; i < n; i++)
    {
        std::cout << a << " ";
        s += a;
        a /= -2;
    }
    std::cout<<std::endl << "Sum: " << s << std::endl;
}

void z4(){
    int n = 7;

    int i = 2;
    while(n%i!=0)
    {
        i++;
    }
    std::cout << i << std::endl;
}

void z5(){
    int first = 0, second = 1, next;
    int n = 10;
    for(int i = 0; i < n; ++i)
    {
        if(i <= 1)
            next = i;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        std::cout << next << " ";
    }
    std::cout<< std::endl;
}

void z6(){
    int rnum = 1 + rand() % 20;
    for(int i = 1; true; i++)
    {
        int guess;
        std::cout << "Guess a number: ";
        std::cin >> guess;

        if(guess <= 0 || guess >= 21)
        {
            std::cout << "Wrong input!"<<std::endl;
            i--;
            continue;
        }
        if(guess == rnum)
        {
            std::cout << "Correct!" << std::endl << "You gueesed the number in " << i << " attempt"<< (i > 1 ? "s": "") << "!";
            break;
        }
        else
        {
            std::cout << "Wrong!";
            if(guess > rnum)
            {
                std::cout << std::endl << " Try a smaller number!" << std::endl;
            }
            else
            {
                std::cout << std::endl << " Try a bigger number!" << std::endl;
            }
        }
    }
}

int main()
{
    std::cout << std::endl << "z1" << std::endl << "----------" << std::endl;
    z1();
    std::cout << std::endl << "z2" << std::endl << "----------" << std::endl;
    z2();
    std::cout << std::endl << "z3" << std::endl << "----------" << std::endl;
    z3();
    std::cout << std::endl << "z4" << std::endl << "----------" << std::endl;
    z4();
    std::cout << std::endl << "z5" << std::endl << "----------" << std::endl;
    z5();
    std::cout << std::endl << "z6" << std::endl << "----------" << std::endl;
    z6();
    std::cout << std::endl;
    return 0;
}