// Generated from defs-zos.json. Do not edit!
#ifndef RUNTIME_SPEC_SCHEMA_DEFS_ZOS_SCHEMA_H
#define RUNTIME_SPEC_SCHEMA_DEFS_ZOS_SCHEMA_H

#include <sys/types.h>
#include <stdint.h>
#include "ocispec/json_common.h"
#include "ocispec/runtime_spec_schema_defs.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    char *path;

    char *type;

    int64_t major;

    unsigned int major_present : 1;
    int64_t minor;

    unsigned int minor_present : 1;
    int file_mode;

    unsigned int file_mode_present : 1;
    uid_t uid;

    unsigned int uid_present : 1;
    gid_t gid;

    unsigned int gid_present : 1;
    yajl_val _residual;
}
runtime_spec_schema_defs_zos_device;

void free_runtime_spec_schema_defs_zos_device (runtime_spec_schema_defs_zos_device *ptr);

runtime_spec_schema_defs_zos_device *make_runtime_spec_schema_defs_zos_device (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_defs_zos_device (yajl_gen g, const runtime_spec_schema_defs_zos_device *ptr, const struct parser_context *ctx, parser_error *err);

#ifdef __cplusplus
}
#endif

#endif

