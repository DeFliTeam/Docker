// Part of readsb, a Mode-S/ADSB/TIS message decoder.
//
// cpr.h - Compact Position Reporting prototypes
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

#ifndef CPR_H
#define CPR_H

int decodeCPRairborne(int even_cprlat, int even_cprlon,
        int odd_cprlat, int odd_cprlon,
        int fflag,
        double *out_lat, double *out_lon);

int decodeCPRsurface(double reflat, double reflon,
        int even_cprlat, int even_cprlon,
        int odd_cprlat, int odd_cprlon,
        int fflag,
        double *out_lat, double *out_lon);

int decodeCPRrelative(double reflat, double reflon,
        int cprlat, int cprlon,
        int fflag, int surface,
        double *out_lat, double *out_lon);

#endif
