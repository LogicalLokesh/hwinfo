// Copyright Leon Freist
// Author Leon Freist <freist@informatik.uni-freiburg.de>

#pragma once

#ifdef HWINFO_MAINBOARD

#include <hwinfo/platform.h>

#include <string>

namespace hwinfo {

class HWINFO_API MainBoard {
  friend std::string get_dmi_by_name(const std::string& name);

 public:
  MainBoard();
  ~MainBoard() = default;

  const std::string& vendor() const;
  const std::string& name() const;
  const std::string& version() const;
  const std::string& serialNumber() const;

 private:
  std::string _vendor;
  std::string _name;
  std::string _version;
  std::string _serialNumber;
};

}  // namespace hwinfo

#endif  // HWINFO_MAINBOARD
