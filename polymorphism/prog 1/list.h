# pragma once

#include<iostream>
#include<string>
#include"notebook.h"
#include "Enotebook.h"
#include"pnotebook.h"

class list{
    notebook *P[4];
    Enotebook E[4];
    pnotebook p[4];
    public:;

    void GetData();
    void InfoOfBooks();
    void TotalPrice();
    void MinPrice();
    void displayingOversized();


};