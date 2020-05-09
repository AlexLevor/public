//
// Created by alexlevor on 09.05.2020.
//

#include <iostream>
#include <vector>

class TestClass{
public:
    TestClass(){
        std::cout << "Object created\n\r";
        x = 1;
    };
    ~TestClass(){
        x++;
        std::cout << "Object deleted and x was " << x << "\n\r";
    };
    auto GetX(){return x;}
private:
    int x;
};

int main(){

    std::vector<TestClass> a;
    std::cout << "Empty delimiter \n\r";
    
    //STRANGE_HERE: What the difference between those 2 lines of code? 
    //a.push_back(*(new TestClass()));
    a.push_back((TestClass()));

    std::cout << a[0].GetX() << "\n\r";
    a.clear();
    return 0;
}
