#pragma once
#include "helper.h"

void RobotLine::radionica() {
  oabilzenjePrepreke();
  if (line(0) && line(8)) {
    go(-60, 60);
  }
  if (!lineAny()) {
    go(50, 50);
  }
  if (line(5) && line(8)) {
    go(60, 60);
  }
}
