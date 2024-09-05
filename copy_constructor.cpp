//To find area of a wall using copy constructors
#include<iostream>
using namespace std;
class Wall
{
    double length;
    double height;
    
    public: 
    Wall(double len, double hgt)
    {
        length = len;
        height = hgt; 
    }
    Wall(Wall &obj)
    {
        length = obj.length;
        height = obj.height;
    }
    double calculatedArea()
    {
        return length*height;
    }
};
int main()
{
    Wall wall1(10.5, 8.6);
    Wall wall2=wall1;
    
    cout<<"Area of Wall 1: "<<wall1.calculatedArea()<<endl;
    cout<<"Area of Wall 2: "<<wall2.calculatedArea();
}

/*
OUTPUT:
Area of Wall 1: 90.3
Area of Wall 2: 90.3
*/
