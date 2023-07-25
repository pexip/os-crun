// Generated from config-windows.json. Do not edit!
#ifndef RUNTIME_SPEC_SCHEMA_CONFIG_WINDOWS_SCHEMA_H
#define RUNTIME_SPEC_SCHEMA_CONFIG_WINDOWS_SCHEMA_H

#include <sys/types.h>
#include <stdint.h>
#include "ocispec/json_common.h"
#include "ocispec/runtime_spec_schema_defs.h"
#include "ocispec/runtime_spec_schema_defs_windows.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    uint64_t limit;

    unsigned int limit_present : 1;
    yajl_val _residual;
}
runtime_spec_schema_config_windows_resources_memory;

void free_runtime_spec_schema_config_windows_resources_memory (runtime_spec_schema_config_windows_resources_memory *ptr);

runtime_spec_schema_config_windows_resources_memory *make_runtime_spec_schema_config_windows_resources_memory (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_config_windows_resources_memory (yajl_gen g, const runtime_spec_schema_config_windows_resources_memory *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    uint64_t count;

    unsigned int count_present : 1;
    uint16_t shares;

    unsigned int shares_present : 1;
    uint16_t maximum;

    unsigned int maximum_present : 1;
    yajl_val _residual;
}
runtime_spec_schema_config_windows_resources_cpu;

void free_runtime_spec_schema_config_windows_resources_cpu (runtime_spec_schema_config_windows_resources_cpu *ptr);

runtime_spec_schema_config_windows_resources_cpu *make_runtime_spec_schema_config_windows_resources_cpu (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_config_windows_resources_cpu (yajl_gen g, const runtime_spec_schema_config_windows_resources_cpu *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    uint64_t iops;

    unsigned int iops_present : 1;
    uint64_t bps;

    unsigned int bps_present : 1;
    uint64_t sandbox_size;

    unsigned int sandbox_size_present : 1;
    yajl_val _residual;
}
runtime_spec_schema_config_windows_resources_storage;

void free_runtime_spec_schema_config_windows_resources_storage (runtime_spec_schema_config_windows_resources_storage *ptr);

runtime_spec_schema_config_windows_resources_storage *make_runtime_spec_schema_config_windows_resources_storage (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_config_windows_resources_storage (yajl_gen g, const runtime_spec_schema_config_windows_resources_storage *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    runtime_spec_schema_config_windows_resources_memory *memory;

    runtime_spec_schema_config_windows_resources_cpu *cpu;

    runtime_spec_schema_config_windows_resources_storage *storage;

    yajl_val _residual;
}
runtime_spec_schema_config_windows_resources;

void free_runtime_spec_schema_config_windows_resources (runtime_spec_schema_config_windows_resources *ptr);

runtime_spec_schema_config_windows_resources *make_runtime_spec_schema_config_windows_resources (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_config_windows_resources (yajl_gen g, const runtime_spec_schema_config_windows_resources *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    char **endpoint_list;
    size_t endpoint_list_len;

    bool allow_unqualified_dns_query;

    unsigned int allow_unqualified_dns_query_present : 1;
    char **dns_search_list;
    size_t dns_search_list_len;

    char *network_shared_container_name;

    char *network_namespace;

    yajl_val _residual;
}
runtime_spec_schema_config_windows_network;

void free_runtime_spec_schema_config_windows_network (runtime_spec_schema_config_windows_network *ptr);

runtime_spec_schema_config_windows_network *make_runtime_spec_schema_config_windows_network (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_config_windows_network (yajl_gen g, const runtime_spec_schema_config_windows_network *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    char unuseful; // unuseful definition to avoid empty struct
}
runtime_spec_schema_config_windows_credential_spec;

void free_runtime_spec_schema_config_windows_credential_spec (runtime_spec_schema_config_windows_credential_spec *ptr);

runtime_spec_schema_config_windows_credential_spec *make_runtime_spec_schema_config_windows_credential_spec (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_config_windows_credential_spec (yajl_gen g, const runtime_spec_schema_config_windows_credential_spec *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    char *utility_vm_path;

    yajl_val _residual;
}
runtime_spec_schema_config_windows_hyperv;

void free_runtime_spec_schema_config_windows_hyperv (runtime_spec_schema_config_windows_hyperv *ptr);

runtime_spec_schema_config_windows_hyperv *make_runtime_spec_schema_config_windows_hyperv (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_config_windows_hyperv (yajl_gen g, const runtime_spec_schema_config_windows_hyperv *ptr, const struct parser_context *ctx, parser_error *err);

typedef struct {
    char **layer_folders;
    size_t layer_folders_len;

    runtime_spec_schema_defs_windows_device **devices;
    size_t devices_len;

    runtime_spec_schema_config_windows_resources *resources;

    runtime_spec_schema_config_windows_network *network;

    runtime_spec_schema_config_windows_credential_spec *credential_spec;

    bool servicing;

    unsigned int servicing_present : 1;
    bool ignore_flushes_during_boot;

    unsigned int ignore_flushes_during_boot_present : 1;
    runtime_spec_schema_config_windows_hyperv *hyperv;

    yajl_val _residual;
}
runtime_spec_schema_config_windows;

void free_runtime_spec_schema_config_windows (runtime_spec_schema_config_windows *ptr);

runtime_spec_schema_config_windows *make_runtime_spec_schema_config_windows (yajl_val tree, const struct parser_context *ctx, parser_error *err);

yajl_gen_status gen_runtime_spec_schema_config_windows (yajl_gen g, const runtime_spec_schema_config_windows *ptr, const struct parser_context *ctx, parser_error *err);

#ifdef __cplusplus
}
#endif

#endif

