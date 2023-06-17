#include<iostream>
using namespace std;
class Animal {
 public:
  Animal(std::string name) : name_(name) {}
  virtual void MakeSound() {
    std::cout << "Some generic animal sound" << std::endl;
  }
  std::string Name() { return name_; }

 private:
  std::string name_;
};

class Cat : public Animal {
 public:
  Cat(std::string name, std::string breed, std::string toy)
      : Animal(name), breed_(breed), toy_(toy) {}
  void Play() {
    std::cout << Name() << " plays with " << toy_ << std::endl;
  }
  void MakeSound() override {
    std::cout << "Meow" << std::endl;
  }

 private:
  std::string breed_;
  std::string toy_;
};
