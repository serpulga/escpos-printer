#ifndef ESCPOSPRINTER_ERROR_H
#define ESCPOSPRINTER_ERROR_H

typedef enum escpos_error {
    ESCPOS_ERROR_NONE = 0,

    ESCPOS_ERROR_SOCK,
    ESCPOS_ERROR_INVALID_ADDR,
    ESCPOS_ERROR_CONNECTION_FAILED
} escpos_error;

extern escpos_error escpos_last_error();

#endif