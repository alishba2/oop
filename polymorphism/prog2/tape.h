#pragma once 

#include"publication.h"
#include<string>
class tape : public publication{

    int timeOfPlaying;

    public:
    tape(string t , int p , int T);
    void show();
    bool Isoversized();


};