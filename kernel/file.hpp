#pragma once

#include "error.hpp"

class FileDescriptor {
 public:
  virtual ~FileDescriptor() = default;
  virtual size_t Read(void* buf, size_t len) = 0;
  virtual size_t Write(const void* buf, size_t len) = 0; // buf を fd が指す先に書き込む。
  virtual size_t Size() const = 0;

  virtual size_t Load(void* buf, size_t len, size_t offset) = 0;
};
