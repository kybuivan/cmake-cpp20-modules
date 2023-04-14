export module importable;

import <iostream>;

#include "library_export.h"

export LIBRARY_EXPORT void from_import()
{
  std::cout << "Hello library!" << std::endl;
}