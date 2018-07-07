#ifndef FUNCTIONS
#define FUNCTIONS

#include <string>

class entity{
private:
    static int instances;
    int ID;
    double x, y;
    std::string name;
public:
    //Constructors
    entity();
    entity(std::string nam, double pos_x = 0, double pos_y = 0);
    ~entity();
    //Set functions
    void setName (std::string name);
    void setPos (double pos_x, double pos_y);
    void setX (double pos_x);
    void setY (double pos_y);
    //Interface functions
    void show();

    //Operators
    entity operator+(const entity & en) const;
};



#endif //FUNCTIONS