class Point {
 int m_x,m_y;

 public:
     Point();
     Point(int, int);
     Point (const Point &);

     double distancefromorigin();
     int quadrant ();
     int isOrigin();
     int isOnYAxis();
     void display();
     int getx();
     int gety();

};
