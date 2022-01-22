# pragma once
#include"item.h"
#include"utilityItem.h"
#include "foodItem.h"

class mall {
    item *I[4];

    public:
    void getInfo();
    void FindByProductId();
    void UpdateInfo();
    void DisplayData();
    void MinPrice();
};
