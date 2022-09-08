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

#include "srsgnb/adt/slot_array.h"
#include "srsgnb/du_manager/du_manager.h"
#include "srsgnb/f1_interface/du/f1ap_du.h"

namespace srsgnb {
namespace srs_du {

struct f1ap_du_ue_context {
  du_ue_index_t gnb_du_f1ap_ue_id = (du_ue_index_t)-1;
  du_ue_index_t gnb_cu_f1ap_ue_id = (du_ue_index_t)-1;
  rnti_t        crnti             = rnti_t::INVALID_RNTI;
};

struct f1ap_du_cell_context {};

struct f1ap_du_context {
  std::vector<f1ap_du_cell_context>              cell_ctxt_manager;
  slot_array<f1ap_du_ue_context, MAX_NOF_DU_UES> ue_ctxt_manager;

  uint64_t                                            gnb_du_id;
  std::string                                         gnb_du_name;
  std::vector<asn1::f1ap::gnb_du_served_cells_item_s> served_cells;
};

} // namespace srs_du
} // namespace srsgnb
