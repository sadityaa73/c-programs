#include<iostream>
using namespace std;

class Box{
    private:
    int length;
    int breadth;
    int height;

    public:
    Box(int l=0,int b=0,int h=0)
    {
        length =l;
        breadth =b;
        height =h;
    }
    Box(Box &B)
    {
        length = B.length;
        breadth = B.breadth;
        height = B.height;
    }

    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int getHeight()
    {
        return height;
    }
    long long calculateVolume(){
        int volume = length*breadth*height
        return volume;
    }
     bool operator<(const Box& b) {
        if (length < b.length)
            return true;
        else if (length == b.length && breadth < b.breadth)
            return true;
        else if (length == b.length && breadth == b.breadth && height < b.height)
            return true;
        else
            return false;
    }
    friend ostream& operator<<(ostream& out, const Box& B) {
        out << B.length << " " << B.breadth << " " << B.height;
        return out;
    }
};

int main(){
    return 0;
}