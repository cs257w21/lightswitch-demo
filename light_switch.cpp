#include "light_switch.h"

#include <sstream>
#include <string>

using namespace std;

LightSwitch::LightSwitch() {
  is_on_ = false;
  flip_count_ = 0;
}

LightSwitch::LightSwitch(int flip_count) {
  flip_count_ = flip_count;
  is_on_ = false;
}

LightSwitch::LightSwitch(bool is_on, int flip_count) {
  is_on_ = is_on;
  flip_count_ = flip_count;
}

bool LightSwitch::GetIsOn() { return is_on_; }

int LightSwitch::GetFlipCount() { return flip_count_; }

void LightSwitch::SetFlipCount(int flip_count) { flip_count_ = flip_count; }

void LightSwitch::Flip() {
  if (is_on_) {
    is_on_ = false;
  } else {
    is_on_ = true;
  }
  flip_count_++;
}

string LightSwitch::ToString() {
  stringstream ss;
  ss << "The switch is ";

  if (is_on_) {
    ss << "ON";
  } else {
    ss << "OFF";
  }

  ss << " and has been flipped " << flip_count_ << " times.";

  return ss.str();
}