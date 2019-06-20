#include <iostream>

class B {
public:
    B() {
        std::cout << "xxx";
        counter = 5;
    }
    B(int n) {
        // never goes here if there is virtual inheritance
        // despite D's B(13) in its constructor
        std::cout << "yyy"; 
        counter = n;
    }
protected:
    int counter = 0;
};

#if 1
class D: public virtual B {
    public:
    D(): B(13) {

    }
};
class E: public virtual B {};
#else
class D: public B {
    public:
    D(): B(13) {

    }
};
class E: public B {

};
#endif

class F: public D,public E {
    public:
    F() {
        std::cout << counter;
    }
};

int main (int argc, char *argv[])
{
    int i = 69;
    std::cout << "hello sonarqube!" << i << std::endl;
    switch (i) {
        case 0:
        std::cout << "0";
        break;

        case 1:
        std::cout << "1";
        break;
    }

    F obj1;

    
    return 0;
}
