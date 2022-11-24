/*
 *
 * Copyright 2013-2022 Software Radio Systems Limited
 *
 * By using this file, you agree to the terms and conditions set
 * forth in the LICENSE file which can be found at the top level of
 * the distribution.
 *
 */

#pragma once

#include "ngc.h"
#include "srsgnb/support/timers.h"
#include <memory>

namespace srsgnb {

namespace srs_cu_cp {

/// Creates an instance of an NGC interface, notifying outgoing packets on the specified listener object.
std::unique_ptr<ngc_interface> create_ngc(timer_manager& timers_, ngc_message_notifier& ngc_notifier_);

} // namespace srs_cu_cp

} // namespace srsgnb