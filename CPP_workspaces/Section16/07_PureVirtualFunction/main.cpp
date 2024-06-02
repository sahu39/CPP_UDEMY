#include <iostream>
#include <vector>

class Shape{    //Abstract Base Class
private:
    //Abstract Base Class Data;
public:
    virtual void draw() = 0;    //pure virtual function
    virtual void rotate() = 0;  //pure virtual function
    virtual ~Shape(){
        std::cout << "Destroying Shape" << std::endl;
    }

};
class Open_Shape : public Shape{    //Abstarct Class
private:
    //Abstract Open_Shape data
public:
    virtual ~Open_Shape() {}
};

class Close_Shape : public Shape{    //Abstarct Class
private:
    //Abstract Close_Shape data
public:
    virtual ~Close_Shape() {}
};

class Circle : public Shape{
private:
    //Circle data
public:
    virtual void draw() override{
        std::cout << "Drawing a Circle" << std::endl;
    }
    
    virtual void rotate() override{
        std::cout << "Rotateing a Circle" << std::endl;
    }
    virtual ~Circle()
    {
        std::cout << "Destroying Circle" << std::endl;
    }
};

class Line : public Shape{
private:
    //Circle data
public:
    virtual void draw() override{
        std::cout << "Drawing a Line" << std::endl;
    }
    
    virtual void rotate() override{
        std::cout << "Rotateing a Line" << std::endl;
    }
    virtual ~Line()
    {
        std::cout << "Destroying Line" << std::endl;
    }
};

class Square : public Shape{
private:
    //Circle data
public:
    virtual void draw() override{
        std::cout << "Drawing a Square" << std::endl;
    }
    
    virtual void rotate() override{
        std::cout << "Rotateing a Square" << std::endl;
    }
    virtual ~Square()
    {
        std::cout << "Destroying Square" << std::endl;
    }
};

void screen_refresh(const std::vector<Shape *> &shapes)
{
    for(auto p:shapes)
    {
        p->draw();
        p->rotate();
        std::cout << "\n===============\n" << std::endl;
    }
}
int main()
{
    //Shape s;
    //Shape *p = new Shape();
    //Circle c;       
    //c.draw();   //Statically Bound
    
    //Shape *ptr = new Circle();
    //ptr->draw();    //Dynamically Bound
    //ptr->rotate();  //Dynamically Bound
    Shape *s1 = new Line();
    Shape *s2 = new Square();
    Shape *s3 =  new Circle();
    
    std::vector <Shape *> shapes {s1,s2,s3};
 //   for(const auto s:shapes)
 //   {
 //       s->draw();
 //       s->rotate();
 //       std::cout << "\n===============\n" << std::endl;
 //   }
    
    screen_refresh(shapes);
   // delete ptr;
    delete s1;
    delete s2;
    delete s3;
	return 0;
}
