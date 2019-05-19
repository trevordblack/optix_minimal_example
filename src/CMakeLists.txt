cuda_compile_and_embed(
  embedded_raygen_program raygen.cu
  )

cuda_compile_and_embed(
  embedded_miss_program miss.cu
  )

cuda_compile_and_embed(
  embedded_sphere_program sphere.cu
  )

cuda_compile_and_embed(
  embedded_sphere_mat_program material.cu
  )

add_executable(optix_minimal_example
  main.cpp
  # Compiled cuda ptx programs
  ${embedded_raygen_program}
  ${embedded_miss_program}
  ${embedded_sphere_program}
  ${embedded_sphere_mat_program}
  )

target_link_libraries(optix_minimal_example
  ${optix_LIBRARY}
  )

