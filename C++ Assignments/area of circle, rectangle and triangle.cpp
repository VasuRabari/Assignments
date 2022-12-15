#include

using namespace std;

int area(int);
int area(int,int);
float area(float);
float area(float,float);

int main()
{
int l,b;
float r;

cout<<"Enter length and breadth of rectangle:";
cin>>l>>b;

cout<<"Enter radius of circle:";
cin>>r;

cout<<"\nArea of rectangle is "< cout<<"\nArea of circle is "<
}

int area(int l,int b)
{
return(l*b);
}
float area(float r)
{
return(3.14*r*r);
}
