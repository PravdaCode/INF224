#ifndef IMAGE_H
#define IMAGE_H
#include "Multim.h"


class image: public Multim{
private:
  float x;
  float y;

public:
  image(std::string name, std::string pathname, float x, float y);
  float getLat() const;
  float getLong() const;
  void exibiteTxt(std::ostream & s) const;
  void play() const override;
};

#endif // IMAGE_H
