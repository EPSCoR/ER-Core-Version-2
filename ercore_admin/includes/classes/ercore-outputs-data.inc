<?php

/**
 * @file
 * ERcore Outputs Class for the ERCore Admin module.
 */

require_once drupal_get_path('module', 'ercore_admin') . '/includes/ercore-admin-var.inc';

/**
 * Class defines outputs node export object.
 */
class ErcoreOutputs {
  public $type = '';
  public $subType = '';
  public $value1 = 0;
  public $value2 = 0;
  public $value3 = 0;
  public $value4 = 0;

  /**
   * Constructor.
   */
  public function __construct() {

  }

  /**
   * Builds Outputs data object with data.
   *
   * @param object $object
   *   Receives outputs data object for data placement.
   * @param array $data
   *   Receives data for placement in data object.
   *
   * @return object $object
   *   Returns outputs data object.
   */
  public function ercoreOutputsBuild(&$object, &$data, &$date_range) {
    // Three step default date to compensate for yyyy/mm date format rounding.
    $default_string = ercore_admin_view_start_end_dates();
    $default_array = ercore_admin_date_array_to_unix($default_string);
    $default_array = ercore_admin_date_array_converter($default_array);
    $within = NULL;

    foreach ($data as $data_row) {
      $current = FALSE;
      // Identifying values to compare dare ranges with.
      // Patent data build.
      if ($object->type == 'Patent') {
        // Patent data, subtype Pending.
        if ($object->subType == 'Pending') {
          if (isset($data_row->field_field_ercore_pt_provisional[0]['raw'])) {
            $within = $data_row->field_field_ercore_pt_provisional[0]['raw']['value'];
          }
        }
        // Patent data, subtype Awarded.
        elseif ($object->subType == 'Awarded') {
          if (isset($data_row->field_field_ercore_pt_award[0]['raw'])) {
            $within = $data_row->field_field_ercore_pt_award[0]['raw']['value'];
          }
        }
        // Patent data, subtype Licensed.
        else {
          if (isset($data_row->field_field_ercore_pt_date[0]['raw'])) {
            $within = $data_row->field_field_ercore_pt_date[0]['raw']['value'];
          }
        }
        $current = TRUE;
        // Compare date ranges.
        $this->value2 = $this->value2 + 1;
      }

      // Proposal data build.
      elseif ($object->type == 'Proposal') {
        // Proposal data, subtype Pending.
        if ($object->subType == 'Submitted') {
          if (isset($data_row->field_field_ercore_pp_proposal_submit[0]['raw'])) {
            $within = $data_row->field_field_ercore_pp_proposal_submit[0]['raw']['value'];
          }
        }
        // Patent data, subtype Awarded.
        elseif ($object->subType == 'Awarded') {
          if (isset($data_row->field_field_ercore_pp_proposal_date[0]['raw'])) {
            $within = $data_row->field_field_ercore_pp_proposal_date[0]['raw']['value'];
          }
        }
        // Patent data, subtype Pending.
        else {
          if (isset($data_row->field_field_ercore_pp_proposal_pending[0]['raw'])) {
            $within = $data_row->field_field_ercore_pp_proposal_pending[0]['raw']['value'];
          }
        }
        if ($this->ercoreOutputsDateCallback($within, $date_range) == TRUE && $date_range != $default_array) {
          $this->value1 = $this->value1 + 1;
          if (isset($data_row->field_field_ercore_pp_award_req_dec[0]['raw'])) {
            $this->value2 = $this->value2 + $data_row->field_field_ercore_pp_award_req_dec[0]['raw']['value'];
          }
        }
        $this->value3 = $this->value3 + 1;
        if (isset($data_row->field_field_ercore_pp_award_req_dec[0]['raw'])) {
          $this->value4 = $this->value4 + $data_row->field_field_ercore_pp_award_req_dec[0]['raw']['value'];
        }
      }
      // Publication data build.
      elseif ($object->type == 'Publication') {
        if (isset($data_row->field_field_ercore_pb_date[0]['raw'])) {
          $within = $data_row->field_field_ercore_pb_date[0]['raw']['value'];
        }
        // Publication data, subtype Primary.
        if ($object->subType == 'Primary' && $data_row->field_field_ercore_pb_rii_support[0]['raw']['value'] == '0') {
          $current = TRUE;
          // Compare date ranges.
          $this->value2 = $this->value2 + 1;
        }

        // Publication data, subtype Partial.
        if ($object->subType == 'Partial' && $data_row->field_field_ercore_pb_rii_support[0]['raw']['value'] == '1') {
          $current = TRUE;
          // Compare date ranges.
          $this->value2 = $this->value2 + 1;
        }
      }
      else {
        if ($object->type == 'new-hire') {
          if (isset($data_row->field_field_ercore_us_hired_date[0]['raw'])) {
            $within = $data_row->field_field_ercore_us_hired_date[0]['raw']['value'];
          }
        }
        elseif ($object->type == 'post-doc') {
          if (isset($data_row->field_field_ercore_us_part_date[0]['raw'])) {
            $within = $data_row->field_field_ercore_us_part_date[0]['raw']['value'];
          }
        }
        elseif ($object->type == 'graduate') {
          if (isset($data_row->field_field_ercore_us_masters_act[0]['raw'])) {
            $within = $data_row->field_field_ercore_us_masters_act[0]['raw']['value'];
          }
        }
        else {
          if (isset($data_row->field_field_ercore_us_under_act[0]['raw'])) {
            $within = $data_row->field_field_ercore_us_under_act[0]['raw']['value'];
          }
        }
        if (isset($data_row->field_field_ercore_us_gender[0]['raw'])) {
          $gender = $data_row->field_field_ercore_us_gender[0]['raw']['value'];
        }
        else {
          $gender = NULL;
        }
        if (isset($data_row->field_field_ercore_us_race[0]['raw']['value'])) {
          $race = $data_row->field_field_ercore_us_race[0]['raw']['value'];
        }
        else {
          $race = NULL;
        }
        $urm = array(
          'American Indian',
          'Alaskan Native',
          'Native Hawaiian',
          'Pacific Islander',
          'Filipino',
        );

        if ($object->subType == 'Male' && $gender == '0') {
          $current = TRUE;
          $this->value2 = $this->value2 + 1;
        }
        elseif ($object->subType == 'Female' && $gender == '1') {
          $current = TRUE;
          $this->value2 = $this->value2 + 1;
        }
        elseif ($object->subType == 'Under-represented minority' && in_array($race, $urm)) {
          $current = TRUE;
          $this->value2 = $this->value2 + 1;
        }
        elseif ($object->subType == 'Disabled' && $data_row->field_field_ercore_us_disabilities[0]['rendered']['#markup'] != 'None') {
          $current = TRUE;
          $this->value2 = $this->value2 + 1;
        }
      }

      if ($current == TRUE && $this->ercoreOutputsDateCallback($within, $date_range) == TRUE&& $date_range != $default_array) {
        $this->value1 = $this->value1 + 1;
      }
    }

    return $object;
  }

  /**
   * Date Callback for validating a date within a range.
   *
   * @param string $within_date
   *   Receives date string for validation.
   * @param array $dates
   *   Receives date array for validation against string.
   *
   * @return bool boolean
   *   Returns boolean value based on date validation.
   */
  public static function ercoreOutputsDateCallback(&$within_date, &$dates) {
    if ($within_date == NULL) {
      return FALSE;
    }
    else {
      $within_date = strtotime($within_date);
      return (($dates[0][0]) <= $within_date && ($dates[0][1]) >= $within_date);
    }
  }

}