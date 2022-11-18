#ifndef VIDEO_H
#define VIDEO_H
#include "Multim.h"


class video: public Multim{

  private:
    int duration;

  public:
    video();
    video(std::string name, std::string pathname, int dur);
    ~video() override;
    int getDuration() const;
    void exibiteTxt(std::ostream & s) const override;
    void play() const override;
};



#endif // VIDEO_H
