#include <chrono>
#include <cstring>
#include <fstream>
#include <iostream>
#include <limits>
#include <numeric>
#include <sstream>
#include <string>
#include <sys/stat.h>

#include "libABC.h"

int get_num_records(const char * filename) {
    struct stat st;
    int         m_file_size;

    if (stat(filename, &st) != 0) {
        m_file_size = 0;
    }
    m_file_size = st.st_size;
    return m_file_size / RECORD_SIZE;
}

S64 get_pickup_time(const char * filename, int record_num) {
    S64 pickup_time(0);

    std::string   line;
    std::ifstream file(filename);

    if (file.is_open()) {
        int pos = record_num * RECORD_SIZE;
        file.seekg(pos, std::ios::beg);

        // Start counting records
        Data data;
        memset(&data, 0, RECORD_SIZE);
        file.read((char*)data.buffer, RECORD_SIZE);
        pickup_time = data.record.tpep_pickup_datetime;
        file.close();
        return pickup_time;
    }
    std::cout << "Cannot open file" << std::endl;
    return 0;
}

S64 get_dropoff_time(const char * filename, int record_num) {
    S64 dropoff_time(0);

    std::string   line;
    std::ifstream file(filename);

    if (file.is_open()) {
        int pos = record_num * RECORD_SIZE;
        file.seekg(pos, std::ios::beg);

        // Start counting records
        Data data;
        memset(&data, 0, RECORD_SIZE);
        file.read((char*)data.buffer, RECORD_SIZE);
        dropoff_time = data.record.tpep_dropoff_datetime;
        file.close();
        return dropoff_time;
    }
    std::cout << "Cannot open file" << std::endl;
    return 0;
}

int get_passenger_count(const char * filename, int record_num) {
    int passenger_count(0);

    std::string   line;
    std::ifstream file(filename);

    if (file.is_open()) {
        int pos = record_num * RECORD_SIZE;
        file.seekg(pos, std::ios::beg);

        // Start counting records
        Data data;
        memset(&data, 0, RECORD_SIZE);
        file.read((char*)data.buffer, RECORD_SIZE);
        passenger_count = data.record.passenger_count;
        file.close();
        return passenger_count;
    }
    std::cout << "Cannot open file" << std::endl;
    return 0;
}

int get_vendor_id(const char * filename, int record_num) {
    int vendor_id(0);

    std::string   line;
    std::ifstream file(filename);

    if (file.is_open()) {
        int pos = record_num * RECORD_SIZE;
        file.seekg(pos, std::ios::beg);

        // Start counting records
        Data data;
        memset(&data, 0, RECORD_SIZE);
        file.read((char*)data.buffer, RECORD_SIZE);
        vendor_id = data.record.vendor_id;
        file.close();
        return vendor_id;
    }
    std::cout << "Cannot open file" << std::endl;
    return 0;
}

int get_store_forward_flag(const char * filename, int record_num) {
    int store_forward_flag(0);

    std::string   line;
    std::ifstream file(filename);

    if (file.is_open()) {
        int pos = record_num * RECORD_SIZE;
        file.seekg(pos, std::ios::beg);

        // Start counting records
        Data data;
        memset(&data, 0, RECORD_SIZE);
        file.read((char*)data.buffer, RECORD_SIZE);
        store_forward_flag = data.record.store_and_forward_flag;
        file.close();
        return store_forward_flag;
    }
    std::cout << "Cannot open file" << std::endl;
    return 0;
}

int get_payment_type(const char * filename, int record_num) {
    int payment_type(0);

    std::string   line;
    std::ifstream file(filename);

    if (file.is_open()) {
        int pos = record_num * RECORD_SIZE;
        file.seekg(pos, std::ios::beg);

        // Start counting records
        Data data;
        memset(&data, 0, RECORD_SIZE);
        file.read((char*)data.buffer, RECORD_SIZE);
        payment_type = data.record.payment_type;
        file.close();
        return payment_type;
    }
    std::cout << "Cannot open file" << std::endl;
    return 0;
}

int get_pu_location_id(const char * filename, int record_num) {
    int pu_location_id(0);

    std::string   line;
    std::ifstream file(filename);

    if (file.is_open()) {
        int pos = record_num * RECORD_SIZE;
        file.seekg(pos, std::ios::beg);

        // Start counting records
        Data data;
        memset(&data, 0, RECORD_SIZE);
        file.read((char*)data.buffer, RECORD_SIZE);
        pu_location_id = data.record.pu_location_id;
        file.close();
        return pu_location_id;
    }
    std::cout << "Cannot open file" << std::endl;
    return 0;
}

int get_do_location_id(const char * filename, int record_num) {
    int do_location_id(0);

    std::string   line;
    std::ifstream file(filename);

    if (file.is_open()) {
        int pos = record_num * RECORD_SIZE;
        file.seekg(pos, std::ios::beg);

        // Start counting records
        Data data;
        memset(&data, 0, RECORD_SIZE);
        file.read((char*)data.buffer, RECORD_SIZE);
        do_location_id = data.record.do_location_id;
        file.close();
        return do_location_id;
    }
    std::cout << "Cannot open file" << std::endl;
    return 0;
}

int get_record_code_id(const char * filename, int record_num) {
    int rate_code_id(0);

    std::string   line;
    std::ifstream file(filename);

    if (file.is_open()) {
        int pos = record_num * RECORD_SIZE;
        file.seekg(pos, std::ios::beg);

        // Start counting records
        Data data;
        memset(&data, 0, RECORD_SIZE);
        file.read((char*)data.buffer, RECORD_SIZE);
        rate_code_id = data.record.rate_code_id;
        file.close();
        return rate_code_id;
    }
    std::cout << "Cannot open file" << std::endl;
    return 0;
}

double get_trip_distance(const char * filename, int record_num) {
    double trip_distance(0);

    std::string   line;
    std::ifstream file(filename);

    if (file.is_open()) {
        int pos = record_num * RECORD_SIZE;
        file.seekg(pos, std::ios::beg);

        // Start counting records
        Data data;
        memset(&data, 0, RECORD_SIZE);
        file.read((char*)data.buffer, RECORD_SIZE);
        trip_distance = data.record.trip_distance * 0.01;
        file.close();
        return trip_distance;
    }
    std::cout << "Cannot open file" << std::endl;
    return 0;
}

