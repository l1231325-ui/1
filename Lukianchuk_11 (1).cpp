#include <iostream>
#include <cmath>
using namespace std;


class Vector3D
{
 double m_x;
 double m_y;
 double m_z;
 friend class Point3D;
 double length()
 {
  return sqrt(m_x*m_x+m_y*m_y+m_z*m_z);
 }
 void normalize()
 {
  m_x/=length();
  m_y/=length();
  m_z/=length();
 }
public:
 Vector3D(double x = 0.0, double y = 0.0, double z = 0.0)
 : m_x(x), m_y(y), m_z(z)
 {
 }
 void print(){
 cout << "Vector(" <<
 m_x << " , " <<
 m_y << " , " <<
 m_z << ")" << endl;
 }
};
class Point3D
{
 double m_x;
 double m_y;
 double m_z;
public:
 Point3D(double x = 0.0, double y = 0.0, double z = 0.0)
 : m_x(x), m_y(y), m_z(z) {}
 void print()
 {
 cout << "Point(" <<
 m_x << " , " <<
 m_y << " , " <<
 m_z << ")" << endl;
 }
 Vector3D getUnitVectortoOrigin()
 {
   Vector3D v(0-m_x, 0-m_y, 0-m_z);
   v.normalize();
   return v;

 }
};






int main() 
{
    Point3D p(1, 2, 3);
    p.print();
    Vector3D a = p.getUnitVectortoOrigin();
    a.print();
}