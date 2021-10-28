#include<iostream>
using namespace std;

class Singleton
{
static Singleton *instance;
int a;

Singleton()
{
a = 0;
}
public:
static Singleton *getInstance()
{
if(!instance)
instance = new Singleton;
return instance;
}

void setData(int a)
{
this->a=a;
}

int getData()
{
return this->a;
}
};

Singleton *Singleton::instance = 0;
int main()
{
Singleton *s = s->getInstance();
cout<<s->getData()<<endl;
s->setData(10);
cout<<s->getData()<<endl;
return 0;
}
