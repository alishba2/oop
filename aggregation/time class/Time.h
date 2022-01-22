# pragma once
class  Time

{
    private:
        int hr;
        int min;
        int sec;
    
    public:
        Time(int sec , int min, int hr);
        void Display();
        bool operator == (Time temp);
        bool operator !=(Time temp);
        bool operator <(Time T);
        bool operator <=(Time T);
        bool operator > (Time T);
        bool operator >=(Time t);
      

};
