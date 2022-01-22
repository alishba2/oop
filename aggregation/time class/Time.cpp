#include<iostream>
#include "Time.h"
using namespace std;

// CONSTRUCTOR

Time :: Time(int s, int m, int h)
{
    hr =h ;
    min = m;
    sec = s;
}
 


// DISPLAY FUNCTION DEFINATION

void Time:: Display(){
    cout<< hr << ":"<< min<< ":"<< sec;
}

bool Time :: operator == (Time temp){
    if(hr== temp.hr){
        if(min==temp.min){
            if(sec == temp.sec){
                return true;
            }
        }
       
    }
     return false;


}
bool Time ::operator!=(Time temp){
    if(hr== temp.hr){
        if(min==temp.min){
            if(sec == temp.sec){
                return false;
            }
        }
        return true;
    }


}
// bool Time ::operator>(Time temp){
//     if(hr < temp.hr){
//         return true;
//     }
//     else if(hr > temp.hr){
//         return false;
//     }
//     else
//     {
//         if(min < temp.min){
//             return true;
//         }
//         else if(min > temp.min){
//             return false;
//         }
//         if(min == temp.min){
//             if(sec = temp.sec){
//                 return true;
//             }
//             else return false;

    
//         }
//     }

// }
// bool Time ::operator>(Time temp){
//     if(hr < temp.hr){
//         return true;
//     }
//     else if(hr > temp.hr){
//         return false;
//     }
//     else
//     {
//         if(min < temp.min){
//             return true;
//         }
//         else if(min > temp.min){
//             return false;
//         }
//         if(min == temp.min){
//             if(sec <= temp.sec){
//                 return true;
//             }
//             else return false;
            
    
//         }
//     }

// }
        

        
bool Time ::operator<(Time temp){
    if(hr < temp.hr){
        return false;
    }
    else if(hr > temp.hr){
        return true;
    }
    else
    {
        if(min < temp.min){
            return false;
        }
        else if(min > temp.min){
            return true;
        }
        if(min == temp.min){
            if(sec = temp.sec){
                return false;
            }
            else return true;
            
    
        }
    }

}
    

        
bool Time ::operator<=(Time temp){
    if(hr < temp.hr){
        return false;
    }
    else if(hr > temp.hr){
        return true;
    }
    else
    {
        if(min < temp.min){
            return false;
        }
        else if(min > temp.min){
            return true;
        }
        if(min == temp.min){
            if(sec = temp.sec){
                return false;
            }
            else return true;
            
    
        }
    }

}
    

        
bool Time ::operator>(Time temp){
    if(hr < temp.hr){
        return false;
    }
    else if(hr > temp.hr){
        return true;
    }
    else
    {
        if(min < temp.min){
            return false;
        }
        else if(min > temp.min){
            return true;
        }
        if(min == temp.min){
            if(sec = temp.sec){
                return false;
            }
            else return true;
            
    
        }
    }

}
    
        
bool Time ::operator >=(Time temp){
    if(hr < temp.hr){
        return false;
    }
    else if(hr > temp.hr){
        return true;
    }
    else
    {
        if(min < temp.min){
            return false;
        }
        else if(min > temp.min){
            return true;
        }
        if(min == temp.min){
            if(sec >= temp.sec){
                return false;
            }
            else return true;
            
    
        }
    }

}
    
