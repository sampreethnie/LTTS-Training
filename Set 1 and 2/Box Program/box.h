#include<string>
class Box {
  int m_length,m_breadth,m_height;

public:
  Box();
  Box(int, int, int);
  Box (int);
  Box (const Box &);
  double volume();
  int getlength();
  int getbreadth();
  int getheight();
  void display();
};

