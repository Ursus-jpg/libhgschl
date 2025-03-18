#include "libhgschl.h"
#include <iostream>

std::string testtitletab = "=========================================== ";

void wypisztablicetest()
{
    std::cout<<testtitletab<<"void wypisztablice(int a[], int n)\n\n";

    int a[] = {1,6,2,5,3};

    std::cout<<"Argumenty: (a,5)\nOczekiwany wynik: 1 6 2 5 3\n";
    wypisztablice(a,5);
    std::cout<<"\n";

    std::cout<<"Argumenty: (a,1)\nOczekiwany wynik: 1\n";
    wypisztablice(a,1);

    return;
}

void wypelnijlosowotablicetest()
{
    std::cout<<testtitletab<<"void wypelnijlosowotablice(int t[], int n, int a = 0, int b = 10)\n\n";

    int a[15];

    std::cout<<"Argumenty: (a,15,3,9)\nOczekiwany wynik: tablica z 15 elementami wygenerowanymi losowo, w zakresie od 3 do 9 wlacznie.\n";
    wypelnijlosowotablice(a,15,3,9);
    wypisztablice(a,15);
    std::cout<<"\n";

    std::cout<<"Argumenty: (a,15,3,9)\nOczekiwany wynik: tablica z 15 elementami wygenerowanymi losowo, w zakresie od 3 do 9 wlacznie, rozna od poprzedniej.\n";
    wypelnijlosowotablice(a,15,3,9);
    wypisztablice(a,15);
    std::cout<<"\n";

    return;
}

void szybkiepotegowanietest()
{
    std::cout<<testtitletab<<"int szybkiepotegowanie(int a, int b, bool* error = NULL)\n\n";
    std::cout<<"Argumenty: (2,8)\nOczekiwany wynik: 2^8 (256)\n";
    std::cout<<szybkiepotegowanie(2,8)<<"\n\n";

    std::cout<<"Argumenty: (0,0)\nOczekiwany wynik: 0^0 (1)\n";
    std::cout<<szybkiepotegowanie(0,0)<<"\n\n";

    std::cout<<"Argumenty: (1,123)\nOczekiwany wynik: 1^123 (1)\n";
    std::cout<<szybkiepotegowanie(1,123)<<"\n\n";

    std::cout<<"Argumenty: (-3,5)\nOczekiwany wynik: (-3)^5 (-243)\n";
    std::cout<<szybkiepotegowanie(-3,5)<<"\n\n";

    std::cout<<"Argumenty: (2,-5,&error)\nOczekiwany wynik: Wykladnik ujemny (-1)\n";
    bool error = false;
    std::cout<<szybkiepotegowanie(2,-5, &error)<<"\n";
    if(error) std::cout<<"Blad. Wykladnik ujemny\n\n";

    return;
}

void parzystatest()
{
    std::cout<<testtitletab<<"bool parzysta(int a)\n\n";
    std::cout<<"Argument: 5\nOczekiwany wynik: 0\n";
    std::cout<<parzysta(5)<<"\n\n";

    std::cout<<"Argument: 4\nOczekiwany wynik: 1\n";
    std::cout<<parzysta(4)<<"\n\n";

    std::cout<<"Argument: 0\nOczekiwany wynik: 1\n";
    std::cout<<parzysta(0)<<"\n\n";

    std::cout<<"Argument: -3\nOczekiwany wynik: 0\n";
    std::cout<<parzysta(-3)<<"\n\n";

    return;
}

void intswaptest()
{
    std::cout<<testtitletab<<"void intswap(int& a, int& b)\n\n";

    std::cout<<"Argumenty: a = 1, b = 5\nOczekiwany wynik: b = 5, a = 1\n";
    int a = 1;
    int b = 5;
    intswap(a,b);
    std::cout<<"a = "<<a<<", b = "<<b<<"\n\n";

    std::cout<<"Argumenty: t[0] = 7, t[1] = 4\nOczekiwany wynik: t[0] = 4, t[1] = 7\n";
    int t[2];
    t[0] = 7;
    t[1] = 4;
    intswap(t[0],t[1]);
    std::cout<<"t[0] = "<<t[0]<<", t[1] = "<<t[1]<<"\n\n";

    return;
}

void bubblesorttest()
{
    std::cout<<testtitletab<<"void bubblesort(int a[], int n)\n\n";
    int a[6] = {6,5,4,3,2,1};
    std::cout<<"Argumenty: ({6,5,4,3,2,1},6)\nOczekiwany wynik: {1,2,3,4,5,6}\n";
    bubblesort(a,6);
    wypisztablice(a,6);

    int b[] = {2,1};
    std::cout<<"\nArgumenty: ({2,1},2)\nOczekiwany wynik: {1,2}\n";
    bubblesort(b,2);
    wypisztablice(b,2);

    int c[] = {6};
    std::cout<<"\nArgumenty: ({6},1)\nOczekiwany wynik: {6}\n";
    bubblesort(c,1);
    wypisztablice(c,1);

    int d[] = {2,1,6,2,5,8,1,214,-6,0};
    std::cout<<"\nArgumenty: ({2,1,6,2,5,8,1,214,-6,0},10)\nOczekiwany wynik: {-6,0,1,1,2,2,5,6,8,214}\n";
    bubblesort(d,10);
    wypisztablice(d,10);

    std::cout<<"\n";

    return;
}

int main()
{
    std::cout<<"\n";

    bubblesorttest();

    intswaptest();

    parzystatest();

    szybkiepotegowanietest();

    srand(time(NULL));
    wypelnijlosowotablicetest();

    wypisztablicetest();
}