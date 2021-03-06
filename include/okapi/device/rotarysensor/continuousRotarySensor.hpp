/**
 * @author Ryan Benasutti, WPI
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
#ifndef _OKAPI_CONTINUOUSROTARYSENSOR_HPP_
#define _OKAPI_CONTINUOUSROTARYSENSOR_HPP_

#include "api.h"
#include "okapi/device/rotarysensor/rotarySensor.hpp"

namespace okapi {
class ContinuousRotarySensor : public RotarySensor {
  public:
  /**
   * Reset the sensor to zero.
   *
   * @return 1 on suceess, PROS_ERR on fail
   */
  virtual std::int32_t reset() const = 0;
};
} // namespace okapi

#endif
