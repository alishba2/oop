
class  Time

{
    private:
        int hr;
        int min;
        int sec;
    
    public:
        Time();
        void Display();
        bool IsValid();
        void Get();
        void increment();
        void decrement();

};
