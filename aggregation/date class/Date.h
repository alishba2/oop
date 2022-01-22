class Date{
    private:
    int day;
    int month;
    int year;

    public:
    Date();
    Date(int d, int m , int y);
    void Display();
    bool IsValid();
    void Get();
    void NextDate();
    void PreviousDate();
    void IsGreaterThan(Date d2, Date d3);
    void CalculateNoOfDays(Date d2 , Date d3);

  
};