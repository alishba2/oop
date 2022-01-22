// DERIVED CLASS (FROM PUBLICATION)
#pragma once
#include"publication.h"

class book : public publication{

    int no_of_paper;

    public:
    book( string t , int p, int n);
    void show();
    bool Isoversized();

};