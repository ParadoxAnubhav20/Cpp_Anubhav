#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length,breadth;
    public:
    Rectangle(int,int);
    int get_length();
    int get_breadth();
    void set_length(int);
    void set_breadth(int);
    int area();
    int perimeter();
};
Rectangle::Rectangle(int l=0,int b=0){
    length=l;
    breadth=b;
}
int Rectangle::get_breadth(){
    return breadth;
}
int Rectangle::get_length(){
    return length;
}
void Rectangle::set_breadth(int b){
    breadth=b;
}
void Rectangle::set_length(int l){
    length=l;
}
int Rectangle::area(){
    return length*breadth;
}
int Rectangle::perimeter(){
    return 2*(length+breadth);
}

class cuboid:public Rectangle{
    private:
    int height;
    public:
    cuboid(int l=0,int b=0,int h=0){
        height=h;
        set_length(l);
        set_breadth(b);
    }
    void set_height(int h){
        height=h;
    }
    int get_height(){
        return height;
    } 
    int volume(){
        return get_breadth()*height*get_length();
    }
    friend ostream &operator<<(ostream &out,cuboid c){
        out<<"The Geometry of the Cuboid is:"<<endl;
        out<<c.get_length()<<" "<<c.get_breadth()<<" "<<c.height<<endl;
        return out;
    }
};
int main(){
    Rectangle r(15,20);
    cout<<"Area of the Rectangle is:"<<r.area()<<endl;
    cout<<"Perimeter ot the Rectangle is:"<<r.perimeter()<<endl;
    cuboid c(12,15,20);
    cout<<"Area of the cuboid is:"<<c.area()<<endl;
    cout<<"Volume of the cuboid is:"<<c.volume()<<endl;
    cout<<"Length of the cuboid is:"<<c.get_length()<<endl;
    cout<<c;
    return 0;
}