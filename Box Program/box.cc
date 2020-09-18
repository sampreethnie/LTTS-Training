#include<iostream>
#include "box.h"
Box::Box() :
    m_length(0), m_breadth(0), m_height(0) {

}
Box::Box(int a, int b, int c) :
  m_length(a), m_breadth(b), m_height(c) {

}
Box::Box(const Box& ref) :
        m_length(ref.m_length), m_breadth(ref.m_breadth),
                                              m_height(ref.m_height) {

}
double Box::volume() {
  return(m_length * m_breadth * m_height);
}

int Box::getlength() {
  return m_length;
}
int Box :: getbreadth() {
  return m_breadth;
}
int Box :: getheight()
{
    return m_height;
}

void Box::display() {
    std::cout << m_length << "," << m_breadth << ","
                                         << m_height << "\n";
}

