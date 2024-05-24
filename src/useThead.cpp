#include "useThead.h"
#include <thread>
#include<iostream>
using namespace std;
useThread::useThread()
{
}

useThread::~useThread()
{
}

void useThread::usefunc1()
{
    thread t;
    t.detach();
    printf("this is    help");
}
