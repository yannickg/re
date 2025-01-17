/**
 * @file re_async.h async
 *
 * Copyright (C) 2022 Sebastian Reimers
 */

struct re_async;

typedef int (re_async_work_h)(void *arg);
typedef void (re_async_h)(int err, void *arg);

int re_async_alloc(struct re_async **asyncp, uint16_t workers);
int re_async(struct re_async *a, re_async_work_h *work, re_async_h *cb,
	     void *arg);
