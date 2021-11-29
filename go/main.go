package main

// #include "libABC.h"
// #cgo CFLAGS: -I.
// #cgo LDFLAGS: -L. -lABC
import "C"

import (
    "fmt"
)

func main() {
    filename      := C.CString("out.bin")
    total_records := C.int(0)
    i             := C.int(0)

    total_records = C.get_num_records(filename)

    pc_total_count := 0
    for i = 0; i<total_records; i++ {
        passenger_count := C.get_passenger_count(filename, i);
        if passenger_count == 1 {
            pc_total_count += 1
        }
    }

    fmt.Println(pc_total_count)
}
