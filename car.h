#ifndef CAR-H
#define CAR-H
#include <string>
#include "driver.h"


class Steeringwheel{
};

class Car{
  Driver *dere;
  SteeringWheel s_wheel;
  std::string car_type;
public:
    car(std::string ct,Driver *driver= NULL)
      :dere(driver), car_type(ct){}
  Car(Driver *driver = NULL)
  : Car(driver, "Mercedes") {
  }
  std::string whosDriving();
    
  
};

#endif