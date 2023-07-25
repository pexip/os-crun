// Generated from config-linux.json. Do not edit!
#ifndef RUNTIME_SPEC_SCHEMA_CONFIG_LINUX_SCHEMA_H
#define RUNTIME_SPEC_SCHEMA_CONFIG_LINUX_SCHEMA_H

#include <sys/types.h>
#include <stdint.h>
#include "ocispec/json_common.h"
#include "ocispec/runtime_spec_schema_defs_linux.h"
#include "ocispec/runtime_spec_schema_defs.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    int64_t limit;

    unsigned int limit_present : 1;
    yajl_val _residual;
}
runtime_spec_schema_config_linux_resources_pids;

void free_runtime_spec_schema_config_linux_resources_pids (runtime_spec_schema_config_linux_resources_pids *ptr);

runtime_spec_schema_config_linux_resources_pids *make_runtime_spec_schema_config_linux_resources_pids (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_config_linux_resources_pids (yajl_gen g, const runtime_spec_schema_config_linux_resources_pids *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    uint16_t weight;

    unsigned int weight_present : 1;
    uint16_t leaf_weight;

    unsigned int leaf_weight_present : 1;
    runtime_spec_schema_defs_linux_block_io_device_throttle **throttle_read_bps_device;
    size_t throttle_read_bps_device_len;

    runtime_spec_schema_defs_linux_block_io_device_throttle **throttle_write_bps_device;
    size_t throttle_write_bps_device_len;

    runtime_spec_schema_defs_linux_block_io_device_throttle **throttle_read_iops_device;
    size_t throttle_read_iops_device_len;

    runtime_spec_schema_defs_linux_block_io_device_throttle **throttle_write_iops_device;
    size_t throttle_write_iops_device_len;

    runtime_spec_schema_defs_linux_block_io_device_weight **weight_device;
    size_t weight_device_len;

    yajl_val _residual;
}
runtime_spec_schema_config_linux_resources_block_io;

void free_runtime_spec_schema_config_linux_resources_block_io (runtime_spec_schema_config_linux_resources_block_io *ptr);

runtime_spec_schema_config_linux_resources_block_io *make_runtime_spec_schema_config_linux_resources_block_io (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_config_linux_resources_block_io (yajl_gen g, const runtime_spec_schema_config_linux_resources_block_io *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    char *cpus;

    char *mems;

    uint64_t period;

    unsigned int period_present : 1;
    int64_t quota;

    unsigned int quota_present : 1;
    uint64_t realtime_period;

    unsigned int realtime_period_present : 1;
    int64_t realtime_runtime;

    unsigned int realtime_runtime_present : 1;
    uint64_t shares;

    unsigned int shares_present : 1;
    int64_t idle;

    unsigned int idle_present : 1;
    yajl_val _residual;
}
runtime_spec_schema_config_linux_resources_cpu;

void free_runtime_spec_schema_config_linux_resources_cpu (runtime_spec_schema_config_linux_resources_cpu *ptr);

runtime_spec_schema_config_linux_resources_cpu *make_runtime_spec_schema_config_linux_resources_cpu (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_config_linux_resources_cpu (yajl_gen g, const runtime_spec_schema_config_linux_resources_cpu *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    char *page_size;
    uint64_t limit;
    unsigned int limit_present : 1;
}
runtime_spec_schema_config_linux_resources_hugepage_limits_element;

void free_runtime_spec_schema_config_linux_resources_hugepage_limits_element (runtime_spec_schema_config_linux_resources_hugepage_limits_element *ptr);

runtime_spec_schema_config_linux_resources_hugepage_limits_element *make_runtime_spec_schema_config_linux_resources_hugepage_limits_element (yajl_val tree, const struct parser_context *ctx, parser_error *err);

typedef struct {
    int64_t kernel;

    unsigned int kernel_present : 1;
    int64_t kernel_tcp;

    unsigned int kernel_tcp_present : 1;
    int64_t limit;

    unsigned int limit_present : 1;
    int64_t reservation;

    unsigned int reservation_present : 1;
    int64_t swap;

    unsigned int swap_present : 1;
    uint64_t swappiness;

    unsigned int swappiness_present : 1;
    bool disable_oom_killer;

    unsigned int disable_oom_killer_present : 1;
    bool use_hierarchy;

    unsigned int use_hierarchy_present : 1;
    bool check_before_update;

    unsigned int check_before_update_present : 1;
    yajl_val _residual;
}
runtime_spec_schema_config_linux_resources_memory;

void free_runtime_spec_schema_config_linux_resources_memory (runtime_spec_schema_config_linux_resources_memory *ptr);

runtime_spec_schema_config_linux_resources_memory *make_runtime_spec_schema_config_linux_resources_memory (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_config_linux_resources_memory (yajl_gen g, const runtime_spec_schema_config_linux_resources_memory *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    uint32_t class_id;

    unsigned int class_id_present : 1;
    runtime_spec_schema_defs_linux_network_interface_priority **priorities;
    size_t priorities_len;

    yajl_val _residual;
}
runtime_spec_schema_config_linux_resources_network;

void free_runtime_spec_schema_config_linux_resources_network (runtime_spec_schema_config_linux_resources_network *ptr);

runtime_spec_schema_config_linux_resources_network *make_runtime_spec_schema_config_linux_resources_network (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_config_linux_resources_network (yajl_gen g, const runtime_spec_schema_config_linux_resources_network *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    char unuseful; // unuseful definition to avoid empty struct
}
runtime_spec_schema_config_linux_resources_rdma;

void free_runtime_spec_schema_config_linux_resources_rdma (runtime_spec_schema_config_linux_resources_rdma *ptr);

runtime_spec_schema_config_linux_resources_rdma *make_runtime_spec_schema_config_linux_resources_rdma (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_config_linux_resources_rdma (yajl_gen g, const runtime_spec_schema_config_linux_resources_rdma *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    json_map_string_string *unified;

    runtime_spec_schema_defs_linux_device_cgroup **devices;
    size_t devices_len;

    runtime_spec_schema_config_linux_resources_pids *pids;

    runtime_spec_schema_config_linux_resources_block_io *block_io;

    runtime_spec_schema_config_linux_resources_cpu *cpu;

    runtime_spec_schema_config_linux_resources_hugepage_limits_element **hugepage_limits;
    size_t hugepage_limits_len;

    runtime_spec_schema_config_linux_resources_memory *memory;

    runtime_spec_schema_config_linux_resources_network *network;

    runtime_spec_schema_config_linux_resources_rdma *rdma;

    yajl_val _residual;
}
runtime_spec_schema_config_linux_resources;

void free_runtime_spec_schema_config_linux_resources (runtime_spec_schema_config_linux_resources *ptr);

runtime_spec_schema_config_linux_resources *make_runtime_spec_schema_config_linux_resources (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_config_linux_resources (yajl_gen g, const runtime_spec_schema_config_linux_resources *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    char *default_action;

    uint32_t default_errno_ret;

    unsigned int default_errno_ret_present : 1;
    char **flags;
    size_t flags_len;

    char *listener_path;

    char *listener_metadata;

    char **architectures;
    size_t architectures_len;

    runtime_spec_schema_defs_linux_syscall **syscalls;
    size_t syscalls_len;

    yajl_val _residual;
}
runtime_spec_schema_config_linux_seccomp;

void free_runtime_spec_schema_config_linux_seccomp (runtime_spec_schema_config_linux_seccomp *ptr);

runtime_spec_schema_config_linux_seccomp *make_runtime_spec_schema_config_linux_seccomp (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_config_linux_seccomp (yajl_gen g, const runtime_spec_schema_config_linux_seccomp *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    char *clos_id;

    char *l3cache_schema;

    char *mem_bw_schema;

    bool enable_cmt;

    unsigned int enable_cmt_present : 1;
    bool enable_mbm;

    unsigned int enable_mbm_present : 1;
    yajl_val _residual;
}
runtime_spec_schema_config_linux_intel_rdt;

void free_runtime_spec_schema_config_linux_intel_rdt (runtime_spec_schema_config_linux_intel_rdt *ptr);

runtime_spec_schema_config_linux_intel_rdt *make_runtime_spec_schema_config_linux_intel_rdt (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_config_linux_intel_rdt (yajl_gen g, const runtime_spec_schema_config_linux_intel_rdt *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    runtime_spec_schema_defs_linux_device **devices;
    size_t devices_len;

    runtime_spec_schema_defs_id_mapping **uid_mappings;
    size_t uid_mappings_len;

    runtime_spec_schema_defs_id_mapping **gid_mappings;
    size_t gid_mappings_len;

    runtime_spec_schema_defs_linux_namespace_reference **namespaces;
    size_t namespaces_len;

    runtime_spec_schema_config_linux_resources *resources;

    char *cgroups_path;

    char *rootfs_propagation;

    runtime_spec_schema_config_linux_seccomp *seccomp;

    json_map_string_string *sysctl;

    char **masked_paths;
    size_t masked_paths_len;

    char **readonly_paths;
    size_t readonly_paths_len;

    char *mount_label;

    runtime_spec_schema_config_linux_intel_rdt *intel_rdt;

    runtime_spec_schema_defs_linux_personality *personality;

    yajl_val _residual;
}
runtime_spec_schema_config_linux;

void free_runtime_spec_schema_config_linux (runtime_spec_schema_config_linux *ptr);

runtime_spec_schema_config_linux *make_runtime_spec_schema_config_linux (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_config_linux (yajl_gen g, const runtime_spec_schema_config_linux *ptr, const struct parser_context *ctx, parser_error *err);

#ifdef __cplusplus
}
#endif

#endif

