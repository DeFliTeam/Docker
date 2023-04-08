// Part of readsb, a Mode-S/ADSB/TIS message decoder.
//
// icao_filter.c: prototypes for ICAO address hashtable
//
// Copyright (c) 2020 Michael Wolf <michael@mictronics.de>
//
// This code is based on a detached fork of dump1090-fa.
//
// Copyright (c) 2014,2015 Oliver Jowett <oliver@mutability.co.uk>
//
// This file is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// any later version.
//
// This file is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef ICAO_FILTER_H
#define ICAO_FILTER_H

// Call once:
void icaoFilterInit();

// Add an address to the filter
void icaoFilterAdd(uint32_t addr);

// Test if the given address matches the filter
int icaoFilterTest(uint32_t addr);

// Test if the top 16 bits match any previously added address.
// If they do, returns an arbitrary one of the matched
// addresses. Returns 0 on failure.
uint32_t icaoFilterTestFuzzy(uint32_t partial);

// Call this periodically to allow the filter to expire
// old entries.
void icaoFilterExpire();

#endif
