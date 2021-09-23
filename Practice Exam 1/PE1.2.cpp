#include<iostream>
#include<string>
#include<cmath>

using namespace std;

/*
  Base class Point2D represents a point in two dimensional space
*/
class Point2D {
    private:
        double x; 
        double y;   

    public:     
        Point2D(){
            x = 0.0;
            y = 0.0;
        }

        Point2D(double x1, double y1){
            this->setX(x1);
            this->setY(y1);
        }
        
        // Setters
        void setX(double x2){x = x2;}
        void setY(double y2){y = y2;}

        // Getters 
        double getX(){return x;}
        double getY(){return y;}

        /*
        *   Returns the distance of the target object and the parameter Point2D p2.
        */
        double distance(Point2D p2){
            double deltaX = p2.getX() - this->getX();
            double deltaY = p2.getY() - this->getY();
            return sqrt(deltaX * deltaX + deltaY * deltaY);
        } 
};


/*
  Triangle class without side lengths methods implemented
*/
class Triangle {
    private:
        Point2D point1;
        Point2D point2;
        Point2D point3;
    
    public:

        /*
        * Constructs a Triangle object with the given parameters
        */
        Triangle(Point2D p1, Point2D p2, Point2D p3) {
            point1 = p1;
            point2 = p2;
            point3 = p3;
        }

        /*
        * Constructs a Triangle object with the same properties (points)
        * as the parameter Triangle, e.g. copies the target Triangle.
        */
        Triangle(Triangle &t2);

        // Getters
        Point2D getP1(){ return point1; }
        Point2D getP2(){ return point2; }
        Point2D getP3(){ return point3; }

        /*
        * Returns the perimeter of the target Triangle object
        * The perimeter is the sum of the lengths of the sides
        * HINT: Check for useful methods in the Point2D class
        */
        double perimeter();
        
        /*
        * Returns the area of the target Triangle object
        * HINT: Use Heron's formula of area using 3 sides
        */
        double area();
        
        /* 
        * Return a NEW Triangle that represents the multiplication of the target
        * Triangle by k units all around.
        */
        Triangle multiply(double k);
        
        /*
        * Return the String equilateral, isosceles or scalene depending
        * on the similarity of the sides of the triangle given.
        */
        std::string findType();

        /*
        * Return length of side A of triangle, distance from P1 -> P2
        */
        double getSideALength();

        /*
        * Return length of side B of triangle, distance from P2 -> P3
        */
        double getSideBLength();

        /*
        * Return length of side C of triangle, distance from P3 -> P1
        */
        double getSideCLength();
};

/*
* Constructs a Triangle object with the same properties (points)
* as the parameter Triangle, e.g. copies the target Triangle.
*/
Triangle::Triangle(Triangle &t2) {
    this->point1=t2.getP1();
    this->point2=t2.getP2();
    this->point3=t2.getP3();
    // YOUR CODE HERE

}


/*
* Returns the perimeter of the target Triangle object
* The perimeter is the sum of the lengths of the sides
* HINT: You may assume that the functions: getSideALength(), 
* getSideBLength() and getSideCLength() are available for use 
* for this question.
*/
double Triangle::perimeter() {
    // YOUR CODE HERE
    return this->getSideALength()+this->getSideBLength()+this->getSideCLength();  
}


/*
* Returns the area of the target Triangle object
* HINT 1: Use Heron's formula of area using 3 sides
* HINT 2: You may assume that the functions: getSideALength(), 
* getSideBLength() and getSideCLength() are available for use 
* for this question.
*/
double Triangle::area() {
    double s=(this->getSideALength()+this->getSideBLength()+this->getSideCLength())/2;
    // YOUR CODE HERE
    return sqrt(s*(s-this->getSideALength())*(s-this->getSideBLength())*(s-this->getSideCLength()));
}


/* 
* Return a NEW Triangle that represents the multiplication of the target
* Triangle by k units all around.
*/
Triangle Triangle::multiply(double k) {
    Point2D p1(this->point1.getX()*k,this->point1.getY()*k);
    Point2D p2(this->point2.getX()*k,this->point2.getY()*k);
    Point2D p3(this->point3.getX()*k,this->point3.getY()*k);// YOUR CODE HERE
    Triangle res(p1,p2,p3);
    return res; // Dummy return
}


/*
* Return the String equilateral, isosceles or scalene depending
* on the similarity of the sides of the triangle given.
*/
string Triangle::findType() {
    double s1=this->point1.distance(this->point2);
    double s2=this->point2.distance(this->point3);
    double s3=this->point1.distance(this->point3);

    if(s1==s2&&s2==s3){
      return "Equilateral";
    }

    else if(s1==s2||s1==s3||s2==s3){
      return "Isosceles";
    }

    else{
      return "Scalene";
    }
    // YOUR CODE HERE
    return "type"; // Dummy return
}


/*
* Return length of side A of triangle, distance from P1 -> P2
*/
double Triangle::getSideALength(){
    // YOUR CODE HERE
    return this->point1.distance(this->point2);
}


/*
* Return length of side B of triangle, distance from P2 -> P3
*/
double Triangle::getSideBLength(){
    // YOUR CODE HERE
    return this->point2.distance(this->point3);
}


/*
* Return length of side C of triangle, distance from P3 -> P1
*/
double Triangle::getSideCLength(){
    // YOUR CODE HERE
    return this->point1.distance(this->point3);
}


int main()
{
  Triangle t1(Point2D(0,0), Point2D(4,0), Point2D(2,4));
  Triangle t2(t1);
    cout << "The triangles have equal P1: " << ((t1.getP1().getX() == t2.getP1().getX()) && (t1.getP1().getY() == t2.getP1().getY())) << endl;

    return 0;
}

