#define _USE_MATH_DEFINES
#include<iostream>
#include<triangle.h>
#include<circle.h>
#include<rectangle.h>
#include<square.h>
#include<complement.h>
#include<union.h>
#include<intersection.h>
#include<point.h>
#include<basic.h>
#include<region.h>
#include<annulus.h>
#include<math.h>
#include<lshape.h>

using namespace std;

// ==>>>>     For better understanding of the program read the readme first.   <<<<==

void checkerTriangle(){
   cout<<"Checker code for Triangle"<<endl;

   Point a(0,0);
   Point b(2,2);
   Point c(4,0);

   Triangle t(a,b,c);

   Point check1(2,1);
   Point check2(5,6);
   
   if(t.contains(check1)) cout<<"Point ("<<check1.x<<','<< check1.y<<") Inside"<<endl;
   else cout<<"Point ("<<check1.x<<','<< check1.y<<") Outside"<<endl;

   if(t.contains(check2)) cout<<"Point ("<<check2.x<<','<< check2.y<<") Inside"<<endl;
   else cout<<"Point ("<<check2.x<<','<< check2.y<<") Outside"<<endl;

   Point shift(3,4); // shift by 3 units in +x and 4 units in +y; 
   t.translate(shift);

   cout<<"After Translating"<<endl;

   if(t.contains(check1)) cout<<"Point ("<<check1.x<<','<< check1.y<<") Inside"<<endl;
   else cout<<"Point ("<<check1.x<<','<< check1.y<<") Outside"<<endl;

   if(t.contains(check2)) cout<<"Point ("<<check2.x<<','<< check2.y<<") Inside"<<endl;
   else cout<<"Point ("<<check2.x<<','<< check2.y<<") Outside"<<endl;

   Point shift1(-3,-4);
   t.translate(shift1);
   t.rotate(M_PI/2);
   
   cout<<"After rotating"<<endl;

   check1.x = -1;
   check1.y = 2;
   check2.x = 3;
   check2.y = 0;

   if(t.contains(check1)) cout<<"Point ("<<check1.x<<','<< check1.y<<") Inside"<<endl;
   else cout<<"Point ("<<check1.x<<','<< check1.y<<") Outside"<<endl;

   if(t.contains(check2)) cout<<"Point ("<<check2.x<<','<< check2.y<<") Inside"<<endl;
   else cout<<"Point ("<<check2.x<<','<< check2.y<<") Outside"<<endl;
}

void checkerRectangle(){
   cout<<"Checker code for Rectangle"<<endl;

   Point leftbottom(0,0);
   Point righttop(4,6);
   Point lefttop(0,6);
   Point rightbottom(4,0);
   

   Rectangle t(leftbottom, rightbottom, righttop, lefttop);
   
   Point check1(2,1);
   Point check2(7,8);
   
   if(t.contains(check1)) cout<<"Point ("<<check1.x<<','<< check1.y<<") Inside"<<endl;
   else cout<<"Point ("<<check1.x<<','<< check1.y<<") Outside"<<endl;

   if(t.contains(check2)) cout<<"Point ("<<check2.x<<','<< check2.y<<") Inside"<<endl;
   else cout<<"Point ("<<check2.x<<','<< check2.y<<") Outside"<<endl;
   
   Point shift(5,7); // shift by 5 units in +x and 7 units in +y; 
   t.translate(shift);

   cout<<"After Translating"<<endl;
   if(t.contains(check1)) cout<<"Point ("<<check1.x<<','<< check1.y<<") Inside"<<endl;
   else cout<<"Point ("<<check1.x<<','<< check1.y<<") Outside"<<endl;

   if(t.contains(check2)) cout<<"Point ("<<check2.x<<','<< check2.y<<") Inside"<<endl;
   else cout<<"Point ("<<check2.x<<','<< check2.y<<") Outside"<<endl;
   
   Point shift1(-5,-7); // shift by -5 units in +x and -7 units in +y; 
   t.translate(shift1);

   t.rotate(M_PI/2);
   cout<<"After rotating"<<endl;

   check1.x = 2;
   check1.y = 1;

   check2.x = -2;
   check2.y = 1;

   if(t.contains(check1)) cout<<"Point ("<<check1.x<<','<< check1.y<<") Inside"<<endl;
   else cout<<"Point ("<<check1.x<<','<< check1.y<<") Outside"<<endl;

   if(t.contains(check2)) cout<<"Point ("<<check2.x<<','<< check2.y<<") Inside"<<endl;
   else cout<<"Point ("<<check2.x<<','<< check2.y<<") Outside"<<endl;
}

void checkerSquare(){
   cout<<"Checker code for Square"<<endl;
   
   Point leftbottom(0,0);
   Point righttop(4,4);
   Point lefttop(0,4);
   Point rightbottom(4,0);

   Square t(leftbottom, rightbottom, righttop, lefttop);

   Point check1(2,1);
   Point check2(7,8);

   if(t.contains(check1)) cout<<"Point ("<<check1.x<<','<< check1.y<<") Inside"<<endl;
   else cout<<"Point ("<<check1.x<<','<< check1.y<<") Outside"<<endl;

   if(t.contains(check2)) cout<<"Point ("<<check2.x<<','<< check2.y<<") Inside"<<endl;
   else cout<<"Point ("<<check2.x<<','<< check2.y<<") Outside"<<endl;

   Point shift(5,7); // shift by 5 units in +x and 7 units in +y; 
   t.translate(shift);
   
   cout<<"After Translating"<<endl;
   if(t.contains(check1)) cout<<"Point ("<<check1.x<<','<< check1.y<<") Inside"<<endl;
   else cout<<"Point ("<<check1.x<<','<< check1.y<<") Outside"<<endl;

   if(t.contains(check2)) cout<<"Point ("<<check2.x<<','<< check2.y<<") Inside"<<endl;
   else cout<<"Point ("<<check2.x<<','<< check2.y<<") Outside"<<endl;

   Point shift1(-5,-7); // shift by -5 units in +x and -7 units in +y; 

   t.translate(shift1);
   t.rotate(M_PI/2);
   cout<<"After rotating"<<endl;

   check1.x = 2;
   check1.y = 1;

   check2.x = -2;
   check2.y = 1;

   if(t.contains(check1)) cout<<"Point ("<<check1.x<<','<< check1.y<<") Inside"<<endl;
   else cout<<"Point ("<<check1.x<<','<< check1.y<<") Outside"<<endl;

   if(t.contains(check2)) cout<<"Point ("<<check2.x<<','<< check2.y<<") Inside"<<endl;
   else cout<<"Point ("<<check2.x<<','<< check2.y<<") Outside"<<endl;
}

void checkerCircle(){
   cout<<"Checker code for Circle"<<endl;

   Point center(0,0);
   double radius = 5;
   Circle t(center,radius);

   Point check1(2,1);
   Point check2(7,7);
   
   if(t.contains(check1)) cout<<"Point ("<<check1.x<<','<< check1.y<<") Inside"<<endl;
   else cout<<"Point ("<<check1.x<<','<< check1.y<<") Outside"<<endl;

   if(t.contains(check2)) cout<<"Point ("<<check2.x<<','<< check2.y<<") Inside"<<endl;
   else cout<<"Point ("<<check2.x<<','<< check2.y<<") Outside"<<endl;
   
   Point shift(7,7); 
   t.translate(shift); //shift by 7 units in +x and 7 units in +y; 
   
   cout<<"After Translating"<<endl;
   if(t.contains(check1)) cout<<"Point ("<<check1.x<<','<< check1.y<<") Inside"<<endl;
   else cout<<"Point ("<<check1.x<<','<< check1.y<<") Outside"<<endl;

   if(t.contains(check2)) cout<<"Point ("<<check2.x<<','<< check2.y<<") Inside"<<endl;
   else cout<<"Point ("<<check2.x<<','<< check2.y<<") Outside"<<endl;

   t.rotate(M_PI/4);
   cout<<"After rotating"<<endl;
   check1.x = 0;
   check1.y = 10;

   check2.x = 0;
   check2.y = 0;

   if(t.contains(check1)) cout<<"Point ("<<check1.x<<','<< check1.y<<") Inside"<<endl;
   else cout<<"Point ("<<check1.x<<','<< check1.y<<") Outside"<<endl;

   if(t.contains(check2)) cout<<"Point ("<<check2.x<<','<< check2.y<<") Inside"<<endl;
   else cout<<"Point ("<<check2.x<<','<< check2.y<<") Outside"<<endl;
}

void checkerComplementCircle(){
   cout<<"Checker code for Complement of a Circle"<<endl;
   
   Point center(0,0);
   double radius = 5;
   Circle c(center,radius);

   Point check1(2,1);
   Point check2(7,7);

   Complement t(c);

   if(t.contains(check1)) cout<<"Point ("<<check1.x<<','<< check1.y<<") Inside"<<endl;
   else cout<<"Point ("<<check1.x<<','<< check1.y<<") Outside"<<endl;

   if(t.contains(check2)) cout<<"Point ("<<check2.x<<','<< check2.y<<") Inside"<<endl;
   else cout<<"Point ("<<check2.x<<','<< check2.y<<") Outside"<<endl;

   Point shift(7,7);
   t.translate(shift); // shift by 7 units in +x and 7 units in +y; 

   cout<<"After Translating"<<endl;
   if(t.contains(check1)) cout<<"Point ("<<check1.x<<','<< check1.y<<") Inside"<<endl;
   else cout<<"Point ("<<check1.x<<','<< check1.y<<") Outside"<<endl;

   if(t.contains(check2)) cout<<"Point ("<<check2.x<<','<< check2.y<<") Inside"<<endl;
   else cout<<"Point ("<<check2.x<<','<< check2.y<<") Outside"<<endl;

   t.rotate(M_PI/4);
   cout<<"After rotating"<<endl;
   check1.x = 0;
   check1.y = 10;

   check2.x = 0;
   check2.y = 0;
   if(t.contains(check1)) cout<<"Point ("<<check1.x<<','<< check1.y<<") Inside"<<endl;
   else cout<<"Point ("<<check1.x<<','<< check1.y<<") Outside"<<endl;

   if(t.contains(check2)) cout<<"Point ("<<check2.x<<','<< check2.y<<") Inside"<<endl;
   else cout<<"Point ("<<check2.x<<','<< check2.y<<") Outside"<<endl;
}

void checkerAnnulus(){
   cout<<"Checker code for Annulus"<<endl;

   Point center(0,0);
   Annulus t(5,10,center);
   
   Point check1(2,1);
   Point check2(7,7);

   if(t.contains(check1)) cout<<"Point ("<<check1.x<<','<< check1.y<<") Inside"<<endl;
   else cout<<"Point ("<<check1.x<<','<< check1.y<<") Outside"<<endl;

   if(t.contains(check2)) cout<<"Point ("<<check2.x<<','<< check2.y<<") Inside"<<endl;
   else cout<<"Point ("<<check2.x<<','<< check2.y<<") Outside"<<endl;
   
   Point shift(7,7); //shift by 7 units in +x and 7 units in +y; 
   t.translate(shift);
   cout<<"After Translating"<<endl;
   if(t.contains(check1)) cout<<"Point ("<<check1.x<<','<< check1.y<<") Inside"<<endl;
   else cout<<"Point ("<<check1.x<<','<< check1.y<<") Outside"<<endl;

   if(t.contains(check2)) cout<<"Point ("<<check2.x<<','<< check2.y<<") Inside"<<endl;
   else cout<<"Point ("<<check2.x<<','<< check2.y<<") Outside"<<endl;


   t.rotate(M_PI/4);
   cout<<"After rotating"<<endl;
   check1.x = 0;
   check1.y = 10;

   check2.x = 0;
   check2.y = 1;
   if(t.contains(check1)) cout<<"Point ("<<check1.x<<','<< check1.y<<") Inside"<<endl;
   else cout<<"Point ("<<check1.x<<','<< check1.y<<") Outside"<<endl;

   if(t.contains(check2)) cout<<"Point ("<<check2.x<<','<< check2.y<<") Inside"<<endl;
   else cout<<"Point ("<<check2.x<<','<< check2.y<<") Outside"<<endl;
}

void checkerLShape(){
   cout<<"Checker code for LShape"<<endl;

   Point p(0,0); // leftbottom point
   LShape t(p,2,4,3); // leftbottom point, a,b,c

   Point check1(2,1);
   Point check2(6,7);
   
   if(t.contains(check1)) cout<<"Point ("<<check1.x<<','<< check1.y<<") Inside"<<endl;
   else cout<<"Point ("<<check1.x<<','<< check1.y<<") Outside"<<endl;

   if(t.contains(check2)) cout<<"Point ("<<check2.x<<','<< check2.y<<") Inside"<<endl;
   else cout<<"Point ("<<check2.x<<','<< check2.y<<") Outside"<<endl;

   Point shift(5,6); // shift by 5 units in +x and 6 units in +y; 
   t.translate(shift);

   cout<<"After Translating"<<endl;
   if(t.contains(check1)) cout<<"Point ("<<check1.x<<','<< check1.y<<") Inside"<<endl;
   else cout<<"Point ("<<check1.x<<','<< check1.y<<") Outside"<<endl;

   if(t.contains(check2)) cout<<"Point ("<<check2.x<<','<< check2.y<<") Inside"<<endl;
   else cout<<"Point ("<<check2.x<<','<< check2.y<<") Outside"<<endl;
   
   Point shift1(-5,-6);
   t.translate(shift1);
   t.rotate(M_PI/2);
   cout<<"After rotating"<<endl;
   
   check1.x = 2;
   check1.y = 1;

   check2.x = -2;
   check2.y = 1;

   if(t.contains(check1)) cout<<"Point ("<<check1.x<<','<< check1.y<<") Inside"<<endl;
   else cout<<"Point ("<<check1.x<<','<< check1.y<<") Outside"<<endl;

   if(t.contains(check2)) cout<<"Point ("<<check2.x<<','<< check2.y<<") Inside"<<endl;
   else cout<<"Point ("<<check2.x<<','<< check2.y<<") Outside"<<endl;
}


int main()
{
   checkerTriangle();
   cout<<endl;

   checkerRectangle();
   cout<<endl;

   checkerSquare();
   cout<<endl;

   checkerCircle();
   cout<<endl;

   checkerComplementCircle();
   cout<<endl;

   checkerAnnulus();
   cout<<endl;

   checkerLShape();
   cout << endl;

   return 0; 
}