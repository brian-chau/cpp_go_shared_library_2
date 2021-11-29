#pragma once
#include "types.h"
extern "C" {
    int    get_num_records(const char * filename);
    S64    get_pickup_time(const char * filename,        int record_num);
    S64    get_dropoff_time(const char * filename,       int record_num);
    int    get_passenger_count(const char * filename,    int record_num);
    int    get_vendor_id(const char * filename,          int record_num);
    int    get_store_forward_flag(const char * filename, int record_num);
    int    get_payment_type(const char * filename,       int record_num);
    int    get_pu_location_id(const char * filename,     int record_num);
    int    get_do_location_id(const char * filename,     int record_num);
    int    get_record_code_id(const char * filename,     int record_num);
    double get_trip_distance(const char * filename,      int record_num);
}

