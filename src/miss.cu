#include <optix.h>
#include <optixu/optixu_math_namespace.h>

#include "raydata.h"

rtDeclareVariable(PerRayData, thePrd, rtPayload, );

RT_PROGRAM void missProgram()
{
    thePrd.scatterEvent = miss; 
}

