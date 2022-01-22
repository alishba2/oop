#pragma once
#include"publication.h"
#include"book.h"
#include "tape.h"

#include<fstream>
class list{
    publication *P[6];
    public:
    void Readfile();
    void show_Publication();
    void OverSized();
    void ShowPublicationByTitle();

      

};