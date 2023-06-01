/*
 *
 * Copyright 2021-2023 Software Radio Systems Limited
 *
 * By using this file, you agree to the terms and conditions set
 * forth in the LICENSE file which can be found at the top level of
 * the distribution.
 *
 */

#pragma once

// This file was generated using the following MATLAB class on 01-06-2023:
//   + "srsPRACHDetectorUnittest.m"

#include "../../support/prach_buffer_test_doubles.h"
#include "srsran/phy/upper/channel_processors/prach_detector.h"
#include "srsran/support/file_vector.h"

namespace srsran {

using sequence_data_type =
    file_tensor<static_cast<unsigned>(prach_buffer_tensor::dims::count), cf_t, prach_buffer_tensor::dims>;

struct context_t {
  prach_detector::configuration config;
  prach_detection_result        result;
};

struct test_case_t {
  context_t          context;
  sequence_data_type symbols;
};

static const std::vector<test_case_t> prach_detector_test_data = {
    // clang-format off
  {{{834, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{57, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input0.dat", {839, 1, 1, 1, 1}}},
  {{{595, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{4, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input1.dat", {839, 1, 1, 1, 2}}},
  {{{434, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{41, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input2.dat", {839, 1, 1, 1, 4}}},
  {{{729, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 12, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{26, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input3.dat", {839, 1, 1, 1, 1}}},
  {{{592, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 11, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{6, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input4.dat", {839, 1, 1, 1, 2}}},
  {{{473, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 15, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{17, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input5.dat", {839, 1, 1, 1, 4}}},
  {{{755, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 9, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{50, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input6.dat", {839, 1, 1, 1, 1}}},
  {{{776, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 13, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{55, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input7.dat", {839, 1, 1, 1, 2}}},
  {{{435, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 1, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{27, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input8.dat", {839, 1, 1, 1, 4}}},
  {{{198, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 5, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{46, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input9.dat", {839, 1, 1, 1, 1}}},
  {{{102, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 6, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{56, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input10.dat", {839, 1, 1, 1, 2}}},
  {{{297, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 1, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{26, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input11.dat", {839, 1, 1, 1, 4}}},
  {{{327, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{39, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input12.dat", {839, 2, 1, 1, 1}}},
  {{{883, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{33, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input13.dat", {839, 2, 1, 1, 2}}},
  {{{772, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{17, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input14.dat", {839, 2, 1, 1, 4}}},
  {{{33, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 12, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{42, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input15.dat", {839, 2, 1, 1, 1}}},
  {{{56, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 2, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{46, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input16.dat", {839, 2, 1, 1, 2}}},
  {{{496, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 2, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{38, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input17.dat", {839, 2, 1, 1, 4}}},
  {{{553, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 9, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{37, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input18.dat", {839, 2, 1, 1, 1}}},
  {{{627, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 12, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{35, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input19.dat", {839, 2, 1, 1, 2}}},
  {{{53, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 1, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{6, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input20.dat", {839, 2, 1, 1, 4}}},
  {{{829, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 7, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{52, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input21.dat", {839, 2, 1, 1, 1}}},
  {{{592, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 15, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{48, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input22.dat", {839, 2, 1, 1, 2}}},
  {{{304, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 7, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{6, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input23.dat", {839, 2, 1, 1, 4}}},
  {{{35, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{8, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input24.dat", {839, 4, 1, 1, 1}}},
  {{{817, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{20, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input25.dat", {839, 4, 1, 1, 2}}},
  {{{957, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{26, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input26.dat", {839, 4, 1, 1, 4}}},
  {{{59, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 5, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{56, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input27.dat", {839, 4, 1, 1, 1}}},
  {{{459, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 11, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{51, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input28.dat", {839, 4, 1, 1, 2}}},
  {{{746, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 2, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{24, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input29.dat", {839, 4, 1, 1, 4}}},
  {{{184, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 12, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{50, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input30.dat", {839, 4, 1, 1, 1}}},
  {{{341, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 13, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{62, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input31.dat", {839, 4, 1, 1, 2}}},
  {{{882, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 13, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{2, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input32.dat", {839, 4, 1, 1, 4}}},
  {{{642, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 9, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{36, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input33.dat", {839, 4, 1, 1, 1}}},
  {{{41, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 7, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{52, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input34.dat", {839, 4, 1, 1, 2}}},
  {{{148, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 7, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{39, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input35.dat", {839, 4, 1, 1, 4}}},
  {{{634, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{27, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input36.dat", {839, 4, 1, 1, 1}}},
  {{{1018, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{48, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input37.dat", {839, 4, 1, 1, 2}}},
  {{{127, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{40, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input38.dat", {839, 4, 1, 1, 4}}},
  {{{894, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 13, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{25, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input39.dat", {839, 4, 1, 1, 1}}},
  {{{465, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 12, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{5, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input40.dat", {839, 4, 1, 1, 2}}},
  {{{218, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 2, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{33, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input41.dat", {839, 4, 1, 1, 4}}},
  {{{248, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 8, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{3, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input42.dat", {839, 4, 1, 1, 1}}},
  {{{46, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 2, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{38, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input43.dat", {839, 4, 1, 1, 2}}},
  {{{200, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 5, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{46, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input44.dat", {839, 4, 1, 1, 4}}},
  {{{228, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 4, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{49, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input45.dat", {839, 4, 1, 1, 1}}},
  {{{875, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 7, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{56, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input46.dat", {839, 4, 1, 1, 2}}},
  {{{405, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 3, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{30, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input47.dat", {839, 4, 1, 1, 4}}},
  {{{497, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("15.000000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{32, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input48.dat", {139, 12, 1, 1, 1}}},
  {{{858, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("15.000000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{23, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input49.dat", {139, 12, 1, 1, 2}}},
  {{{358, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("15.000000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{24, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input50.dat", {139, 12, 1, 1, 4}}},
  {{{800, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 11, 0, 64, to_ra_subcarrier_spacing("15.000000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{13, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input51.dat", {139, 12, 1, 1, 1}}},
  {{{796, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 11, 0, 64, to_ra_subcarrier_spacing("15.000000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{23, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input52.dat", {139, 12, 1, 1, 2}}},
  {{{923, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 11, 0, 64, to_ra_subcarrier_spacing("15.000000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{46, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input53.dat", {139, 12, 1, 1, 4}}},
  {{{384, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 11, 0, 64, to_ra_subcarrier_spacing("15.000000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{15, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input54.dat", {139, 12, 1, 1, 1}}},
  {{{92, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 11, 0, 64, to_ra_subcarrier_spacing("15.000000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{40, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input55.dat", {139, 12, 1, 1, 2}}},
  {{{98, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 11, 0, 64, to_ra_subcarrier_spacing("15.000000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{25, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input56.dat", {139, 12, 1, 1, 4}}},
  {{{985, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 11, 0, 64, to_ra_subcarrier_spacing("15.000000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{14, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input57.dat", {139, 12, 1, 1, 1}}},
  {{{634, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 11, 0, 64, to_ra_subcarrier_spacing("15.000000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{21, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input58.dat", {139, 12, 1, 1, 2}}},
  {{{612, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 11, 0, 64, to_ra_subcarrier_spacing("15.000000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{16, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input59.dat", {139, 12, 1, 1, 4}}},
  {{{396, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{13, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input60.dat", {839, 1, 1, 1, 1}}},
  {{{117, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{37, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input61.dat", {839, 1, 1, 1, 2}}},
  {{{568, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{26, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input62.dat", {839, 1, 1, 1, 4}}},
  {{{136, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 2, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{44, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input63.dat", {839, 1, 1, 1, 1}}},
  {{{689, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 15, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{11, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input64.dat", {839, 1, 1, 1, 2}}},
  {{{316, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 11, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{47, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input65.dat", {839, 1, 1, 1, 4}}},
  {{{411, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 5, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{14, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input66.dat", {839, 1, 1, 1, 1}}},
  {{{212, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 5, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{23, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input67.dat", {839, 1, 1, 1, 2}}},
  {{{570, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 9, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{56, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input68.dat", {839, 1, 1, 1, 4}}},
  {{{145, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 1, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{34, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input69.dat", {839, 1, 1, 1, 1}}},
  {{{505, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 11, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{62, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input70.dat", {839, 1, 1, 1, 2}}},
  {{{282, to_prach_format_type("0"), restricted_set_config::UNRESTRICTED, 11, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{38, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input71.dat", {839, 1, 1, 1, 4}}},
  {{{288, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{56, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input72.dat", {839, 2, 1, 1, 1}}},
  {{{345, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{25, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input73.dat", {839, 2, 1, 1, 2}}},
  {{{310, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{52, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input74.dat", {839, 2, 1, 1, 4}}},
  {{{501, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 15, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{38, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input75.dat", {839, 2, 1, 1, 1}}},
  {{{362, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 3, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{13, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input76.dat", {839, 2, 1, 1, 2}}},
  {{{540, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 12, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{35, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input77.dat", {839, 2, 1, 1, 4}}},
  {{{304, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 15, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{18, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input78.dat", {839, 2, 1, 1, 1}}},
  {{{657, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 2, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{26, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input79.dat", {839, 2, 1, 1, 2}}},
  {{{804, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 10, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{21, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input80.dat", {839, 2, 1, 1, 4}}},
  {{{427, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 3, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{62, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input81.dat", {839, 2, 1, 1, 1}}},
  {{{352, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 3, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{13, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input82.dat", {839, 2, 1, 1, 2}}},
  {{{727, to_prach_format_type("1"), restricted_set_config::UNRESTRICTED, 6, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{1, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input83.dat", {839, 2, 1, 1, 4}}},
  {{{673, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{2, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input84.dat", {839, 4, 1, 1, 1}}},
  {{{212, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{38, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input85.dat", {839, 4, 1, 1, 2}}},
  {{{302, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{40, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input86.dat", {839, 4, 1, 1, 4}}},
  {{{1023, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 11, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{59, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input87.dat", {839, 4, 1, 1, 1}}},
  {{{778, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 12, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{4, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input88.dat", {839, 4, 1, 1, 2}}},
  {{{511, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 13, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{55, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input89.dat", {839, 4, 1, 1, 4}}},
  {{{618, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 5, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{21, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input90.dat", {839, 4, 1, 1, 1}}},
  {{{340, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 3, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{25, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input91.dat", {839, 4, 1, 1, 2}}},
  {{{310, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 11, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{30, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input92.dat", {839, 4, 1, 1, 4}}},
  {{{9, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 9, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{3, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input93.dat", {839, 4, 1, 1, 1}}},
  {{{196, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 1, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{20, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input94.dat", {839, 4, 1, 1, 2}}},
  {{{936, to_prach_format_type("2"), restricted_set_config::UNRESTRICTED, 2, 0, 64, to_ra_subcarrier_spacing("1.250000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{37, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input95.dat", {839, 4, 1, 1, 4}}},
  {{{755, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{35, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input96.dat", {839, 4, 1, 1, 1}}},
  {{{847, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{56, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input97.dat", {839, 4, 1, 1, 2}}},
  {{{841, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{1, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input98.dat", {839, 4, 1, 1, 4}}},
  {{{372, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 14, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{26, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input99.dat", {839, 4, 1, 1, 1}}},
  {{{804, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 3, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{32, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input100.dat", {839, 4, 1, 1, 2}}},
  {{{20, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 2, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{41, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input101.dat", {839, 4, 1, 1, 4}}},
  {{{590, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 12, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{30, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input102.dat", {839, 4, 1, 1, 1}}},
  {{{20, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 5, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{54, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input103.dat", {839, 4, 1, 1, 2}}},
  {{{1018, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 7, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{62, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input104.dat", {839, 4, 1, 1, 4}}},
  {{{230, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 14, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{44, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input105.dat", {839, 4, 1, 1, 1}}},
  {{{518, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 15, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{45, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input106.dat", {839, 4, 1, 1, 2}}},
  {{{817, to_prach_format_type("3"), restricted_set_config::UNRESTRICTED, 7, 0, 64, to_ra_subcarrier_spacing("5.000000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{55, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input107.dat", {839, 4, 1, 1, 4}}},
  {{{343, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("30.000000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{54, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input108.dat", {139, 12, 1, 1, 1}}},
  {{{373, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("30.000000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{22, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input109.dat", {139, 12, 1, 1, 2}}},
  {{{771, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 0, 0, 64, to_ra_subcarrier_spacing("30.000000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{43, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input110.dat", {139, 12, 1, 1, 4}}},
  {{{627, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 14, 0, 64, to_ra_subcarrier_spacing("30.000000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{29, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input111.dat", {139, 12, 1, 1, 1}}},
  {{{1008, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 14, 0, 64, to_ra_subcarrier_spacing("30.000000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{30, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input112.dat", {139, 12, 1, 1, 2}}},
  {{{922, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 14, 0, 64, to_ra_subcarrier_spacing("30.000000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{13, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input113.dat", {139, 12, 1, 1, 4}}},
  {{{876, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 14, 0, 64, to_ra_subcarrier_spacing("30.000000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{41, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input114.dat", {139, 12, 1, 1, 1}}},
  {{{985, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 14, 0, 64, to_ra_subcarrier_spacing("30.000000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{60, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input115.dat", {139, 12, 1, 1, 2}}},
  {{{308, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 14, 0, 64, to_ra_subcarrier_spacing("30.000000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{44, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input116.dat", {139, 12, 1, 1, 4}}},
  {{{519, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 14, 0, 64, to_ra_subcarrier_spacing("30.000000kHz"), 1}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{18, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input117.dat", {139, 12, 1, 1, 1}}},
  {{{287, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 14, 0, 64, to_ra_subcarrier_spacing("30.000000kHz"), 2}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{5, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input118.dat", {139, 12, 1, 1, 2}}},
  {{{673, to_prach_format_type("B4"), restricted_set_config::UNRESTRICTED, 14, 0, 64, to_ra_subcarrier_spacing("30.000000kHz"), 4}, {0, phy_time_unit::from_seconds(0.0), phy_time_unit::from_seconds(0.0), {{15, phy_time_unit::from_seconds(0.0), 0, 0}}}}, {"test_data/prach_detector_test_input119.dat", {139, 12, 1, 1, 4}}},
    // clang-format on
};

} // namespace srsran
