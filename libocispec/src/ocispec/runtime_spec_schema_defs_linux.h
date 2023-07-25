// Generated from defs-linux.json. Do not edit!
#ifndef RUNTIME_SPEC_SCHEMA_DEFS_LINUX_SCHEMA_H
#define RUNTIME_SPEC_SCHEMA_DEFS_LINUX_SCHEMA_H

#include <sys/types.h>
#include <stdint.h>
#include "ocispec/json_common.h"
#include "ocispec/runtime_spec_schema_defs.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    char *domain;

    char **flags;
    size_t flags_len;

    yajl_val _residual;
}
runtime_spec_schema_defs_linux_personality;

void free_runtime_spec_schema_defs_linux_personality (runtime_spec_schema_defs_linux_personality *ptr);

runtime_spec_schema_defs_linux_personality *make_runtime_spec_schema_defs_linux_personality (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_defs_linux_personality (yajl_gen g, const runtime_spec_schema_defs_linux_personality *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    uint32_t index;

    unsigned int index_present : 1;
    uint64_t value;

    unsigned int value_present : 1;
    uint64_t value_two;

    unsigned int value_two_present : 1;
    char *op;

    yajl_val _residual;
}
runtime_spec_schema_defs_linux_syscall_arg;

void free_runtime_spec_schema_defs_linux_syscall_arg (runtime_spec_schema_defs_linux_syscall_arg *ptr);

runtime_spec_schema_defs_linux_syscall_arg *make_runtime_spec_schema_defs_linux_syscall_arg (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_defs_linux_syscall_arg (yajl_gen g, const runtime_spec_schema_defs_linux_syscall_arg *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    char **names;
    size_t names_len;

    char *action;

    uint32_t errno_ret;

    unsigned int errno_ret_present : 1;
    runtime_spec_schema_defs_linux_syscall_arg **args;
    size_t args_len;

    yajl_val _residual;
}
runtime_spec_schema_defs_linux_syscall;

void free_runtime_spec_schema_defs_linux_syscall (runtime_spec_schema_defs_linux_syscall *ptr);

runtime_spec_schema_defs_linux_syscall *make_runtime_spec_schema_defs_linux_syscall (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_defs_linux_syscall (yajl_gen g, const runtime_spec_schema_defs_linux_syscall *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    char *type;

    char *path;

    int file_mode;

    unsigned int file_mode_present : 1;
    int64_t major;

    unsigned int major_present : 1;
    int64_t minor;

    unsigned int minor_present : 1;
    uid_t uid;

    unsigned int uid_present : 1;
    gid_t gid;

    unsigned int gid_present : 1;
    yajl_val _residual;
}
runtime_spec_schema_defs_linux_device;

void free_runtime_spec_schema_defs_linux_device (runtime_spec_schema_defs_linux_device *ptr);

runtime_spec_schema_defs_linux_device *make_runtime_spec_schema_defs_linux_device (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_defs_linux_device (yajl_gen g, const runtime_spec_schema_defs_linux_device *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    int64_t major;

    unsigned int major_present : 1;
    int64_t minor;

    unsigned int minor_present : 1;
    yajl_val _residual;
}
runtime_spec_schema_defs_linux_block_io_device;

void free_runtime_spec_schema_defs_linux_block_io_device (runtime_spec_schema_defs_linux_block_io_device *ptr);

runtime_spec_schema_defs_linux_block_io_device *make_runtime_spec_schema_defs_linux_block_io_device (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_defs_linux_block_io_device (yajl_gen g, const runtime_spec_schema_defs_linux_block_io_device *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    int64_t major;

    unsigned int major_present : 1;
    int64_t minor;

    unsigned int minor_present : 1;
    uint16_t weight;

    unsigned int weight_present : 1;
    uint16_t leaf_weight;

    unsigned int leaf_weight_present : 1;
    yajl_val _residual;
}
runtime_spec_schema_defs_linux_block_io_device_weight;

void free_runtime_spec_schema_defs_linux_block_io_device_weight (runtime_spec_schema_defs_linux_block_io_device_weight *ptr);

runtime_spec_schema_defs_linux_block_io_device_weight *make_runtime_spec_schema_defs_linux_block_io_device_weight (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_defs_linux_block_io_device_weight (yajl_gen g, const runtime_spec_schema_defs_linux_block_io_device_weight *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    int64_t major;

    unsigned int major_present : 1;
    int64_t minor;

    unsigned int minor_present : 1;
    uint64_t rate;

    unsigned int rate_present : 1;
    yajl_val _residual;
}
runtime_spec_schema_defs_linux_block_io_device_throttle;

void free_runtime_spec_schema_defs_linux_block_io_device_throttle (runtime_spec_schema_defs_linux_block_io_device_throttle *ptr);

runtime_spec_schema_defs_linux_block_io_device_throttle *make_runtime_spec_schema_defs_linux_block_io_device_throttle (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_defs_linux_block_io_device_throttle (yajl_gen g, const runtime_spec_schema_defs_linux_block_io_device_throttle *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    bool allow;

    unsigned int allow_present : 1;
    char *type;

    int64_t major;

    unsigned int major_present : 1;
    int64_t minor;

    unsigned int minor_present : 1;
    char *access;

    yajl_val _residual;
}
runtime_spec_schema_defs_linux_device_cgroup;

void free_runtime_spec_schema_defs_linux_device_cgroup (runtime_spec_schema_defs_linux_device_cgroup *ptr);

runtime_spec_schema_defs_linux_device_cgroup *make_runtime_spec_schema_defs_linux_device_cgroup (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_defs_linux_device_cgroup (yajl_gen g, const runtime_spec_schema_defs_linux_device_cgroup *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    char *name;

    uint32_t priority;

    unsigned int priority_present : 1;
    yajl_val _residual;
}
runtime_spec_schema_defs_linux_network_interface_priority;

void free_runtime_spec_schema_defs_linux_network_interface_priority (runtime_spec_schema_defs_linux_network_interface_priority *ptr);

runtime_spec_schema_defs_linux_network_interface_priority *make_runtime_spec_schema_defs_linux_network_interface_priority (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_defs_linux_network_interface_priority (yajl_gen g, const runtime_spec_schema_defs_linux_network_interface_priority *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    uint32_t hca_handles;

    unsigned int hca_handles_present : 1;
    uint32_t hca_objects;

    unsigned int hca_objects_present : 1;
    yajl_val _residual;
}
runtime_spec_schema_defs_linux_rdma;

void free_runtime_spec_schema_defs_linux_rdma (runtime_spec_schema_defs_linux_rdma *ptr);

runtime_spec_schema_defs_linux_rdma *make_runtime_spec_schema_defs_linux_rdma (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_defs_linux_rdma (yajl_gen g, const runtime_spec_schema_defs_linux_rdma *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    char *type;

    char *path;

    yajl_val _residual;
}
runtime_spec_schema_defs_linux_namespace_reference;

void free_runtime_spec_schema_defs_linux_namespace_reference (runtime_spec_schema_defs_linux_namespace_reference *ptr);

runtime_spec_schema_defs_linux_namespace_reference *make_runtime_spec_schema_defs_linux_namespace_reference (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_defs_linux_namespace_reference (yajl_gen g, const runtime_spec_schema_defs_linux_namespace_reference *ptr, const struct parser_context *ctx, parser_error *err);

#ifdef __cplusplus
}
#endif

#endif

