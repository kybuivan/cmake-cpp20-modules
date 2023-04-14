include(GenerateExportHeader)

add_library(library)
generate_export_header(library)
target_sources(library
  PUBLIC
    FILE_SET HEADERS
      BASE_DIRS
        "${CMAKE_CURRENT_BINARY_DIR}"
      FILES
        "${CMAKE_CURRENT_BINARY_DIR}/library_export.h"
    FILE_SET CXX_MODULES
      BASE_DIRS
        "${CMAKE_CURRENT_SOURCE_DIR}"
      FILES
        importable.cxx)
target_compile_features(library PUBLIC cxx_std_20)

add_executable(${PROJECT_NAME} main.cxx)
target_link_libraries(${PROJECT_NAME} PRIVATE library)