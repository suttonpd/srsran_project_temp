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

#include "f1u_bearer_logger.h"
#include "srsgnb/f1u/cu_up/f1u_bearer.h"
#include "srsgnb/f1u/cu_up/f1u_rx_delivery_notifier.h"
#include "srsgnb/f1u/cu_up/f1u_rx_sdu_notifier.h"
#include "srsgnb/f1u/cu_up/f1u_tx_pdu_notifier.h"
#include "srsgnb/ran/lcid.h"

namespace srsgnb {
namespace srs_cu_up {

class f1u_bearer_impl final : public f1u_bearer, public f1u_rx_pdu_handler, public f1u_tx_sdu_handler
{
public:
  f1u_bearer_impl(uint32_t                  ue_index,
                  drb_id_t                  drb_id_,
                  f1u_tx_pdu_notifier&      tx_pdu_notifier_,
                  f1u_rx_delivery_notifier& rx_delivery_notifier_,
                  f1u_rx_sdu_notifier&      rx_sdu_notifier_);

  virtual f1u_rx_pdu_handler& get_rx_pdu_handler() override { return *this; }
  virtual f1u_tx_sdu_handler& get_tx_sdu_handler() override { return *this; }

  void handle_pdu(nru_ul_message msg) override;
  void handle_sdu(pdcp_tx_pdu sdu) override;
  void discard_sdu(uint32_t count) override;

private:
  f1u_bearer_logger         logger;
  f1u_tx_pdu_notifier&      tx_pdu_notifier;
  f1u_rx_delivery_notifier& rx_delivery_notifier;
  f1u_rx_sdu_notifier&      rx_sdu_notifier;
};

} // namespace srs_cu_up
} // namespace srsgnb
