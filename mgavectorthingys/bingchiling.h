
#ifndef BINGCHILING_H
#define BINGCHILING_H

#include <iostream>
#include <string>
using namespace std;

class bingchiling
{
public:
    struct satella{
        int data;
        satella* next;
    };

    satella* head = NULL;

    void addsatella(int a);
    void displaytella();



};

#endif
