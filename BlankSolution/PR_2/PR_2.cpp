#include <iostream>
#include <vector>

void z1(){

    const int n = 14;
    int m = 50;

    std::cout << m << std::endl;

    int x[n];
    std::vector <int> y;

    for(int i = 0; i < n; i++)
    {
        x[i] = -100 + rand() % 201;
        std::cout << x[i] << " ";
    }
    std::cout << std::endl;

    for(int i = 0; i < n; i++)
    {
        if(abs(x[i]) > m)
        {
            y.push_back(x[i]);
        }
    }

    for(int i = 0; i < y.size(); i++)
    {
        std::cout << y[i] << " ";
    }
    std::cout << std::endl;
}

void z2(){
    const int n = 14;
    int a[n];

    for(int i = 0; i < n; i++)
    {
        a[i] = -50 + rand() % 101;

        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            a[i] *= -1;
        }
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

void z3(){
    int bills[] = {1000,500,200,100,50,20,10,5,2,1};

    int a;
    std::cout << "Enter amount of money to withdraw: ";
    std::cin >> a;

    for(int i = 0; i < 10; i++)
    {
        while(a - bills[i] >= 0)
        {
            std::cout << bills[i] << ", ";
            a -= bills[i];
        }
    }
    std::cout << std::endl;
}

void z4(){
    const int n1 = 6;
    const int n2 = 8;

    int a[n1];
    int b[n2];
    int c[n1 + n2];

    for(int i = 0; i < n1; i++)
    {
        a[i] = rand() % 100;
        std::cout << a[i]<< " ";
    }
    std::cout << std::endl;
    for(int i = 0; i < n2; i++)
    {
        b[i] = rand() % 100;
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;

    for(int i = 0; i < n1 + n2; i++)
    {
        c[i] = i < n1 ? a[i] : b[i - n1];
    }

    for(int i = 1; i < n1+n2;)
    {
        if(c[i - 1] > c[i])
        {
            int temp = c[i];
            c[i] = c[i - 1];
            c[i - 1] = temp;
            i = 1;
        }
        else i++;
    }
    std::cout << std::endl;
    for(int i = 0; i < n1 + n2; i++)
    {
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;
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
    std::cout << std::endl;
}