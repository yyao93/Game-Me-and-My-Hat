#include "../include/fullpath.h"

std::string full_path(const char * filename) {

  char * real_path = realpath(filename, NULL);
  std::string ret = real_path;
  free(real_path);
  return ret;
}
