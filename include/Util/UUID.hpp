/*
Pixel, a simple 2D, multiplatform application engine for OpenGL graphics written in C++
Copyright (C) 2022 DarthChungo

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef PIXEL_UUID_HPP
#define PIXEL_UUID_HPP

#include "pch.hpp"

namespace Pixel {
  class UUID {  // Not really an UUID
   public:
    UUID();
    UUID(uint64_t uuid);

    operator uint64_t() const { return pUUID; }

   private:
    uint64_t pUUID;
  };
}

namespace std {
  template <>
  struct hash<Pixel::UUID> {
    inline std::size_t operator()(const Pixel::UUID& uuid) const { return hash<uint64_t>()((uint64_t)uuid); }
  };
}

#endif
