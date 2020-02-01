// setters and getters with funtions etxc

#include "pet.h"

  Pet::Pet(){
    m_name = " ";
    m_age = 0;
    m_type = " ";
    m_weight = 0.0;
  }
  
  Pet::Pet(string name, int age, string type, double weight){
    m_name = name;
    m_age = age;
    m_type = type;
    m_weight = weight;
  }
  string Pet::getName(){
    return m_name;
  }
  void Pet::setName(string name){
    m_name = name;
  }
  int Pet::getAge(){
    return m_age;
  }
  void Pet::setAge(int age){
    m_age = age;
  }
  string Pet::getType(){
    return m_type;
  }
  void Pet::setType(string type){
    m_type = type;
  }
  double Pet::getWeight(){
    return m_weight;
  }
  void Pet:: setWeight(double weight){
    m_weight = weight;
  }
