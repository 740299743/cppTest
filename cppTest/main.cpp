//
//  main.cpp
//  cppTest
//
//  Created by pactera on 2/9/15.
//  Copyright (c) 2015 pactera. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class MyClass
{
public:
    int x;
    int y;
    void foo()
    {
        cout<<"x + y = "<<x+y<<endl;
    }
    
private:
    float z;
    void bar();
};

class Foo
{
public:
    int x;
};

void changeValue(Foo& foo)
{
    foo.x = 5;
}


class Player
{
    void play();
public:
    void foo()
    {
        cout<<"player---foo"<<endl;
    }
};

class Manager
{
    void manage();
public:
    void foo()
    {
        cout<<"manager---foo"<<endl;
    }
};

class PlayerManager:public Player,public Manager
{
    
};

class DoubleInt
{
public:
    int x;
    int y;
    
    DoubleInt(int x,int y):x(x),y(y){}
    DoubleInt operator+(const DoubleInt & rhs);
    DoubleInt operator+(const int rhs);
};

DoubleInt DoubleInt::operator+(const DoubleInt &rhs)
{
    return DoubleInt(x + rhs.x, y + rhs.y);
}

DoubleInt DoubleInt::operator+(const int rhs)
{
    return DoubleInt(x + rhs, y + rhs);
}

template <typename T>
void selfSwap(T &a, T  &b)
{
    T temp = a;
    a = b;
    b = temp;
}



template <typename T>
class Triplet
{
private:
    T a,b,c;
    
public:
    Triplet(T a,T b,T c):a(a),b(b),c(c)
    {
        
    };
    
    T getA()
    {
        return a;
    }
    
    T getB()
    {
        return b;
    }
    
    T getC()
    {
        return c;
    }
};




template <typename TA, typename TB,typename TC>
class Triplet2
{
private:
    TA a;
    TB b;
    TC c;
    
public:
    Triplet2(TA a,TB b,TC c):a(a),b(b),c(c)
    {
        
    };
    
    TA getA()
    {
        return a;
    }
    
    TB getB()
    {
        return b;
    }
    
    TC getC()
    {
        return c;
    }
};




int main(int argc, const char * argv[])
{
    Triplet2<int, float, string> mixedTriplet(1,3.141,"Hello World!");
    
    cout<<"The c parameters = "<<mixedTriplet.getC()<<endl;
    
    /*vector<int> v;
     v.push_back(1);
     v.push_back(2);
     v.push_back(3);
     */
    
    
    
    
    
    return 0;
}


