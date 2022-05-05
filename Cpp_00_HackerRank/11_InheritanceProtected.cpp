/*
 * 11_InheritanceProtected.cpp
 *
 *  Created on: May 3, 2022
 *      Author: anura
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <array>
#include <set>
#include <list>
#include <map>
#include <unordered_map>
#include <sstream>
#include <iomanip>

using namespace std;

class Rectangle{
  protected:
  int width;
  int height;
  public:
   void display(){
      cout<<width<<" "<<height<<endl;
  }
};
class RectangleArea:public Rectangle{
    private:
    public:
    void read_input(){
        cin>>width>>height;

    }
      void display(){
      cout<<width*height<<endl;
  }

};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;

    /*
     * Read the width and height
     */
    r_area.read_input();

    /*
     * Print the width and height
     */
    r_area.Rectangle::display();

    /*
     * Print the area
     */

    r_area.display();

    return 0;
}



