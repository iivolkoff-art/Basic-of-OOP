#include <iostream>

using namespace std;

class Numbers
{
private:
    double m_a;
    double m_b;
    double m_c;

public:
    void setValues(double a, double b, double c)
    {
        m_a = a;
        m_b = b;
        m_c = c;
    }

    void print()
    {
        cout << "<" << m_a << "," << m_b << "," << m_c << ">" << endl;
    }
};


int main()
{
    Numbers point1;
    point1.setValues(3.0, 4.0, 5.0);
    point1.print();

    Numbers point2;
    point2.setValues(4.0, 9.0, 5.0);
    point2.print();
}