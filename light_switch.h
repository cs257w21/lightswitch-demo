#ifndef LIGHT_SWITCH_H_
#define LIGHT_SWITCH_H_

#include <string>

class LightSwitch {
 public:
  // Constructors is called automatically when you create an object.
  LightSwitch();
  LightSwitch(int flip_count);
  LightSwitch(bool is_on, int flip_count);

  bool GetIsOn();
  int GetFlipCount();
  void SetFlipCount(int flip_count);
  void Flip();

  std::string ToString();

 private:
  bool is_on_;
  int flip_count_;
};

#endif