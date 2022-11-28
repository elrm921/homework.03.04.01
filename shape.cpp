#define _USE_MATH_DEFINES
#include"shape.h"
#include<cmath>

Line::Line(int _x1, int _x2, int _y1, int _y2)
{
    x1 = _x1; y1 = _y1;
    x2 = _x2; y2 = _y2;
    square = 0;
    volume = 0;
};

Shape Line::shift(int m, int n, int k)
{
    Shape shape = *(this);
    shape.x1 += m; shape.y1 += n;
    shape.x2 += m; shape.y2 += n;
    return shape;
};
Shape Line::scaleX(int a)
{
    Shape shape = *(this);
    shape.x1 *= a;
    shape.x2 *= a;
    return shape;
}
Shape Line::scaleY(int d)
{
    Shape shape = *(this);
    shape.x1 *= d;
    shape.x2 *= d;
    return shape;
}
Shape Line::scaleZ(int e)
{
    Shape shape = *(this);
		shape.x1 *= e;
		shape.x2 *= e;
    return shape;
}
Shape Line::scale(int s)
{
    Shape shape = *(this);
    shape.x1 /= s; shape.y1 /= s;
    shape.x2 /= s; shape.y2 /= s;
    return shape;
}

Square::Square(int _x1, int _x2, int _x3, int _x4, int _y1, int _y2, int _y3, int _y4)
{
    x1 = _x1; y1 = _y1;
    x2 = _x2; y2 = _y2;
    x3 = _x3; y3 = _y3;
    x4 = _x4; y4 = _y4;
    int a = abs(x1 - x2);
	int b = abs(y1 - y2);
    square = a * b;
    volume = 0;
};

Shape Square::shift(int m, int n, int k)
{
    Shape shape = *(this);
    shape.x1 += m; shape.y1 += n;
    shape.x2 += m; shape.y2 += n;
    shape.x3 += m; shape.y3 += n;
    shape.x4 += m; shape.y4 += n;
    return shape;
};
Shape Square::scaleX(int a)
{
    Shape shape = *(this);
    shape.x1 *= a;
    shape.x2 *= a;
    shape.x3 *= a;
    shape.x4 *= a;
    return shape;
}
Shape Square::scaleY(int d)
{
    Shape shape = *(this);
    shape.x1 *= d;
    shape.x2 *= d;
    shape.x3 *= d;
    shape.x4 *= d;
    return shape;
}
Shape Square::scaleZ(int e)
{
    Shape shape = *(this);
    shape.x1 *= e;
    shape.x2 *= e;
    shape.x3 *= e;
    shape.x4 *= e;
    return shape;
}
Shape Square::scale(int s)
{
    Shape shape = *(this);
    shape.x1 /= s; shape.y1 /= s;
    shape.x2 /= s; shape.y2 /= s;
    shape.x3 /= s; shape.y3 /= s;
    shape.x4 /= s; shape.y4 /= s;
    return shape;
}

Cube::Cube(int _x1, int _y1, int _z1, int _x2, int _y2, int _z2, int _x3, int _y3, int _z3, int _x4, int _y4, int _z4, int _x5, int _y5, int _z5, int _x6, int _y6, int _z6, int _x7, int _y7, int _z7, int _x8, int _y8, int _z8)
{
    x1 = _x1; y1 = _y1; z1 = _z1;
    x2 = _x2; y2 = _y2; z2 = _z2;
    x3 = _x3; y3 = _y3; z3 = _z3;
    x4 = _x4; y4 = _y4; z4 = _z4;
    x5 = _x5; y5 = _y5; z5 = _z5;
    x6 = _x6; y6 = _y6; z6 = _z6; 
    x7 = _x7; y7 = _y7; z7 = _z7;
    x8 = _x8; y8 = _y8; z8 = _z8;
    int a = abs(x1 - x2);
	int b = abs(y1 - y2);
	int c = abs(z1 - z2);
    square = 2 * a * b + 2 * a * c + 2 * b * c;
    volume = a * b * c;
};

Shape Cube::shift(int m, int n, int k)
{
    Shape shape = *(this);
    shape.x1 += m; shape.y1 += n; shape.z1 += k;
    shape.x2 += m; shape.y2 += n; shape.z2 += k;
    shape.x3 += m; shape.y3 += n; shape.z3 += k;
    shape.x4 += m; shape.y4 += n; shape.z4 += k;
    shape.x5 += m; shape.y5 += n; shape.z5 += k;
    shape.x6 += m; shape.y6 += n; shape.z6 += k;
    shape.x7 += m; shape.y7 += n; shape.z7 += k;
    shape.x8 += m; shape.y8 += n; shape.z8 += k;
    return shape;
};
Shape Cube::scaleX(int a)
{
    Shape shape = *(this);
    shape.x1 *= a;
    shape.x2 *= a;
    shape.x3 *= a;
    shape.x4 *= a;
    shape.x5 *= a;
    shape.x6 *= a;
    shape.x7 *= a;
    shape.x8 *= a;
    return shape;
}
Shape Cube::scaleY(int d)
{
    Shape shape = *(this);
    shape.x1 *= d;
    shape.x2 *= d;
    shape.x3 *= d;
    shape.x4 *= d;
    shape.x5 *= d;
    shape.x6 *= d;
    shape.x7 *= d;
    shape.x8 *= d;
    return shape;
}
Shape Cube::scaleZ(int e)
{
    Shape shape = *(this);
    shape.x1 *= e;
    shape.x2 *= e;
    shape.x3 *= e;
    shape.x4 *= e;
    shape.x5 *= e;
    shape.x6 *= e;
    shape.x7 *= e;
    shape.x8 *= e;
    return shape;
}
Shape Cube::scale(int s)
{
    Shape shape = *(this);
    shape.x1 /= s; shape.y1 /= s; shape.z1 /= s;
    shape.x2 /= s; shape.y2 /= s; shape.z2 /= s;
    shape.x3 /= s; shape.y3 /= s; shape.z3 /= s;
    shape.x4 /= s; shape.y4 /= s; shape.z4 /= s;
    shape.x5 /= s; shape.y5 /= s; shape.z5 /= s;
    shape.x6 /= s; shape.y6 /= s; shape.z6 /= s;
    shape.x7 /= s; shape.y7 /= s; shape.z7 /= s;
    shape.x8 /= s; shape.y8 /= s; shape.z8 /= s;
    return shape;
}

Circle::Circle(int _x1, int _y1, double R)
{
    x1 = _x1; y1 = _y1;
    radius = R;
    square = M_PI * R * R;
}

Cylinder::Cylinder(int _x1, int _y1, double R, double H)
{
    x1 = _x1; y1 = _y1;
    radius = R;
    height = H;
    square = M_PI * R * R + 2 * R * height;
}
