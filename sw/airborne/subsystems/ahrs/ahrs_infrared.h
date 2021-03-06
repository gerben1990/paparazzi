/*
 * Copyright (C) 2011 The Paparazzi Team
 *
 * This file is part of paparazzi.
 *
 * paparazzi is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * paparazzi is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with paparazzi; see the file COPYING.  If not, write to
 * the Free Software Foundation, 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

/**
 * @file subsystems/ahrs/ahrs_infrared.h
 *
 * Fixedwing attitude estimation using infrared sensors.
 *
 */

#ifndef AHRS_INFRARED_H
#define AHRS_INFRARED_H

#include "std.h"
#include "subsystems/ahrs.h"
#include "math/pprz_orientation_conversion.h"

struct AhrsInfrared {
  bool_t is_aligned;
};

extern struct AhrsInfrared ahrs_infrared;

extern void ahrs_infrared_register(void);
extern void ahrs_infrared_init(void);
extern void ahrs_update_infrared(void);
extern void ahrs_infrared_update_gps(void);

#define DefaultAhrsImpl ahrs_infrared

#endif /* AHRS_INFRARED_H */
