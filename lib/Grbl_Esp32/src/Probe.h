#pragma once

/*
  Probe.h - code pertaining to probing methods
  Part of Grbl

  Copyright (c) 2014-2016 Sungeun K. Jeon for Gnea Research LLC

	2018 -	Bart Dring This file was modifed for use on the ESP32
					CPU. Do not use this with Grbl for atMega328P

  Grbl is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Grbl is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Grbl.  If not, see <http://www.gnu.org/licenses/>.
*/

enum class Probe : uint8_t {
    Off    = 0,  // Probing disabled or not in use. (Must be zero.)
    Active = 1,  // Actively watching the input pin.
};

class GRBL_PROBE {

    public:
        IRAM_ATTR void set_probe_direction( bool is_away );
        IRAM_ATTR bool probe_get_state( void );
        IRAM_ATTR bool probe_state_monitor( void );

};

extern GRBL_PROBE gprobe;
