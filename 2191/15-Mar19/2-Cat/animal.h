#ifndef SICT_ANIMAL_H__
#define SICT_ANIMAL_H__
namespace sict{
  class Animal{
  private:
    char _name[41];
  public:
    Animal(const char* name = "Nameless");
    const char* name()const; 
    void name(const char* value); 
    void act();
    void move();
    void sound();
    ~Animal();
  };



 


}
#endif