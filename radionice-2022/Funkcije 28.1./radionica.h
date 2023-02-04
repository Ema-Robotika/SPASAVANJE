#pragma once
#include "helper.h"


void RobotLine::radionica() {
  if (lineAny()) {
    stop();
    end();
  }
  labirint();

}
