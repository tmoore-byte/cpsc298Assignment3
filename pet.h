#include <iostream>
#include <string>

using namespace std;

class Pet{
public:
  //constructor
  Pet();
  //overloading
  Pet(string name, int age, string type, double weight);
  //setters and getters
  string getName();
  void setName(string name);
  int getAge();
  void setAge(int age);
  string getType();
  void setType(string type);
  double getWeight();
  void setWeight(double weight);

private:
  //pet variables
  string m_name;
  int m_age;
  string m_type;
  double m_weight;

};
