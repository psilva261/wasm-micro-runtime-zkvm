/*
 * Copyright (C) 2019 Intel Corporation.  All rights reserved.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#include "platform_api_vmcore.h"

#define TRACE_FUNC() os_printf("undefined %s\n", __FUNCTION__)
#define TRACE_OCALL_FAIL() os_printf("ocall %s failed!\n", __FUNCTION__)

int
ocall_clock_gettime(int *p_ret, unsigned clock_id, void *tp_buf,
                    unsigned int tp_buf_size);
int
ocall_clock_getres(int *p_ret, int clock_id, void *res_buf,
                   unsigned int res_buf_size);
int
ocall_utimensat(int *p_ret, int dirfd, const char *pathname,
                const void *times_buf, unsigned int times_buf_size, int flags);
int
ocall_futimens(int *p_ret, int fd, const void *times_buf,
               unsigned int times_buf_size);
int
ocall_clock_nanosleep(int *p_ret, unsigned clock_id, int flags,
                      const void *req_buf, unsigned int req_buf_size,
                      const void *rem_buf, unsigned int rem_buf_size);

uint64
os_time_get_boot_us()
{
    return 0;
}

uint64
os_time_thread_cputime_us(void)
{
    return 0;
}
