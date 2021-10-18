

#ifndef GLOW_VTARUNTIME_H
#define GLOW_VTARUNTIME_H
#include "vta/runtime.h"
#include "VTABundle.h"
#include <vector>

VTACommandHandle vtaCmdH{nullptr};
VTACommandHandle vtaCmdH1{nullptr};
VTACommandHandle vtaCmdH2{nullptr};
VTACommandHandle vtaCmdH3{nullptr};

extern std::vector<void*> vGemmUOpHandle[4];
extern std::vector<void*> vAddUOpHandle[4];
extern std::vector<void*> vResetUopHandle[4];
extern std::vector<void*> vReluUopHandle[4];
extern std::vector<void*> vMaxUopHandle[4];
extern std::vector<void*> vMinUopHandle[4];
extern std::vector<void*> vShiftUopHandle[4];

void initVTARuntime(){
  vtaCmdH = VTATLSCommandHandle();

  vGemmUOpHandle[0].clear();
  vAddUOpHandle[0].clear();
  vResetUopHandle[0].clear();
  vReluUopHandle[0].clear();
  vMaxUopHandle[0].clear();
  vMinUopHandle[0].clear();
  vShiftUopHandle[0].clear();

}

void destroyVTARuntime(){
  VTARuntimeShutdown();

  vGemmUOpHandle[0].clear();
  vAddUOpHandle[0].clear();
  vResetUopHandle[0].clear();
  vReluUopHandle[0].clear();
  vMaxUopHandle[0].clear();
  vMinUopHandle[0].clear();
  vShiftUopHandle[0].clear();

}

void initVTARuntime1(){
  vtaCmdH1 = VTATLSCommandHandle(1);

  vGemmUOpHandle[1].clear();
  vAddUOpHandle[1].clear();
  vResetUopHandle[1].clear();
  vReluUopHandle[1].clear();
  vMaxUopHandle[1].clear();
  vMinUopHandle[1].clear();
  vShiftUopHandle[1].clear();

}

void destroyVTARuntime1(){
  VTARuntimeShutdown(1);

  vGemmUOpHandle[1].clear();
  vAddUOpHandle[1].clear();
  vResetUopHandle[1].clear();
  vReluUopHandle[1].clear();
  vMaxUopHandle[1].clear();
  vMinUopHandle[1].clear();
  vShiftUopHandle[1].clear();

}

void initVTARuntime2(){
  vtaCmdH2 = VTATLSCommandHandle(2);

  vGemmUOpHandle[2].clear();
  vAddUOpHandle[2].clear();
  vResetUopHandle[2].clear();
  vReluUopHandle[2].clear();
  vMaxUopHandle[2].clear();
  vMinUopHandle[2].clear();
  vShiftUopHandle[2].clear();

}

void destroyVTARuntime2(){
  VTARuntimeShutdown(2);

  vGemmUOpHandle[2].clear();
  vAddUOpHandle[2].clear();
  vResetUopHandle[2].clear();
  vReluUopHandle[2].clear();
  vMaxUopHandle[2].clear();
  vMinUopHandle[2].clear();
  vShiftUopHandle[2].clear();

}

void initVTARuntime3(){
  vtaCmdH3 = VTATLSCommandHandle(3);

  vGemmUOpHandle[3].clear();
  vAddUOpHandle[3].clear();
  vResetUopHandle[3].clear();
  vReluUopHandle[3].clear();
  vMaxUopHandle[3].clear();
  vMinUopHandle[3].clear();
  vShiftUopHandle[3].clear();

}

void destroyVTARuntime3(){
  VTARuntimeShutdown(3);

  vGemmUOpHandle[3].clear();
  vAddUOpHandle[3].clear();
  vResetUopHandle[3].clear();
  vReluUopHandle[3].clear();
  vMaxUopHandle[3].clear();
  vMinUopHandle[3].clear();
  vShiftUopHandle[3].clear();

}

#endif // GLOW_VTARUNTIME_H

