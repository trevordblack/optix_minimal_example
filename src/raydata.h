#ifndef RAY_DATA_H
#define RAY_DATA_H

// Possible scattering events for a ray: miss or hit
typedef enum
{
    miss,
    hit
} ScatterEvent;

// The ray payload
//   Contains a scattering event and the attenuation (color)
struct PerRayData
{
    ScatterEvent scatterEvent;
    float3 attenuation;
};

#endif //!RAY_DATA_H
