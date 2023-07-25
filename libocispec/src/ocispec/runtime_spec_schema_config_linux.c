/* Generated from config-linux.json. Do not edit!  */

#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <string.h>
#include <ocispec/read-file.h>
#include "ocispec/runtime_spec_schema_config_linux.h"

#define YAJL_GET_ARRAY_NO_CHECK(v) (&(v)->u.array)
#define YAJL_GET_OBJECT_NO_CHECK(v) (&(v)->u.object)
define_cleaner_function (runtime_spec_schema_config_linux_resources_pids *, free_runtime_spec_schema_config_linux_resources_pids)
runtime_spec_schema_config_linux_resources_pids *
make_runtime_spec_schema_config_linux_resources_pids (yajl_val tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup(free_runtime_spec_schema_config_linux_resources_pids) runtime_spec_schema_config_linux_resources_pids *ret = NULL;
    *err = NULL;
    (void) ctx;  /* Silence compiler warning.  */
    if (tree == NULL)
      return NULL;
    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
    do
      {
        yajl_val val = get_val (tree, "limit", yajl_t_number);
        if (val != NULL)
          {
            int invalid;
            if (! YAJL_IS_NUMBER (val))
              {
                *err = strdup ("invalid type");
                return NULL;
              }
            invalid = common_safe_int64 (YAJL_GET_NUMBER (val), &ret->limit);
            if (invalid)
              {
                if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'limit': %s", YAJL_GET_NUMBER (val), strerror (-invalid)) < 0)
                    *err = strdup ("error allocating memory");
                return NULL;
            }
            ret->limit_present = 1;
        }
      }
    while (0);

    if (tree->type == yajl_t_object)
      {
        size_t i;
        size_t j = 0;
        size_t cnt = tree->u.object.len;
        yajl_val resi = NULL;

        if (ctx->options & OPT_PARSE_FULLKEY)
          {
            resi = calloc (1, sizeof(*tree));
            if (resi == NULL)
              return NULL;

            resi->type = yajl_t_object;
            resi->u.object.keys = calloc (cnt, sizeof (const char *));
            if (resi->u.object.keys == NULL)
              {
                yajl_tree_free (resi);
                return NULL;
              }
            resi->u.object.values = calloc (cnt, sizeof (yajl_val));
            if (resi->u.object.values == NULL)
              {
                yajl_tree_free (resi);
                return NULL;
              }
          }

        for (i = 0; i < tree->u.object.len; i++)
          {
            if (strcmp (tree->u.object.keys[i], "limit"))
              {
                if (ctx->options & OPT_PARSE_FULLKEY)
                  {
                    resi->u.object.keys[j] = tree->u.object.keys[i];
                    tree->u.object.keys[i] = NULL;
                    resi->u.object.values[j] = tree->u.object.values[i];
                    tree->u.object.values[i] = NULL;
                    resi->u.object.len++;
                  }
                j++;
              }
          }
        if (ctx->options & OPT_PARSE_STRICT)
          {
            if (j > 0 && ctx->errfile != NULL)
                (void) fprintf (ctx->errfile, "WARNING: unknown key found\n");
          }
        if (ctx->options & OPT_PARSE_FULLKEY)
            ret->_residual = resi;
      }
    return move_ptr (ret);
}

void
free_runtime_spec_schema_config_linux_resources_pids (runtime_spec_schema_config_linux_resources_pids *ptr)
{
    if (ptr == NULL)
        return;
    yajl_tree_free (ptr->_residual);
    ptr->_residual = NULL;
    free (ptr);
}

yajl_gen_status
gen_runtime_spec_schema_config_linux_resources_pids (yajl_gen g, const runtime_spec_schema_config_linux_resources_pids *ptr, const struct parser_context *ctx, parser_error *err)
{
    yajl_gen_status stat = yajl_gen_status_ok;
    *err = NULL;
    (void) ptr;  /* Silence compiler warning.  */
    stat = yajl_gen_map_open ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->limit_present))
      {
        long long int num = 0;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("limit"), 5 /* strlen ("limit") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->limit)
            num = (long long int)ptr->limit;
        stat = map_int (g, num);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if (ptr != NULL && ptr->_residual != NULL)
      {
        stat = gen_yajl_object_residual (ptr->_residual, g, err);
        if (yajl_gen_status_ok != stat)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    stat = yajl_gen_map_close ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    return yajl_gen_status_ok;
}

define_cleaner_function (runtime_spec_schema_config_linux_resources_block_io *, free_runtime_spec_schema_config_linux_resources_block_io)
runtime_spec_schema_config_linux_resources_block_io *
make_runtime_spec_schema_config_linux_resources_block_io (yajl_val tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup(free_runtime_spec_schema_config_linux_resources_block_io) runtime_spec_schema_config_linux_resources_block_io *ret = NULL;
    *err = NULL;
    (void) ctx;  /* Silence compiler warning.  */
    if (tree == NULL)
      return NULL;
    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
    do
      {
        yajl_val val = get_val (tree, "weight", yajl_t_number);
        if (val != NULL)
          {
            int invalid;
            if (! YAJL_IS_NUMBER (val))
              {
                *err = strdup ("invalid type");
                return NULL;
              }
            invalid = common_safe_uint16 (YAJL_GET_NUMBER (val), &ret->weight);
            if (invalid)
              {
                if (asprintf (err, "Invalid value '%s' with type 'uint16' for key 'weight': %s", YAJL_GET_NUMBER (val), strerror (-invalid)) < 0)
                    *err = strdup ("error allocating memory");
                return NULL;
            }
            ret->weight_present = 1;
        }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "leafWeight", yajl_t_number);
        if (val != NULL)
          {
            int invalid;
            if (! YAJL_IS_NUMBER (val))
              {
                *err = strdup ("invalid type");
                return NULL;
              }
            invalid = common_safe_uint16 (YAJL_GET_NUMBER (val), &ret->leaf_weight);
            if (invalid)
              {
                if (asprintf (err, "Invalid value '%s' with type 'uint16' for key 'leafWeight': %s", YAJL_GET_NUMBER (val), strerror (-invalid)) < 0)
                    *err = strdup ("error allocating memory");
                return NULL;
            }
            ret->leaf_weight_present = 1;
        }
      }
    while (0);
    do
      {
        yajl_val tmp = get_val (tree, "throttleReadBpsDevice", yajl_t_array);
        if (tmp != NULL && YAJL_GET_ARRAY (tmp) != NULL)
          {
            size_t i;
            size_t len = YAJL_GET_ARRAY_NO_CHECK (tmp)->len;
            yajl_val *values = YAJL_GET_ARRAY_NO_CHECK (tmp)->values;
            ret->throttle_read_bps_device_len = len;
            ret->throttle_read_bps_device = calloc (len + 1, sizeof (*ret->throttle_read_bps_device));
            if (ret->throttle_read_bps_device == NULL)
              return NULL;
            for (i = 0; i < len; i++)
              {
                yajl_val val = values[i];
                ret->throttle_read_bps_device[i] = make_runtime_spec_schema_defs_linux_block_io_device_throttle (val, ctx, err);
                if (ret->throttle_read_bps_device[i] == NULL)
                  return NULL;
              }
          }
      }
    while (0);
    do
      {
        yajl_val tmp = get_val (tree, "throttleWriteBpsDevice", yajl_t_array);
        if (tmp != NULL && YAJL_GET_ARRAY (tmp) != NULL)
          {
            size_t i;
            size_t len = YAJL_GET_ARRAY_NO_CHECK (tmp)->len;
            yajl_val *values = YAJL_GET_ARRAY_NO_CHECK (tmp)->values;
            ret->throttle_write_bps_device_len = len;
            ret->throttle_write_bps_device = calloc (len + 1, sizeof (*ret->throttle_write_bps_device));
            if (ret->throttle_write_bps_device == NULL)
              return NULL;
            for (i = 0; i < len; i++)
              {
                yajl_val val = values[i];
                ret->throttle_write_bps_device[i] = make_runtime_spec_schema_defs_linux_block_io_device_throttle (val, ctx, err);
                if (ret->throttle_write_bps_device[i] == NULL)
                  return NULL;
              }
          }
      }
    while (0);
    do
      {
        yajl_val tmp = get_val (tree, "throttleReadIOPSDevice", yajl_t_array);
        if (tmp != NULL && YAJL_GET_ARRAY (tmp) != NULL)
          {
            size_t i;
            size_t len = YAJL_GET_ARRAY_NO_CHECK (tmp)->len;
            yajl_val *values = YAJL_GET_ARRAY_NO_CHECK (tmp)->values;
            ret->throttle_read_iops_device_len = len;
            ret->throttle_read_iops_device = calloc (len + 1, sizeof (*ret->throttle_read_iops_device));
            if (ret->throttle_read_iops_device == NULL)
              return NULL;
            for (i = 0; i < len; i++)
              {
                yajl_val val = values[i];
                ret->throttle_read_iops_device[i] = make_runtime_spec_schema_defs_linux_block_io_device_throttle (val, ctx, err);
                if (ret->throttle_read_iops_device[i] == NULL)
                  return NULL;
              }
          }
      }
    while (0);
    do
      {
        yajl_val tmp = get_val (tree, "throttleWriteIOPSDevice", yajl_t_array);
        if (tmp != NULL && YAJL_GET_ARRAY (tmp) != NULL)
          {
            size_t i;
            size_t len = YAJL_GET_ARRAY_NO_CHECK (tmp)->len;
            yajl_val *values = YAJL_GET_ARRAY_NO_CHECK (tmp)->values;
            ret->throttle_write_iops_device_len = len;
            ret->throttle_write_iops_device = calloc (len + 1, sizeof (*ret->throttle_write_iops_device));
            if (ret->throttle_write_iops_device == NULL)
              return NULL;
            for (i = 0; i < len; i++)
              {
                yajl_val val = values[i];
                ret->throttle_write_iops_device[i] = make_runtime_spec_schema_defs_linux_block_io_device_throttle (val, ctx, err);
                if (ret->throttle_write_iops_device[i] == NULL)
                  return NULL;
              }
          }
      }
    while (0);
    do
      {
        yajl_val tmp = get_val (tree, "weightDevice", yajl_t_array);
        if (tmp != NULL && YAJL_GET_ARRAY (tmp) != NULL)
          {
            size_t i;
            size_t len = YAJL_GET_ARRAY_NO_CHECK (tmp)->len;
            yajl_val *values = YAJL_GET_ARRAY_NO_CHECK (tmp)->values;
            ret->weight_device_len = len;
            ret->weight_device = calloc (len + 1, sizeof (*ret->weight_device));
            if (ret->weight_device == NULL)
              return NULL;
            for (i = 0; i < len; i++)
              {
                yajl_val val = values[i];
                ret->weight_device[i] = make_runtime_spec_schema_defs_linux_block_io_device_weight (val, ctx, err);
                if (ret->weight_device[i] == NULL)
                  return NULL;
              }
          }
      }
    while (0);

    if (tree->type == yajl_t_object)
      {
        size_t i;
        size_t j = 0;
        size_t cnt = tree->u.object.len;
        yajl_val resi = NULL;

        if (ctx->options & OPT_PARSE_FULLKEY)
          {
            resi = calloc (1, sizeof(*tree));
            if (resi == NULL)
              return NULL;

            resi->type = yajl_t_object;
            resi->u.object.keys = calloc (cnt, sizeof (const char *));
            if (resi->u.object.keys == NULL)
              {
                yajl_tree_free (resi);
                return NULL;
              }
            resi->u.object.values = calloc (cnt, sizeof (yajl_val));
            if (resi->u.object.values == NULL)
              {
                yajl_tree_free (resi);
                return NULL;
              }
          }

        for (i = 0; i < tree->u.object.len; i++)
          {
            if (strcmp (tree->u.object.keys[i], "weight")
                && strcmp (tree->u.object.keys[i], "leafWeight")
                && strcmp (tree->u.object.keys[i], "throttleReadBpsDevice")
                && strcmp (tree->u.object.keys[i], "throttleWriteBpsDevice")
                && strcmp (tree->u.object.keys[i], "throttleReadIOPSDevice")
                && strcmp (tree->u.object.keys[i], "throttleWriteIOPSDevice")
                && strcmp (tree->u.object.keys[i], "weightDevice"))
              {
                if (ctx->options & OPT_PARSE_FULLKEY)
                  {
                    resi->u.object.keys[j] = tree->u.object.keys[i];
                    tree->u.object.keys[i] = NULL;
                    resi->u.object.values[j] = tree->u.object.values[i];
                    tree->u.object.values[i] = NULL;
                    resi->u.object.len++;
                  }
                j++;
              }
          }
        if (ctx->options & OPT_PARSE_STRICT)
          {
            if (j > 0 && ctx->errfile != NULL)
                (void) fprintf (ctx->errfile, "WARNING: unknown key found\n");
          }
        if (ctx->options & OPT_PARSE_FULLKEY)
            ret->_residual = resi;
      }
    return move_ptr (ret);
}

void
free_runtime_spec_schema_config_linux_resources_block_io (runtime_spec_schema_config_linux_resources_block_io *ptr)
{
    if (ptr == NULL)
        return;
    if (ptr->throttle_read_bps_device != NULL)
      {
        size_t i;
        for (i = 0; i < ptr->throttle_read_bps_device_len; i++)
          {
          if (ptr->throttle_read_bps_device[i] != NULL)
            {
              free_runtime_spec_schema_defs_linux_block_io_device_throttle (ptr->throttle_read_bps_device[i]);
              ptr->throttle_read_bps_device[i] = NULL;
            }
          }
        free (ptr->throttle_read_bps_device);
        ptr->throttle_read_bps_device = NULL;
      }
    if (ptr->throttle_write_bps_device != NULL)
      {
        size_t i;
        for (i = 0; i < ptr->throttle_write_bps_device_len; i++)
          {
          if (ptr->throttle_write_bps_device[i] != NULL)
            {
              free_runtime_spec_schema_defs_linux_block_io_device_throttle (ptr->throttle_write_bps_device[i]);
              ptr->throttle_write_bps_device[i] = NULL;
            }
          }
        free (ptr->throttle_write_bps_device);
        ptr->throttle_write_bps_device = NULL;
      }
    if (ptr->throttle_read_iops_device != NULL)
      {
        size_t i;
        for (i = 0; i < ptr->throttle_read_iops_device_len; i++)
          {
          if (ptr->throttle_read_iops_device[i] != NULL)
            {
              free_runtime_spec_schema_defs_linux_block_io_device_throttle (ptr->throttle_read_iops_device[i]);
              ptr->throttle_read_iops_device[i] = NULL;
            }
          }
        free (ptr->throttle_read_iops_device);
        ptr->throttle_read_iops_device = NULL;
      }
    if (ptr->throttle_write_iops_device != NULL)
      {
        size_t i;
        for (i = 0; i < ptr->throttle_write_iops_device_len; i++)
          {
          if (ptr->throttle_write_iops_device[i] != NULL)
            {
              free_runtime_spec_schema_defs_linux_block_io_device_throttle (ptr->throttle_write_iops_device[i]);
              ptr->throttle_write_iops_device[i] = NULL;
            }
          }
        free (ptr->throttle_write_iops_device);
        ptr->throttle_write_iops_device = NULL;
      }
    if (ptr->weight_device != NULL)
      {
        size_t i;
        for (i = 0; i < ptr->weight_device_len; i++)
          {
          if (ptr->weight_device[i] != NULL)
            {
              free_runtime_spec_schema_defs_linux_block_io_device_weight (ptr->weight_device[i]);
              ptr->weight_device[i] = NULL;
            }
          }
        free (ptr->weight_device);
        ptr->weight_device = NULL;
      }
    yajl_tree_free (ptr->_residual);
    ptr->_residual = NULL;
    free (ptr);
}

yajl_gen_status
gen_runtime_spec_schema_config_linux_resources_block_io (yajl_gen g, const runtime_spec_schema_config_linux_resources_block_io *ptr, const struct parser_context *ctx, parser_error *err)
{
    yajl_gen_status stat = yajl_gen_status_ok;
    *err = NULL;
    (void) ptr;  /* Silence compiler warning.  */
    stat = yajl_gen_map_open ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->weight_present))
      {
        long long unsigned int num = 0;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("weight"), 6 /* strlen ("weight") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->weight)
            num = (long long unsigned int)ptr->weight;
        stat = map_uint (g, num);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->leaf_weight_present))
      {
        long long unsigned int num = 0;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("leafWeight"), 10 /* strlen ("leafWeight") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->leaf_weight)
            num = (long long unsigned int)ptr->leaf_weight;
        stat = map_uint (g, num);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->throttle_read_bps_device != NULL))
      {
        size_t len = 0, i;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("throttleReadBpsDevice"), 21 /* strlen ("throttleReadBpsDevice") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->throttle_read_bps_device != NULL)
            len = ptr->throttle_read_bps_device_len;
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 0);
        stat = yajl_gen_array_open ((yajl_gen) g);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        for (i = 0; i < len; i++)
          {
            stat = gen_runtime_spec_schema_defs_linux_block_io_device_throttle (g, ptr->throttle_read_bps_device[i], ctx, err);
            if (stat != yajl_gen_status_ok)
                GEN_SET_ERROR_AND_RETURN (stat, err);
          }
        stat = yajl_gen_array_close ((yajl_gen) g);
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 1);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->throttle_write_bps_device != NULL))
      {
        size_t len = 0, i;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("throttleWriteBpsDevice"), 22 /* strlen ("throttleWriteBpsDevice") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->throttle_write_bps_device != NULL)
            len = ptr->throttle_write_bps_device_len;
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 0);
        stat = yajl_gen_array_open ((yajl_gen) g);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        for (i = 0; i < len; i++)
          {
            stat = gen_runtime_spec_schema_defs_linux_block_io_device_throttle (g, ptr->throttle_write_bps_device[i], ctx, err);
            if (stat != yajl_gen_status_ok)
                GEN_SET_ERROR_AND_RETURN (stat, err);
          }
        stat = yajl_gen_array_close ((yajl_gen) g);
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 1);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->throttle_read_iops_device != NULL))
      {
        size_t len = 0, i;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("throttleReadIOPSDevice"), 22 /* strlen ("throttleReadIOPSDevice") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->throttle_read_iops_device != NULL)
            len = ptr->throttle_read_iops_device_len;
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 0);
        stat = yajl_gen_array_open ((yajl_gen) g);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        for (i = 0; i < len; i++)
          {
            stat = gen_runtime_spec_schema_defs_linux_block_io_device_throttle (g, ptr->throttle_read_iops_device[i], ctx, err);
            if (stat != yajl_gen_status_ok)
                GEN_SET_ERROR_AND_RETURN (stat, err);
          }
        stat = yajl_gen_array_close ((yajl_gen) g);
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 1);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->throttle_write_iops_device != NULL))
      {
        size_t len = 0, i;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("throttleWriteIOPSDevice"), 23 /* strlen ("throttleWriteIOPSDevice") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->throttle_write_iops_device != NULL)
            len = ptr->throttle_write_iops_device_len;
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 0);
        stat = yajl_gen_array_open ((yajl_gen) g);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        for (i = 0; i < len; i++)
          {
            stat = gen_runtime_spec_schema_defs_linux_block_io_device_throttle (g, ptr->throttle_write_iops_device[i], ctx, err);
            if (stat != yajl_gen_status_ok)
                GEN_SET_ERROR_AND_RETURN (stat, err);
          }
        stat = yajl_gen_array_close ((yajl_gen) g);
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 1);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->weight_device != NULL))
      {
        size_t len = 0, i;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("weightDevice"), 12 /* strlen ("weightDevice") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->weight_device != NULL)
            len = ptr->weight_device_len;
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 0);
        stat = yajl_gen_array_open ((yajl_gen) g);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        for (i = 0; i < len; i++)
          {
            stat = gen_runtime_spec_schema_defs_linux_block_io_device_weight (g, ptr->weight_device[i], ctx, err);
            if (stat != yajl_gen_status_ok)
                GEN_SET_ERROR_AND_RETURN (stat, err);
          }
        stat = yajl_gen_array_close ((yajl_gen) g);
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 1);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if (ptr != NULL && ptr->_residual != NULL)
      {
        stat = gen_yajl_object_residual (ptr->_residual, g, err);
        if (yajl_gen_status_ok != stat)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    stat = yajl_gen_map_close ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    return yajl_gen_status_ok;
}

define_cleaner_function (runtime_spec_schema_config_linux_resources_cpu *, free_runtime_spec_schema_config_linux_resources_cpu)
runtime_spec_schema_config_linux_resources_cpu *
make_runtime_spec_schema_config_linux_resources_cpu (yajl_val tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup(free_runtime_spec_schema_config_linux_resources_cpu) runtime_spec_schema_config_linux_resources_cpu *ret = NULL;
    *err = NULL;
    (void) ctx;  /* Silence compiler warning.  */
    if (tree == NULL)
      return NULL;
    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
    do
      {
        yajl_val val = get_val (tree, "cpus", yajl_t_string);
        if (val != NULL)
          {
            char *str = YAJL_GET_STRING (val);
            ret->cpus = strdup (str ? str : "");
            if (ret->cpus == NULL)
              return NULL;
          }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "mems", yajl_t_string);
        if (val != NULL)
          {
            char *str = YAJL_GET_STRING (val);
            ret->mems = strdup (str ? str : "");
            if (ret->mems == NULL)
              return NULL;
          }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "period", yajl_t_number);
        if (val != NULL)
          {
            int invalid;
            if (! YAJL_IS_NUMBER (val))
              {
                *err = strdup ("invalid type");
                return NULL;
              }
            invalid = common_safe_uint64 (YAJL_GET_NUMBER (val), &ret->period);
            if (invalid)
              {
                if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'period': %s", YAJL_GET_NUMBER (val), strerror (-invalid)) < 0)
                    *err = strdup ("error allocating memory");
                return NULL;
            }
            ret->period_present = 1;
        }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "quota", yajl_t_number);
        if (val != NULL)
          {
            int invalid;
            if (! YAJL_IS_NUMBER (val))
              {
                *err = strdup ("invalid type");
                return NULL;
              }
            invalid = common_safe_int64 (YAJL_GET_NUMBER (val), &ret->quota);
            if (invalid)
              {
                if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'quota': %s", YAJL_GET_NUMBER (val), strerror (-invalid)) < 0)
                    *err = strdup ("error allocating memory");
                return NULL;
            }
            ret->quota_present = 1;
        }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "realtimePeriod", yajl_t_number);
        if (val != NULL)
          {
            int invalid;
            if (! YAJL_IS_NUMBER (val))
              {
                *err = strdup ("invalid type");
                return NULL;
              }
            invalid = common_safe_uint64 (YAJL_GET_NUMBER (val), &ret->realtime_period);
            if (invalid)
              {
                if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'realtimePeriod': %s", YAJL_GET_NUMBER (val), strerror (-invalid)) < 0)
                    *err = strdup ("error allocating memory");
                return NULL;
            }
            ret->realtime_period_present = 1;
        }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "realtimeRuntime", yajl_t_number);
        if (val != NULL)
          {
            int invalid;
            if (! YAJL_IS_NUMBER (val))
              {
                *err = strdup ("invalid type");
                return NULL;
              }
            invalid = common_safe_int64 (YAJL_GET_NUMBER (val), &ret->realtime_runtime);
            if (invalid)
              {
                if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'realtimeRuntime': %s", YAJL_GET_NUMBER (val), strerror (-invalid)) < 0)
                    *err = strdup ("error allocating memory");
                return NULL;
            }
            ret->realtime_runtime_present = 1;
        }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "shares", yajl_t_number);
        if (val != NULL)
          {
            int invalid;
            if (! YAJL_IS_NUMBER (val))
              {
                *err = strdup ("invalid type");
                return NULL;
              }
            invalid = common_safe_uint64 (YAJL_GET_NUMBER (val), &ret->shares);
            if (invalid)
              {
                if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'shares': %s", YAJL_GET_NUMBER (val), strerror (-invalid)) < 0)
                    *err = strdup ("error allocating memory");
                return NULL;
            }
            ret->shares_present = 1;
        }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "idle", yajl_t_number);
        if (val != NULL)
          {
            int invalid;
            if (! YAJL_IS_NUMBER (val))
              {
                *err = strdup ("invalid type");
                return NULL;
              }
            invalid = common_safe_int64 (YAJL_GET_NUMBER (val), &ret->idle);
            if (invalid)
              {
                if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'idle': %s", YAJL_GET_NUMBER (val), strerror (-invalid)) < 0)
                    *err = strdup ("error allocating memory");
                return NULL;
            }
            ret->idle_present = 1;
        }
      }
    while (0);

    if (tree->type == yajl_t_object)
      {
        size_t i;
        size_t j = 0;
        size_t cnt = tree->u.object.len;
        yajl_val resi = NULL;

        if (ctx->options & OPT_PARSE_FULLKEY)
          {
            resi = calloc (1, sizeof(*tree));
            if (resi == NULL)
              return NULL;

            resi->type = yajl_t_object;
            resi->u.object.keys = calloc (cnt, sizeof (const char *));
            if (resi->u.object.keys == NULL)
              {
                yajl_tree_free (resi);
                return NULL;
              }
            resi->u.object.values = calloc (cnt, sizeof (yajl_val));
            if (resi->u.object.values == NULL)
              {
                yajl_tree_free (resi);
                return NULL;
              }
          }

        for (i = 0; i < tree->u.object.len; i++)
          {
            if (strcmp (tree->u.object.keys[i], "cpus")
                && strcmp (tree->u.object.keys[i], "mems")
                && strcmp (tree->u.object.keys[i], "period")
                && strcmp (tree->u.object.keys[i], "quota")
                && strcmp (tree->u.object.keys[i], "realtimePeriod")
                && strcmp (tree->u.object.keys[i], "realtimeRuntime")
                && strcmp (tree->u.object.keys[i], "shares")
                && strcmp (tree->u.object.keys[i], "idle"))
              {
                if (ctx->options & OPT_PARSE_FULLKEY)
                  {
                    resi->u.object.keys[j] = tree->u.object.keys[i];
                    tree->u.object.keys[i] = NULL;
                    resi->u.object.values[j] = tree->u.object.values[i];
                    tree->u.object.values[i] = NULL;
                    resi->u.object.len++;
                  }
                j++;
              }
          }
        if (ctx->options & OPT_PARSE_STRICT)
          {
            if (j > 0 && ctx->errfile != NULL)
                (void) fprintf (ctx->errfile, "WARNING: unknown key found\n");
          }
        if (ctx->options & OPT_PARSE_FULLKEY)
            ret->_residual = resi;
      }
    return move_ptr (ret);
}

void
free_runtime_spec_schema_config_linux_resources_cpu (runtime_spec_schema_config_linux_resources_cpu *ptr)
{
    if (ptr == NULL)
        return;
    free (ptr->cpus);
    ptr->cpus = NULL;
    free (ptr->mems);
    ptr->mems = NULL;
    yajl_tree_free (ptr->_residual);
    ptr->_residual = NULL;
    free (ptr);
}

yajl_gen_status
gen_runtime_spec_schema_config_linux_resources_cpu (yajl_gen g, const runtime_spec_schema_config_linux_resources_cpu *ptr, const struct parser_context *ctx, parser_error *err)
{
    yajl_gen_status stat = yajl_gen_status_ok;
    *err = NULL;
    (void) ptr;  /* Silence compiler warning.  */
    stat = yajl_gen_map_open ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->cpus != NULL))
      {
        char *str = "";
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("cpus"), 4 /* strlen ("cpus") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->cpus != NULL)
            str = ptr->cpus;
        stat = yajl_gen_string ((yajl_gen)g, (const unsigned char *)(str), strlen (str));
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->mems != NULL))
      {
        char *str = "";
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("mems"), 4 /* strlen ("mems") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->mems != NULL)
            str = ptr->mems;
        stat = yajl_gen_string ((yajl_gen)g, (const unsigned char *)(str), strlen (str));
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->period_present))
      {
        long long unsigned int num = 0;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("period"), 6 /* strlen ("period") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->period)
            num = (long long unsigned int)ptr->period;
        stat = map_uint (g, num);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->quota_present))
      {
        long long int num = 0;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("quota"), 5 /* strlen ("quota") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->quota)
            num = (long long int)ptr->quota;
        stat = map_int (g, num);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->realtime_period_present))
      {
        long long unsigned int num = 0;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("realtimePeriod"), 14 /* strlen ("realtimePeriod") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->realtime_period)
            num = (long long unsigned int)ptr->realtime_period;
        stat = map_uint (g, num);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->realtime_runtime_present))
      {
        long long int num = 0;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("realtimeRuntime"), 15 /* strlen ("realtimeRuntime") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->realtime_runtime)
            num = (long long int)ptr->realtime_runtime;
        stat = map_int (g, num);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->shares_present))
      {
        long long unsigned int num = 0;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("shares"), 6 /* strlen ("shares") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->shares)
            num = (long long unsigned int)ptr->shares;
        stat = map_uint (g, num);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->idle_present))
      {
        long long int num = 0;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("idle"), 4 /* strlen ("idle") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->idle)
            num = (long long int)ptr->idle;
        stat = map_int (g, num);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if (ptr != NULL && ptr->_residual != NULL)
      {
        stat = gen_yajl_object_residual (ptr->_residual, g, err);
        if (yajl_gen_status_ok != stat)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    stat = yajl_gen_map_close ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    return yajl_gen_status_ok;
}

define_cleaner_function (runtime_spec_schema_config_linux_resources_hugepage_limits_element *, free_runtime_spec_schema_config_linux_resources_hugepage_limits_element)
runtime_spec_schema_config_linux_resources_hugepage_limits_element *
make_runtime_spec_schema_config_linux_resources_hugepage_limits_element (yajl_val tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup(free_runtime_spec_schema_config_linux_resources_hugepage_limits_element) runtime_spec_schema_config_linux_resources_hugepage_limits_element *ret = NULL;
    *err = NULL;
    (void) ctx;  /* Silence compiler warning.  */
    if (tree == NULL)
      return NULL;
    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
    do
      {
        yajl_val val = get_val (tree, "pageSize", yajl_t_string);
        if (val != NULL)
          {
            char *str = YAJL_GET_STRING (val);
            ret->page_size = strdup (str ? str : "");
            if (ret->page_size == NULL)
              return NULL;
          }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "limit", yajl_t_number);
        if (val != NULL)
          {
            int invalid;
            if (! YAJL_IS_NUMBER (val))
              {
                *err = strdup ("invalid type");
                return NULL;
              }
            invalid = common_safe_uint64 (YAJL_GET_NUMBER (val), &ret->limit);
            if (invalid)
              {
                if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'limit': %s", YAJL_GET_NUMBER (val), strerror (-invalid)) < 0)
                    *err = strdup ("error allocating memory");
                return NULL;
            }
            ret->limit_present = 1;
        }
      }
    while (0);
    if (ret->page_size == NULL)
      {
        if (asprintf (err, "Required field '%s' not present",  "pageSize") < 0)
            *err = strdup ("error allocating memory");
        return NULL;
      }
    return move_ptr (ret);
}

void
free_runtime_spec_schema_config_linux_resources_hugepage_limits_element (runtime_spec_schema_config_linux_resources_hugepage_limits_element *ptr)
{
    if (ptr == NULL)
        return;
    free (ptr->page_size);
    ptr->page_size = NULL;
    free (ptr);
}

yajl_gen_status
gen_runtime_spec_schema_config_linux_resources_hugepage_limits_element (yajl_gen g, const runtime_spec_schema_config_linux_resources_hugepage_limits_element *ptr, const struct parser_context *ctx, parser_error *err)
{
    yajl_gen_status stat = yajl_gen_status_ok;
    *err = NULL;
    (void) ptr;  /* Silence compiler warning.  */
    stat = yajl_gen_map_open ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->page_size != NULL))
      {
        char *str = "";
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("pageSize"), 8 /* strlen ("pageSize") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->page_size != NULL)
            str = ptr->page_size;
        stat = yajl_gen_string ((yajl_gen)g, (const unsigned char *)(str), strlen (str));
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->limit_present))
      {
        long long unsigned int num = 0;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("limit"), 5 /* strlen ("limit") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->limit)
            num = (long long unsigned int)ptr->limit;
        stat = map_uint (g, num);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    stat = yajl_gen_map_close ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    return yajl_gen_status_ok;
}

define_cleaner_function (runtime_spec_schema_config_linux_resources_memory *, free_runtime_spec_schema_config_linux_resources_memory)
runtime_spec_schema_config_linux_resources_memory *
make_runtime_spec_schema_config_linux_resources_memory (yajl_val tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup(free_runtime_spec_schema_config_linux_resources_memory) runtime_spec_schema_config_linux_resources_memory *ret = NULL;
    *err = NULL;
    (void) ctx;  /* Silence compiler warning.  */
    if (tree == NULL)
      return NULL;
    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
    do
      {
        yajl_val val = get_val (tree, "kernel", yajl_t_number);
        if (val != NULL)
          {
            int invalid;
            if (! YAJL_IS_NUMBER (val))
              {
                *err = strdup ("invalid type");
                return NULL;
              }
            invalid = common_safe_int64 (YAJL_GET_NUMBER (val), &ret->kernel);
            if (invalid)
              {
                if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'kernel': %s", YAJL_GET_NUMBER (val), strerror (-invalid)) < 0)
                    *err = strdup ("error allocating memory");
                return NULL;
            }
            ret->kernel_present = 1;
        }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "kernelTCP", yajl_t_number);
        if (val != NULL)
          {
            int invalid;
            if (! YAJL_IS_NUMBER (val))
              {
                *err = strdup ("invalid type");
                return NULL;
              }
            invalid = common_safe_int64 (YAJL_GET_NUMBER (val), &ret->kernel_tcp);
            if (invalid)
              {
                if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'kernelTCP': %s", YAJL_GET_NUMBER (val), strerror (-invalid)) < 0)
                    *err = strdup ("error allocating memory");
                return NULL;
            }
            ret->kernel_tcp_present = 1;
        }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "limit", yajl_t_number);
        if (val != NULL)
          {
            int invalid;
            if (! YAJL_IS_NUMBER (val))
              {
                *err = strdup ("invalid type");
                return NULL;
              }
            invalid = common_safe_int64 (YAJL_GET_NUMBER (val), &ret->limit);
            if (invalid)
              {
                if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'limit': %s", YAJL_GET_NUMBER (val), strerror (-invalid)) < 0)
                    *err = strdup ("error allocating memory");
                return NULL;
            }
            ret->limit_present = 1;
        }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "reservation", yajl_t_number);
        if (val != NULL)
          {
            int invalid;
            if (! YAJL_IS_NUMBER (val))
              {
                *err = strdup ("invalid type");
                return NULL;
              }
            invalid = common_safe_int64 (YAJL_GET_NUMBER (val), &ret->reservation);
            if (invalid)
              {
                if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'reservation': %s", YAJL_GET_NUMBER (val), strerror (-invalid)) < 0)
                    *err = strdup ("error allocating memory");
                return NULL;
            }
            ret->reservation_present = 1;
        }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "swap", yajl_t_number);
        if (val != NULL)
          {
            int invalid;
            if (! YAJL_IS_NUMBER (val))
              {
                *err = strdup ("invalid type");
                return NULL;
              }
            invalid = common_safe_int64 (YAJL_GET_NUMBER (val), &ret->swap);
            if (invalid)
              {
                if (asprintf (err, "Invalid value '%s' with type 'int64' for key 'swap': %s", YAJL_GET_NUMBER (val), strerror (-invalid)) < 0)
                    *err = strdup ("error allocating memory");
                return NULL;
            }
            ret->swap_present = 1;
        }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "swappiness", yajl_t_number);
        if (val != NULL)
          {
            int invalid;
            if (! YAJL_IS_NUMBER (val))
              {
                *err = strdup ("invalid type");
                return NULL;
              }
            invalid = common_safe_uint64 (YAJL_GET_NUMBER (val), &ret->swappiness);
            if (invalid)
              {
                if (asprintf (err, "Invalid value '%s' with type 'uint64' for key 'swappiness': %s", YAJL_GET_NUMBER (val), strerror (-invalid)) < 0)
                    *err = strdup ("error allocating memory");
                return NULL;
            }
            ret->swappiness_present = 1;
        }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "disableOOMKiller", yajl_t_true);
        if (val != NULL)
          {
            ret->disable_oom_killer = YAJL_IS_TRUE(val);
            ret->disable_oom_killer_present = 1;
          }
        else
          {
            val = get_val (tree, "disableOOMKiller", yajl_t_false);
            if (val != NULL)
              {
                ret->disable_oom_killer = 0;
                ret->disable_oom_killer_present = 1;
              }
          }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "useHierarchy", yajl_t_true);
        if (val != NULL)
          {
            ret->use_hierarchy = YAJL_IS_TRUE(val);
            ret->use_hierarchy_present = 1;
          }
        else
          {
            val = get_val (tree, "useHierarchy", yajl_t_false);
            if (val != NULL)
              {
                ret->use_hierarchy = 0;
                ret->use_hierarchy_present = 1;
              }
          }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "checkBeforeUpdate", yajl_t_true);
        if (val != NULL)
          {
            ret->check_before_update = YAJL_IS_TRUE(val);
            ret->check_before_update_present = 1;
          }
        else
          {
            val = get_val (tree, "checkBeforeUpdate", yajl_t_false);
            if (val != NULL)
              {
                ret->check_before_update = 0;
                ret->check_before_update_present = 1;
              }
          }
      }
    while (0);

    if (tree->type == yajl_t_object)
      {
        size_t i;
        size_t j = 0;
        size_t cnt = tree->u.object.len;
        yajl_val resi = NULL;

        if (ctx->options & OPT_PARSE_FULLKEY)
          {
            resi = calloc (1, sizeof(*tree));
            if (resi == NULL)
              return NULL;

            resi->type = yajl_t_object;
            resi->u.object.keys = calloc (cnt, sizeof (const char *));
            if (resi->u.object.keys == NULL)
              {
                yajl_tree_free (resi);
                return NULL;
              }
            resi->u.object.values = calloc (cnt, sizeof (yajl_val));
            if (resi->u.object.values == NULL)
              {
                yajl_tree_free (resi);
                return NULL;
              }
          }

        for (i = 0; i < tree->u.object.len; i++)
          {
            if (strcmp (tree->u.object.keys[i], "kernel")
                && strcmp (tree->u.object.keys[i], "kernelTCP")
                && strcmp (tree->u.object.keys[i], "limit")
                && strcmp (tree->u.object.keys[i], "reservation")
                && strcmp (tree->u.object.keys[i], "swap")
                && strcmp (tree->u.object.keys[i], "swappiness")
                && strcmp (tree->u.object.keys[i], "disableOOMKiller")
                && strcmp (tree->u.object.keys[i], "useHierarchy")
                && strcmp (tree->u.object.keys[i], "checkBeforeUpdate"))
              {
                if (ctx->options & OPT_PARSE_FULLKEY)
                  {
                    resi->u.object.keys[j] = tree->u.object.keys[i];
                    tree->u.object.keys[i] = NULL;
                    resi->u.object.values[j] = tree->u.object.values[i];
                    tree->u.object.values[i] = NULL;
                    resi->u.object.len++;
                  }
                j++;
              }
          }
        if (ctx->options & OPT_PARSE_STRICT)
          {
            if (j > 0 && ctx->errfile != NULL)
                (void) fprintf (ctx->errfile, "WARNING: unknown key found\n");
          }
        if (ctx->options & OPT_PARSE_FULLKEY)
            ret->_residual = resi;
      }
    return move_ptr (ret);
}

void
free_runtime_spec_schema_config_linux_resources_memory (runtime_spec_schema_config_linux_resources_memory *ptr)
{
    if (ptr == NULL)
        return;
    yajl_tree_free (ptr->_residual);
    ptr->_residual = NULL;
    free (ptr);
}

yajl_gen_status
gen_runtime_spec_schema_config_linux_resources_memory (yajl_gen g, const runtime_spec_schema_config_linux_resources_memory *ptr, const struct parser_context *ctx, parser_error *err)
{
    yajl_gen_status stat = yajl_gen_status_ok;
    *err = NULL;
    (void) ptr;  /* Silence compiler warning.  */
    stat = yajl_gen_map_open ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->kernel_present))
      {
        long long int num = 0;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("kernel"), 6 /* strlen ("kernel") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->kernel)
            num = (long long int)ptr->kernel;
        stat = map_int (g, num);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->kernel_tcp_present))
      {
        long long int num = 0;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("kernelTCP"), 9 /* strlen ("kernelTCP") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->kernel_tcp)
            num = (long long int)ptr->kernel_tcp;
        stat = map_int (g, num);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->limit_present))
      {
        long long int num = 0;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("limit"), 5 /* strlen ("limit") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->limit)
            num = (long long int)ptr->limit;
        stat = map_int (g, num);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->reservation_present))
      {
        long long int num = 0;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("reservation"), 11 /* strlen ("reservation") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->reservation)
            num = (long long int)ptr->reservation;
        stat = map_int (g, num);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->swap_present))
      {
        long long int num = 0;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("swap"), 4 /* strlen ("swap") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->swap)
            num = (long long int)ptr->swap;
        stat = map_int (g, num);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->swappiness_present))
      {
        long long unsigned int num = 0;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("swappiness"), 10 /* strlen ("swappiness") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->swappiness)
            num = (long long unsigned int)ptr->swappiness;
        stat = map_uint (g, num);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->disable_oom_killer_present))
      {
        bool b = false;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("disableOOMKiller"), 16 /* strlen ("disableOOMKiller") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->disable_oom_killer)
            b = ptr->disable_oom_killer;
        
        stat = yajl_gen_bool ((yajl_gen)g, (int)(b));
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->use_hierarchy_present))
      {
        bool b = false;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("useHierarchy"), 12 /* strlen ("useHierarchy") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->use_hierarchy)
            b = ptr->use_hierarchy;
        
        stat = yajl_gen_bool ((yajl_gen)g, (int)(b));
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->check_before_update_present))
      {
        bool b = false;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("checkBeforeUpdate"), 17 /* strlen ("checkBeforeUpdate") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->check_before_update)
            b = ptr->check_before_update;
        
        stat = yajl_gen_bool ((yajl_gen)g, (int)(b));
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if (ptr != NULL && ptr->_residual != NULL)
      {
        stat = gen_yajl_object_residual (ptr->_residual, g, err);
        if (yajl_gen_status_ok != stat)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    stat = yajl_gen_map_close ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    return yajl_gen_status_ok;
}

define_cleaner_function (runtime_spec_schema_config_linux_resources_network *, free_runtime_spec_schema_config_linux_resources_network)
runtime_spec_schema_config_linux_resources_network *
make_runtime_spec_schema_config_linux_resources_network (yajl_val tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup(free_runtime_spec_schema_config_linux_resources_network) runtime_spec_schema_config_linux_resources_network *ret = NULL;
    *err = NULL;
    (void) ctx;  /* Silence compiler warning.  */
    if (tree == NULL)
      return NULL;
    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
    do
      {
        yajl_val val = get_val (tree, "classID", yajl_t_number);
        if (val != NULL)
          {
            int invalid;
            if (! YAJL_IS_NUMBER (val))
              {
                *err = strdup ("invalid type");
                return NULL;
              }
            invalid = common_safe_uint32 (YAJL_GET_NUMBER (val), &ret->class_id);
            if (invalid)
              {
                if (asprintf (err, "Invalid value '%s' with type 'uint32' for key 'classID': %s", YAJL_GET_NUMBER (val), strerror (-invalid)) < 0)
                    *err = strdup ("error allocating memory");
                return NULL;
            }
            ret->class_id_present = 1;
        }
      }
    while (0);
    do
      {
        yajl_val tmp = get_val (tree, "priorities", yajl_t_array);
        if (tmp != NULL && YAJL_GET_ARRAY (tmp) != NULL)
          {
            size_t i;
            size_t len = YAJL_GET_ARRAY_NO_CHECK (tmp)->len;
            yajl_val *values = YAJL_GET_ARRAY_NO_CHECK (tmp)->values;
            ret->priorities_len = len;
            ret->priorities = calloc (len + 1, sizeof (*ret->priorities));
            if (ret->priorities == NULL)
              return NULL;
            for (i = 0; i < len; i++)
              {
                yajl_val val = values[i];
                ret->priorities[i] = make_runtime_spec_schema_defs_linux_network_interface_priority (val, ctx, err);
                if (ret->priorities[i] == NULL)
                  return NULL;
              }
          }
      }
    while (0);

    if (tree->type == yajl_t_object)
      {
        size_t i;
        size_t j = 0;
        size_t cnt = tree->u.object.len;
        yajl_val resi = NULL;

        if (ctx->options & OPT_PARSE_FULLKEY)
          {
            resi = calloc (1, sizeof(*tree));
            if (resi == NULL)
              return NULL;

            resi->type = yajl_t_object;
            resi->u.object.keys = calloc (cnt, sizeof (const char *));
            if (resi->u.object.keys == NULL)
              {
                yajl_tree_free (resi);
                return NULL;
              }
            resi->u.object.values = calloc (cnt, sizeof (yajl_val));
            if (resi->u.object.values == NULL)
              {
                yajl_tree_free (resi);
                return NULL;
              }
          }

        for (i = 0; i < tree->u.object.len; i++)
          {
            if (strcmp (tree->u.object.keys[i], "classID")
                && strcmp (tree->u.object.keys[i], "priorities"))
              {
                if (ctx->options & OPT_PARSE_FULLKEY)
                  {
                    resi->u.object.keys[j] = tree->u.object.keys[i];
                    tree->u.object.keys[i] = NULL;
                    resi->u.object.values[j] = tree->u.object.values[i];
                    tree->u.object.values[i] = NULL;
                    resi->u.object.len++;
                  }
                j++;
              }
          }
        if (ctx->options & OPT_PARSE_STRICT)
          {
            if (j > 0 && ctx->errfile != NULL)
                (void) fprintf (ctx->errfile, "WARNING: unknown key found\n");
          }
        if (ctx->options & OPT_PARSE_FULLKEY)
            ret->_residual = resi;
      }
    return move_ptr (ret);
}

void
free_runtime_spec_schema_config_linux_resources_network (runtime_spec_schema_config_linux_resources_network *ptr)
{
    if (ptr == NULL)
        return;
    if (ptr->priorities != NULL)
      {
        size_t i;
        for (i = 0; i < ptr->priorities_len; i++)
          {
          if (ptr->priorities[i] != NULL)
            {
              free_runtime_spec_schema_defs_linux_network_interface_priority (ptr->priorities[i]);
              ptr->priorities[i] = NULL;
            }
          }
        free (ptr->priorities);
        ptr->priorities = NULL;
      }
    yajl_tree_free (ptr->_residual);
    ptr->_residual = NULL;
    free (ptr);
}

yajl_gen_status
gen_runtime_spec_schema_config_linux_resources_network (yajl_gen g, const runtime_spec_schema_config_linux_resources_network *ptr, const struct parser_context *ctx, parser_error *err)
{
    yajl_gen_status stat = yajl_gen_status_ok;
    *err = NULL;
    (void) ptr;  /* Silence compiler warning.  */
    stat = yajl_gen_map_open ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->class_id_present))
      {
        long long unsigned int num = 0;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("classID"), 7 /* strlen ("classID") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->class_id)
            num = (long long unsigned int)ptr->class_id;
        stat = map_uint (g, num);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->priorities != NULL))
      {
        size_t len = 0, i;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("priorities"), 10 /* strlen ("priorities") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->priorities != NULL)
            len = ptr->priorities_len;
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 0);
        stat = yajl_gen_array_open ((yajl_gen) g);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        for (i = 0; i < len; i++)
          {
            stat = gen_runtime_spec_schema_defs_linux_network_interface_priority (g, ptr->priorities[i], ctx, err);
            if (stat != yajl_gen_status_ok)
                GEN_SET_ERROR_AND_RETURN (stat, err);
          }
        stat = yajl_gen_array_close ((yajl_gen) g);
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 1);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if (ptr != NULL && ptr->_residual != NULL)
      {
        stat = gen_yajl_object_residual (ptr->_residual, g, err);
        if (yajl_gen_status_ok != stat)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    stat = yajl_gen_map_close ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    return yajl_gen_status_ok;
}

define_cleaner_function (runtime_spec_schema_config_linux_resources_rdma *, free_runtime_spec_schema_config_linux_resources_rdma)
runtime_spec_schema_config_linux_resources_rdma *
make_runtime_spec_schema_config_linux_resources_rdma (yajl_val tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup(free_runtime_spec_schema_config_linux_resources_rdma) runtime_spec_schema_config_linux_resources_rdma *ret = NULL;
    *err = NULL;
    (void) ctx;  /* Silence compiler warning.  */
    if (tree == NULL)
      return NULL;
    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
    return move_ptr (ret);
}

void
free_runtime_spec_schema_config_linux_resources_rdma (runtime_spec_schema_config_linux_resources_rdma *ptr)
{
    if (ptr == NULL)
        return;
    free (ptr);
}

yajl_gen_status
gen_runtime_spec_schema_config_linux_resources_rdma (yajl_gen g, const runtime_spec_schema_config_linux_resources_rdma *ptr, const struct parser_context *ctx, parser_error *err)
{
    yajl_gen_status stat = yajl_gen_status_ok;
    *err = NULL;
    (void) ptr;  /* Silence compiler warning.  */
    if (!(ctx->options & OPT_GEN_SIMPLIFY))
        yajl_gen_config (g, yajl_gen_beautify, 0);
    stat = yajl_gen_map_open ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    stat = yajl_gen_map_close ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    if (!(ctx->options & OPT_GEN_SIMPLIFY))
        yajl_gen_config (g, yajl_gen_beautify, 1);
    return yajl_gen_status_ok;
}

define_cleaner_function (runtime_spec_schema_config_linux_resources *, free_runtime_spec_schema_config_linux_resources)
runtime_spec_schema_config_linux_resources *
make_runtime_spec_schema_config_linux_resources (yajl_val tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup(free_runtime_spec_schema_config_linux_resources) runtime_spec_schema_config_linux_resources *ret = NULL;
    *err = NULL;
    (void) ctx;  /* Silence compiler warning.  */
    if (tree == NULL)
      return NULL;
    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
    do
      {
        yajl_val tmp = get_val (tree, "unified", yajl_t_object);
        if (tmp != NULL)
          {
            ret->unified = make_json_map_string_string (tmp, ctx, err);
            if (ret->unified == NULL)
              {
                char *new_error = NULL;
                if (asprintf (&new_error, "Value error for key 'unified': %s", *err ? *err : "null") < 0)
                  new_error = strdup ("error allocating memory");
                free (*err);
                *err = new_error;
                return NULL;
              }
          }
      }
    while (0);
    do
      {
        yajl_val tmp = get_val (tree, "devices", yajl_t_array);
        if (tmp != NULL && YAJL_GET_ARRAY (tmp) != NULL)
          {
            size_t i;
            size_t len = YAJL_GET_ARRAY_NO_CHECK (tmp)->len;
            yajl_val *values = YAJL_GET_ARRAY_NO_CHECK (tmp)->values;
            ret->devices_len = len;
            ret->devices = calloc (len + 1, sizeof (*ret->devices));
            if (ret->devices == NULL)
              return NULL;
            for (i = 0; i < len; i++)
              {
                yajl_val val = values[i];
                ret->devices[i] = make_runtime_spec_schema_defs_linux_device_cgroup (val, ctx, err);
                if (ret->devices[i] == NULL)
                  return NULL;
              }
          }
      }
    while (0);
    ret->pids = make_runtime_spec_schema_config_linux_resources_pids (get_val (tree, "pids", yajl_t_object), ctx, err);
    if (ret->pids == NULL && *err != 0)
      return NULL;
    ret->block_io = make_runtime_spec_schema_config_linux_resources_block_io (get_val (tree, "blockIO", yajl_t_object), ctx, err);
    if (ret->block_io == NULL && *err != 0)
      return NULL;
    ret->cpu = make_runtime_spec_schema_config_linux_resources_cpu (get_val (tree, "cpu", yajl_t_object), ctx, err);
    if (ret->cpu == NULL && *err != 0)
      return NULL;
    do
      {
        yajl_val tmp = get_val (tree, "hugepageLimits", yajl_t_array);
        if (tmp != NULL && YAJL_GET_ARRAY (tmp) != NULL)
          {
            size_t i;
            size_t len = YAJL_GET_ARRAY_NO_CHECK (tmp)->len;
            yajl_val *values = YAJL_GET_ARRAY_NO_CHECK (tmp)->values;
            ret->hugepage_limits_len = len;
            ret->hugepage_limits = calloc (len + 1, sizeof (*ret->hugepage_limits));
            if (ret->hugepage_limits == NULL)
              return NULL;
            for (i = 0; i < len; i++)
              {
                yajl_val val = values[i];
                ret->hugepage_limits[i] = make_runtime_spec_schema_config_linux_resources_hugepage_limits_element (val, ctx, err);
                if (ret->hugepage_limits[i] == NULL)
                  return NULL;
              }
          }
      }
    while (0);
    ret->memory = make_runtime_spec_schema_config_linux_resources_memory (get_val (tree, "memory", yajl_t_object), ctx, err);
    if (ret->memory == NULL && *err != 0)
      return NULL;
    ret->network = make_runtime_spec_schema_config_linux_resources_network (get_val (tree, "network", yajl_t_object), ctx, err);
    if (ret->network == NULL && *err != 0)
      return NULL;
    ret->rdma = make_runtime_spec_schema_config_linux_resources_rdma (get_val (tree, "rdma", yajl_t_object), ctx, err);
    if (ret->rdma == NULL && *err != 0)
      return NULL;

    if (tree->type == yajl_t_object)
      {
        size_t i;
        size_t j = 0;
        size_t cnt = tree->u.object.len;
        yajl_val resi = NULL;

        if (ctx->options & OPT_PARSE_FULLKEY)
          {
            resi = calloc (1, sizeof(*tree));
            if (resi == NULL)
              return NULL;

            resi->type = yajl_t_object;
            resi->u.object.keys = calloc (cnt, sizeof (const char *));
            if (resi->u.object.keys == NULL)
              {
                yajl_tree_free (resi);
                return NULL;
              }
            resi->u.object.values = calloc (cnt, sizeof (yajl_val));
            if (resi->u.object.values == NULL)
              {
                yajl_tree_free (resi);
                return NULL;
              }
          }

        for (i = 0; i < tree->u.object.len; i++)
          {
            if (strcmp (tree->u.object.keys[i], "unified")
                && strcmp (tree->u.object.keys[i], "devices")
                && strcmp (tree->u.object.keys[i], "pids")
                && strcmp (tree->u.object.keys[i], "blockIO")
                && strcmp (tree->u.object.keys[i], "cpu")
                && strcmp (tree->u.object.keys[i], "hugepageLimits")
                && strcmp (tree->u.object.keys[i], "memory")
                && strcmp (tree->u.object.keys[i], "network")
                && strcmp (tree->u.object.keys[i], "rdma"))
              {
                if (ctx->options & OPT_PARSE_FULLKEY)
                  {
                    resi->u.object.keys[j] = tree->u.object.keys[i];
                    tree->u.object.keys[i] = NULL;
                    resi->u.object.values[j] = tree->u.object.values[i];
                    tree->u.object.values[i] = NULL;
                    resi->u.object.len++;
                  }
                j++;
              }
          }
        if (ctx->options & OPT_PARSE_STRICT)
          {
            if (j > 0 && ctx->errfile != NULL)
                (void) fprintf (ctx->errfile, "WARNING: unknown key found\n");
          }
        if (ctx->options & OPT_PARSE_FULLKEY)
            ret->_residual = resi;
      }
    return move_ptr (ret);
}

void
free_runtime_spec_schema_config_linux_resources (runtime_spec_schema_config_linux_resources *ptr)
{
    if (ptr == NULL)
        return;
    free_json_map_string_string (ptr->unified);
    ptr->unified = NULL;
    if (ptr->devices != NULL)
      {
        size_t i;
        for (i = 0; i < ptr->devices_len; i++)
          {
          if (ptr->devices[i] != NULL)
            {
              free_runtime_spec_schema_defs_linux_device_cgroup (ptr->devices[i]);
              ptr->devices[i] = NULL;
            }
          }
        free (ptr->devices);
        ptr->devices = NULL;
      }
    if (ptr->pids != NULL)
      {
        free_runtime_spec_schema_config_linux_resources_pids (ptr->pids);
        ptr->pids = NULL;
      }
    if (ptr->block_io != NULL)
      {
        free_runtime_spec_schema_config_linux_resources_block_io (ptr->block_io);
        ptr->block_io = NULL;
      }
    if (ptr->cpu != NULL)
      {
        free_runtime_spec_schema_config_linux_resources_cpu (ptr->cpu);
        ptr->cpu = NULL;
      }
    if (ptr->hugepage_limits != NULL)
      {
        size_t i;
        for (i = 0; i < ptr->hugepage_limits_len; i++)
          {
          if (ptr->hugepage_limits[i] != NULL)
            {
              free_runtime_spec_schema_config_linux_resources_hugepage_limits_element (ptr->hugepage_limits[i]);
              ptr->hugepage_limits[i] = NULL;
            }
          }
        free (ptr->hugepage_limits);
        ptr->hugepage_limits = NULL;
      }
    if (ptr->memory != NULL)
      {
        free_runtime_spec_schema_config_linux_resources_memory (ptr->memory);
        ptr->memory = NULL;
      }
    if (ptr->network != NULL)
      {
        free_runtime_spec_schema_config_linux_resources_network (ptr->network);
        ptr->network = NULL;
      }
    if (ptr->rdma != NULL)
      {
        free_runtime_spec_schema_config_linux_resources_rdma (ptr->rdma);
        ptr->rdma = NULL;
      }
    yajl_tree_free (ptr->_residual);
    ptr->_residual = NULL;
    free (ptr);
}

yajl_gen_status
gen_runtime_spec_schema_config_linux_resources (yajl_gen g, const runtime_spec_schema_config_linux_resources *ptr, const struct parser_context *ctx, parser_error *err)
{
    yajl_gen_status stat = yajl_gen_status_ok;
    *err = NULL;
    (void) ptr;  /* Silence compiler warning.  */
    stat = yajl_gen_map_open ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->unified != NULL))
      {
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("unified"), 7 /* strlen ("unified") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        stat = gen_json_map_string_string (g, ptr ? ptr->unified : NULL, ctx, err);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->devices != NULL))
      {
        size_t len = 0, i;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("devices"), 7 /* strlen ("devices") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->devices != NULL)
            len = ptr->devices_len;
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 0);
        stat = yajl_gen_array_open ((yajl_gen) g);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        for (i = 0; i < len; i++)
          {
            stat = gen_runtime_spec_schema_defs_linux_device_cgroup (g, ptr->devices[i], ctx, err);
            if (stat != yajl_gen_status_ok)
                GEN_SET_ERROR_AND_RETURN (stat, err);
          }
        stat = yajl_gen_array_close ((yajl_gen) g);
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 1);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->pids != NULL))
      {
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("pids"), 4 /* strlen ("pids") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        stat = gen_runtime_spec_schema_config_linux_resources_pids (g, ptr != NULL ? ptr->pids : NULL, ctx, err);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->block_io != NULL))
      {
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("blockIO"), 7 /* strlen ("blockIO") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        stat = gen_runtime_spec_schema_config_linux_resources_block_io (g, ptr != NULL ? ptr->block_io : NULL, ctx, err);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->cpu != NULL))
      {
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("cpu"), 3 /* strlen ("cpu") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        stat = gen_runtime_spec_schema_config_linux_resources_cpu (g, ptr != NULL ? ptr->cpu : NULL, ctx, err);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->hugepage_limits != NULL))
      {
        size_t len = 0, i;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("hugepageLimits"), 14 /* strlen ("hugepageLimits") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->hugepage_limits != NULL)
            len = ptr->hugepage_limits_len;
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 0);
        stat = yajl_gen_array_open ((yajl_gen) g);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        for (i = 0; i < len; i++)
          {
            stat = gen_runtime_spec_schema_config_linux_resources_hugepage_limits_element (g, ptr->hugepage_limits[i], ctx, err);
            if (stat != yajl_gen_status_ok)
                GEN_SET_ERROR_AND_RETURN (stat, err);
          }
        stat = yajl_gen_array_close ((yajl_gen) g);
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 1);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->memory != NULL))
      {
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("memory"), 6 /* strlen ("memory") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        stat = gen_runtime_spec_schema_config_linux_resources_memory (g, ptr != NULL ? ptr->memory : NULL, ctx, err);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->network != NULL))
      {
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("network"), 7 /* strlen ("network") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        stat = gen_runtime_spec_schema_config_linux_resources_network (g, ptr != NULL ? ptr->network : NULL, ctx, err);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->rdma != NULL))
      {
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("rdma"), 4 /* strlen ("rdma") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        stat = gen_runtime_spec_schema_config_linux_resources_rdma (g, ptr != NULL ? ptr->rdma : NULL, ctx, err);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if (ptr != NULL && ptr->_residual != NULL)
      {
        stat = gen_yajl_object_residual (ptr->_residual, g, err);
        if (yajl_gen_status_ok != stat)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    stat = yajl_gen_map_close ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    return yajl_gen_status_ok;
}

define_cleaner_function (runtime_spec_schema_config_linux_seccomp *, free_runtime_spec_schema_config_linux_seccomp)
runtime_spec_schema_config_linux_seccomp *
make_runtime_spec_schema_config_linux_seccomp (yajl_val tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup(free_runtime_spec_schema_config_linux_seccomp) runtime_spec_schema_config_linux_seccomp *ret = NULL;
    *err = NULL;
    (void) ctx;  /* Silence compiler warning.  */
    if (tree == NULL)
      return NULL;
    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
    do
      {
        yajl_val val = get_val (tree, "defaultAction", yajl_t_string);
        if (val != NULL)
          {
            char *str = YAJL_GET_STRING (val);
            ret->default_action = strdup (str ? str : "");
            if (ret->default_action == NULL)
              return NULL;
          }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "defaultErrnoRet", yajl_t_number);
        if (val != NULL)
          {
            int invalid;
            if (! YAJL_IS_NUMBER (val))
              {
                *err = strdup ("invalid type");
                return NULL;
              }
            invalid = common_safe_uint32 (YAJL_GET_NUMBER (val), &ret->default_errno_ret);
            if (invalid)
              {
                if (asprintf (err, "Invalid value '%s' with type 'uint32' for key 'defaultErrnoRet': %s", YAJL_GET_NUMBER (val), strerror (-invalid)) < 0)
                    *err = strdup ("error allocating memory");
                return NULL;
            }
            ret->default_errno_ret_present = 1;
        }
      }
    while (0);
    do
      {
        yajl_val tmp = get_val (tree, "flags", yajl_t_array);
        if (tmp != NULL && YAJL_GET_ARRAY (tmp) != NULL)
          {
            size_t i;
            size_t len = YAJL_GET_ARRAY_NO_CHECK (tmp)->len;
            yajl_val *values = YAJL_GET_ARRAY_NO_CHECK (tmp)->values;
            ret->flags_len = len;
            ret->flags = calloc (len + 1, sizeof (*ret->flags));
            if (ret->flags == NULL)
              return NULL;
            for (i = 0; i < len; i++)
              {
                yajl_val val = values[i];
                if (val != NULL)
                  {
                    char *str = YAJL_GET_STRING (val);
                    ret->flags[i] = strdup (str ? str : "");
                    if (ret->flags[i] == NULL)
                      return NULL;
                  }
              }
        }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "listenerPath", yajl_t_string);
        if (val != NULL)
          {
            char *str = YAJL_GET_STRING (val);
            ret->listener_path = strdup (str ? str : "");
            if (ret->listener_path == NULL)
              return NULL;
          }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "listenerMetadata", yajl_t_string);
        if (val != NULL)
          {
            char *str = YAJL_GET_STRING (val);
            ret->listener_metadata = strdup (str ? str : "");
            if (ret->listener_metadata == NULL)
              return NULL;
          }
      }
    while (0);
    do
      {
        yajl_val tmp = get_val (tree, "architectures", yajl_t_array);
        if (tmp != NULL && YAJL_GET_ARRAY (tmp) != NULL)
          {
            size_t i;
            size_t len = YAJL_GET_ARRAY_NO_CHECK (tmp)->len;
            yajl_val *values = YAJL_GET_ARRAY_NO_CHECK (tmp)->values;
            ret->architectures_len = len;
            ret->architectures = calloc (len + 1, sizeof (*ret->architectures));
            if (ret->architectures == NULL)
              return NULL;
            for (i = 0; i < len; i++)
              {
                yajl_val val = values[i];
                if (val != NULL)
                  {
                    char *str = YAJL_GET_STRING (val);
                    ret->architectures[i] = strdup (str ? str : "");
                    if (ret->architectures[i] == NULL)
                      return NULL;
                  }
              }
        }
      }
    while (0);
    do
      {
        yajl_val tmp = get_val (tree, "syscalls", yajl_t_array);
        if (tmp != NULL && YAJL_GET_ARRAY (tmp) != NULL)
          {
            size_t i;
            size_t len = YAJL_GET_ARRAY_NO_CHECK (tmp)->len;
            yajl_val *values = YAJL_GET_ARRAY_NO_CHECK (tmp)->values;
            ret->syscalls_len = len;
            ret->syscalls = calloc (len + 1, sizeof (*ret->syscalls));
            if (ret->syscalls == NULL)
              return NULL;
            for (i = 0; i < len; i++)
              {
                yajl_val val = values[i];
                ret->syscalls[i] = make_runtime_spec_schema_defs_linux_syscall (val, ctx, err);
                if (ret->syscalls[i] == NULL)
                  return NULL;
              }
          }
      }
    while (0);
    if (ret->default_action == NULL)
      {
        if (asprintf (err, "Required field '%s' not present",  "defaultAction") < 0)
            *err = strdup ("error allocating memory");
        return NULL;
      }

    if (tree->type == yajl_t_object)
      {
        size_t i;
        size_t j = 0;
        size_t cnt = tree->u.object.len;
        yajl_val resi = NULL;

        if (ctx->options & OPT_PARSE_FULLKEY)
          {
            resi = calloc (1, sizeof(*tree));
            if (resi == NULL)
              return NULL;

            resi->type = yajl_t_object;
            resi->u.object.keys = calloc (cnt, sizeof (const char *));
            if (resi->u.object.keys == NULL)
              {
                yajl_tree_free (resi);
                return NULL;
              }
            resi->u.object.values = calloc (cnt, sizeof (yajl_val));
            if (resi->u.object.values == NULL)
              {
                yajl_tree_free (resi);
                return NULL;
              }
          }

        for (i = 0; i < tree->u.object.len; i++)
          {
            if (strcmp (tree->u.object.keys[i], "defaultAction")
                && strcmp (tree->u.object.keys[i], "defaultErrnoRet")
                && strcmp (tree->u.object.keys[i], "flags")
                && strcmp (tree->u.object.keys[i], "listenerPath")
                && strcmp (tree->u.object.keys[i], "listenerMetadata")
                && strcmp (tree->u.object.keys[i], "architectures")
                && strcmp (tree->u.object.keys[i], "syscalls"))
              {
                if (ctx->options & OPT_PARSE_FULLKEY)
                  {
                    resi->u.object.keys[j] = tree->u.object.keys[i];
                    tree->u.object.keys[i] = NULL;
                    resi->u.object.values[j] = tree->u.object.values[i];
                    tree->u.object.values[i] = NULL;
                    resi->u.object.len++;
                  }
                j++;
              }
          }
        if (ctx->options & OPT_PARSE_STRICT)
          {
            if (j > 0 && ctx->errfile != NULL)
                (void) fprintf (ctx->errfile, "WARNING: unknown key found\n");
          }
        if (ctx->options & OPT_PARSE_FULLKEY)
            ret->_residual = resi;
      }
    return move_ptr (ret);
}

void
free_runtime_spec_schema_config_linux_seccomp (runtime_spec_schema_config_linux_seccomp *ptr)
{
    if (ptr == NULL)
        return;
    free (ptr->default_action);
    ptr->default_action = NULL;
    if (ptr->flags != NULL)
      {
        size_t i;
        for (i = 0; i < ptr->flags_len; i++)
          {
            if (ptr->flags[i] != NULL)
              {
                free (ptr->flags[i]);
                ptr->flags[i] = NULL;
              }
          }
        free (ptr->flags);
        ptr->flags = NULL;
    }
    free (ptr->listener_path);
    ptr->listener_path = NULL;
    free (ptr->listener_metadata);
    ptr->listener_metadata = NULL;
    if (ptr->architectures != NULL)
      {
        size_t i;
        for (i = 0; i < ptr->architectures_len; i++)
          {
            if (ptr->architectures[i] != NULL)
              {
                free (ptr->architectures[i]);
                ptr->architectures[i] = NULL;
              }
          }
        free (ptr->architectures);
        ptr->architectures = NULL;
    }
    if (ptr->syscalls != NULL)
      {
        size_t i;
        for (i = 0; i < ptr->syscalls_len; i++)
          {
          if (ptr->syscalls[i] != NULL)
            {
              free_runtime_spec_schema_defs_linux_syscall (ptr->syscalls[i]);
              ptr->syscalls[i] = NULL;
            }
          }
        free (ptr->syscalls);
        ptr->syscalls = NULL;
      }
    yajl_tree_free (ptr->_residual);
    ptr->_residual = NULL;
    free (ptr);
}

yajl_gen_status
gen_runtime_spec_schema_config_linux_seccomp (yajl_gen g, const runtime_spec_schema_config_linux_seccomp *ptr, const struct parser_context *ctx, parser_error *err)
{
    yajl_gen_status stat = yajl_gen_status_ok;
    *err = NULL;
    (void) ptr;  /* Silence compiler warning.  */
    stat = yajl_gen_map_open ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->default_action != NULL))
      {
        char *str = "";
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("defaultAction"), 13 /* strlen ("defaultAction") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->default_action != NULL)
            str = ptr->default_action;
        stat = yajl_gen_string ((yajl_gen)g, (const unsigned char *)(str), strlen (str));
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->default_errno_ret_present))
      {
        long long unsigned int num = 0;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("defaultErrnoRet"), 15 /* strlen ("defaultErrnoRet") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->default_errno_ret)
            num = (long long unsigned int)ptr->default_errno_ret;
        stat = map_uint (g, num);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->flags != NULL))
      {
        size_t len = 0, i;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("flags"), 5 /* strlen ("flags") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->flags != NULL)
          len = ptr->flags_len;
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 0);
        stat = yajl_gen_array_open ((yajl_gen) g);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        for (i = 0; i < len; i++)
          {
            stat = yajl_gen_string ((yajl_gen)g, (const unsigned char *)(ptr->flags[i]), strlen (ptr->flags[i]));
            if (stat != yajl_gen_status_ok)
                GEN_SET_ERROR_AND_RETURN (stat, err);
          }
        stat = yajl_gen_array_close ((yajl_gen) g);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 1);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->listener_path != NULL))
      {
        char *str = "";
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("listenerPath"), 12 /* strlen ("listenerPath") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->listener_path != NULL)
            str = ptr->listener_path;
        stat = yajl_gen_string ((yajl_gen)g, (const unsigned char *)(str), strlen (str));
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->listener_metadata != NULL))
      {
        char *str = "";
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("listenerMetadata"), 16 /* strlen ("listenerMetadata") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->listener_metadata != NULL)
            str = ptr->listener_metadata;
        stat = yajl_gen_string ((yajl_gen)g, (const unsigned char *)(str), strlen (str));
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->architectures != NULL))
      {
        size_t len = 0, i;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("architectures"), 13 /* strlen ("architectures") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->architectures != NULL)
          len = ptr->architectures_len;
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 0);
        stat = yajl_gen_array_open ((yajl_gen) g);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        for (i = 0; i < len; i++)
          {
            stat = yajl_gen_string ((yajl_gen)g, (const unsigned char *)(ptr->architectures[i]), strlen (ptr->architectures[i]));
            if (stat != yajl_gen_status_ok)
                GEN_SET_ERROR_AND_RETURN (stat, err);
          }
        stat = yajl_gen_array_close ((yajl_gen) g);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 1);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->syscalls != NULL))
      {
        size_t len = 0, i;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("syscalls"), 8 /* strlen ("syscalls") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->syscalls != NULL)
            len = ptr->syscalls_len;
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 0);
        stat = yajl_gen_array_open ((yajl_gen) g);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        for (i = 0; i < len; i++)
          {
            stat = gen_runtime_spec_schema_defs_linux_syscall (g, ptr->syscalls[i], ctx, err);
            if (stat != yajl_gen_status_ok)
                GEN_SET_ERROR_AND_RETURN (stat, err);
          }
        stat = yajl_gen_array_close ((yajl_gen) g);
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 1);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if (ptr != NULL && ptr->_residual != NULL)
      {
        stat = gen_yajl_object_residual (ptr->_residual, g, err);
        if (yajl_gen_status_ok != stat)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    stat = yajl_gen_map_close ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    return yajl_gen_status_ok;
}

define_cleaner_function (runtime_spec_schema_config_linux_intel_rdt *, free_runtime_spec_schema_config_linux_intel_rdt)
runtime_spec_schema_config_linux_intel_rdt *
make_runtime_spec_schema_config_linux_intel_rdt (yajl_val tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup(free_runtime_spec_schema_config_linux_intel_rdt) runtime_spec_schema_config_linux_intel_rdt *ret = NULL;
    *err = NULL;
    (void) ctx;  /* Silence compiler warning.  */
    if (tree == NULL)
      return NULL;
    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
    do
      {
        yajl_val val = get_val (tree, "closID", yajl_t_string);
        if (val != NULL)
          {
            char *str = YAJL_GET_STRING (val);
            ret->clos_id = strdup (str ? str : "");
            if (ret->clos_id == NULL)
              return NULL;
          }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "l3CacheSchema", yajl_t_string);
        if (val != NULL)
          {
            char *str = YAJL_GET_STRING (val);
            ret->l3cache_schema = strdup (str ? str : "");
            if (ret->l3cache_schema == NULL)
              return NULL;
          }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "memBwSchema", yajl_t_string);
        if (val != NULL)
          {
            char *str = YAJL_GET_STRING (val);
            ret->mem_bw_schema = strdup (str ? str : "");
            if (ret->mem_bw_schema == NULL)
              return NULL;
          }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "enableCMT", yajl_t_true);
        if (val != NULL)
          {
            ret->enable_cmt = YAJL_IS_TRUE(val);
            ret->enable_cmt_present = 1;
          }
        else
          {
            val = get_val (tree, "enableCMT", yajl_t_false);
            if (val != NULL)
              {
                ret->enable_cmt = 0;
                ret->enable_cmt_present = 1;
              }
          }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "enableMBM", yajl_t_true);
        if (val != NULL)
          {
            ret->enable_mbm = YAJL_IS_TRUE(val);
            ret->enable_mbm_present = 1;
          }
        else
          {
            val = get_val (tree, "enableMBM", yajl_t_false);
            if (val != NULL)
              {
                ret->enable_mbm = 0;
                ret->enable_mbm_present = 1;
              }
          }
      }
    while (0);

    if (tree->type == yajl_t_object)
      {
        size_t i;
        size_t j = 0;
        size_t cnt = tree->u.object.len;
        yajl_val resi = NULL;

        if (ctx->options & OPT_PARSE_FULLKEY)
          {
            resi = calloc (1, sizeof(*tree));
            if (resi == NULL)
              return NULL;

            resi->type = yajl_t_object;
            resi->u.object.keys = calloc (cnt, sizeof (const char *));
            if (resi->u.object.keys == NULL)
              {
                yajl_tree_free (resi);
                return NULL;
              }
            resi->u.object.values = calloc (cnt, sizeof (yajl_val));
            if (resi->u.object.values == NULL)
              {
                yajl_tree_free (resi);
                return NULL;
              }
          }

        for (i = 0; i < tree->u.object.len; i++)
          {
            if (strcmp (tree->u.object.keys[i], "closID")
                && strcmp (tree->u.object.keys[i], "l3CacheSchema")
                && strcmp (tree->u.object.keys[i], "memBwSchema")
                && strcmp (tree->u.object.keys[i], "enableCMT")
                && strcmp (tree->u.object.keys[i], "enableMBM"))
              {
                if (ctx->options & OPT_PARSE_FULLKEY)
                  {
                    resi->u.object.keys[j] = tree->u.object.keys[i];
                    tree->u.object.keys[i] = NULL;
                    resi->u.object.values[j] = tree->u.object.values[i];
                    tree->u.object.values[i] = NULL;
                    resi->u.object.len++;
                  }
                j++;
              }
          }
        if (ctx->options & OPT_PARSE_STRICT)
          {
            if (j > 0 && ctx->errfile != NULL)
                (void) fprintf (ctx->errfile, "WARNING: unknown key found\n");
          }
        if (ctx->options & OPT_PARSE_FULLKEY)
            ret->_residual = resi;
      }
    return move_ptr (ret);
}

void
free_runtime_spec_schema_config_linux_intel_rdt (runtime_spec_schema_config_linux_intel_rdt *ptr)
{
    if (ptr == NULL)
        return;
    free (ptr->clos_id);
    ptr->clos_id = NULL;
    free (ptr->l3cache_schema);
    ptr->l3cache_schema = NULL;
    free (ptr->mem_bw_schema);
    ptr->mem_bw_schema = NULL;
    yajl_tree_free (ptr->_residual);
    ptr->_residual = NULL;
    free (ptr);
}

yajl_gen_status
gen_runtime_spec_schema_config_linux_intel_rdt (yajl_gen g, const runtime_spec_schema_config_linux_intel_rdt *ptr, const struct parser_context *ctx, parser_error *err)
{
    yajl_gen_status stat = yajl_gen_status_ok;
    *err = NULL;
    (void) ptr;  /* Silence compiler warning.  */
    stat = yajl_gen_map_open ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->clos_id != NULL))
      {
        char *str = "";
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("closID"), 6 /* strlen ("closID") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->clos_id != NULL)
            str = ptr->clos_id;
        stat = yajl_gen_string ((yajl_gen)g, (const unsigned char *)(str), strlen (str));
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->l3cache_schema != NULL))
      {
        char *str = "";
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("l3CacheSchema"), 13 /* strlen ("l3CacheSchema") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->l3cache_schema != NULL)
            str = ptr->l3cache_schema;
        stat = yajl_gen_string ((yajl_gen)g, (const unsigned char *)(str), strlen (str));
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->mem_bw_schema != NULL))
      {
        char *str = "";
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("memBwSchema"), 11 /* strlen ("memBwSchema") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->mem_bw_schema != NULL)
            str = ptr->mem_bw_schema;
        stat = yajl_gen_string ((yajl_gen)g, (const unsigned char *)(str), strlen (str));
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->enable_cmt_present))
      {
        bool b = false;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("enableCMT"), 9 /* strlen ("enableCMT") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->enable_cmt)
            b = ptr->enable_cmt;
        
        stat = yajl_gen_bool ((yajl_gen)g, (int)(b));
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->enable_mbm_present))
      {
        bool b = false;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("enableMBM"), 9 /* strlen ("enableMBM") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->enable_mbm)
            b = ptr->enable_mbm;
        
        stat = yajl_gen_bool ((yajl_gen)g, (int)(b));
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if (ptr != NULL && ptr->_residual != NULL)
      {
        stat = gen_yajl_object_residual (ptr->_residual, g, err);
        if (yajl_gen_status_ok != stat)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    stat = yajl_gen_map_close ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    return yajl_gen_status_ok;
}

define_cleaner_function (runtime_spec_schema_config_linux *, free_runtime_spec_schema_config_linux)
runtime_spec_schema_config_linux *
make_runtime_spec_schema_config_linux (yajl_val tree, const struct parser_context *ctx, parser_error *err)
{
    __auto_cleanup(free_runtime_spec_schema_config_linux) runtime_spec_schema_config_linux *ret = NULL;
    *err = NULL;
    (void) ctx;  /* Silence compiler warning.  */
    if (tree == NULL)
      return NULL;
    ret = calloc (1, sizeof (*ret));
    if (ret == NULL)
      return NULL;
    do
      {
        yajl_val tmp = get_val (tree, "devices", yajl_t_array);
        if (tmp != NULL && YAJL_GET_ARRAY (tmp) != NULL)
          {
            size_t i;
            size_t len = YAJL_GET_ARRAY_NO_CHECK (tmp)->len;
            yajl_val *values = YAJL_GET_ARRAY_NO_CHECK (tmp)->values;
            ret->devices_len = len;
            ret->devices = calloc (len + 1, sizeof (*ret->devices));
            if (ret->devices == NULL)
              return NULL;
            for (i = 0; i < len; i++)
              {
                yajl_val val = values[i];
                ret->devices[i] = make_runtime_spec_schema_defs_linux_device (val, ctx, err);
                if (ret->devices[i] == NULL)
                  return NULL;
              }
          }
      }
    while (0);
    do
      {
        yajl_val tmp = get_val (tree, "uidMappings", yajl_t_array);
        if (tmp != NULL && YAJL_GET_ARRAY (tmp) != NULL)
          {
            size_t i;
            size_t len = YAJL_GET_ARRAY_NO_CHECK (tmp)->len;
            yajl_val *values = YAJL_GET_ARRAY_NO_CHECK (tmp)->values;
            ret->uid_mappings_len = len;
            ret->uid_mappings = calloc (len + 1, sizeof (*ret->uid_mappings));
            if (ret->uid_mappings == NULL)
              return NULL;
            for (i = 0; i < len; i++)
              {
                yajl_val val = values[i];
                ret->uid_mappings[i] = make_runtime_spec_schema_defs_id_mapping (val, ctx, err);
                if (ret->uid_mappings[i] == NULL)
                  return NULL;
              }
          }
      }
    while (0);
    do
      {
        yajl_val tmp = get_val (tree, "gidMappings", yajl_t_array);
        if (tmp != NULL && YAJL_GET_ARRAY (tmp) != NULL)
          {
            size_t i;
            size_t len = YAJL_GET_ARRAY_NO_CHECK (tmp)->len;
            yajl_val *values = YAJL_GET_ARRAY_NO_CHECK (tmp)->values;
            ret->gid_mappings_len = len;
            ret->gid_mappings = calloc (len + 1, sizeof (*ret->gid_mappings));
            if (ret->gid_mappings == NULL)
              return NULL;
            for (i = 0; i < len; i++)
              {
                yajl_val val = values[i];
                ret->gid_mappings[i] = make_runtime_spec_schema_defs_id_mapping (val, ctx, err);
                if (ret->gid_mappings[i] == NULL)
                  return NULL;
              }
          }
      }
    while (0);
    do
      {
        yajl_val tmp = get_val (tree, "namespaces", yajl_t_array);
        if (tmp != NULL && YAJL_GET_ARRAY (tmp) != NULL)
          {
            size_t i;
            size_t len = YAJL_GET_ARRAY_NO_CHECK (tmp)->len;
            yajl_val *values = YAJL_GET_ARRAY_NO_CHECK (tmp)->values;
            ret->namespaces_len = len;
            ret->namespaces = calloc (len + 1, sizeof (*ret->namespaces));
            if (ret->namespaces == NULL)
              return NULL;
            for (i = 0; i < len; i++)
              {
                yajl_val val = values[i];
                ret->namespaces[i] = make_runtime_spec_schema_defs_linux_namespace_reference (val, ctx, err);
                if (ret->namespaces[i] == NULL)
                  return NULL;
              }
          }
      }
    while (0);
    ret->resources = make_runtime_spec_schema_config_linux_resources (get_val (tree, "resources", yajl_t_object), ctx, err);
    if (ret->resources == NULL && *err != 0)
      return NULL;
    do
      {
        yajl_val val = get_val (tree, "cgroupsPath", yajl_t_string);
        if (val != NULL)
          {
            char *str = YAJL_GET_STRING (val);
            ret->cgroups_path = strdup (str ? str : "");
            if (ret->cgroups_path == NULL)
              return NULL;
          }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "rootfsPropagation", yajl_t_string);
        if (val != NULL)
          {
            char *str = YAJL_GET_STRING (val);
            ret->rootfs_propagation = strdup (str ? str : "");
            if (ret->rootfs_propagation == NULL)
              return NULL;
          }
      }
    while (0);
    ret->seccomp = make_runtime_spec_schema_config_linux_seccomp (get_val (tree, "seccomp", yajl_t_object), ctx, err);
    if (ret->seccomp == NULL && *err != 0)
      return NULL;
    do
      {
        yajl_val tmp = get_val (tree, "sysctl", yajl_t_object);
        if (tmp != NULL)
          {
            ret->sysctl = make_json_map_string_string (tmp, ctx, err);
            if (ret->sysctl == NULL)
              {
                char *new_error = NULL;
                if (asprintf (&new_error, "Value error for key 'sysctl': %s", *err ? *err : "null") < 0)
                  new_error = strdup ("error allocating memory");
                free (*err);
                *err = new_error;
                return NULL;
              }
          }
      }
    while (0);
    do
      {
        yajl_val tmp = get_val (tree, "maskedPaths", yajl_t_array);
        if (tmp != NULL && YAJL_GET_ARRAY (tmp) != NULL)
          {
            size_t i;
            size_t len = YAJL_GET_ARRAY_NO_CHECK (tmp)->len;
            yajl_val *values = YAJL_GET_ARRAY_NO_CHECK (tmp)->values;
            ret->masked_paths_len = len;
            ret->masked_paths = calloc (len + 1, sizeof (*ret->masked_paths));
            if (ret->masked_paths == NULL)
              return NULL;
            for (i = 0; i < len; i++)
              {
                yajl_val val = values[i];
                if (val != NULL)
                  {
                    char *str = YAJL_GET_STRING (val);
                    ret->masked_paths[i] = strdup (str ? str : "");
                    if (ret->masked_paths[i] == NULL)
                      return NULL;
                  }
              }
        }
      }
    while (0);
    do
      {
        yajl_val tmp = get_val (tree, "readonlyPaths", yajl_t_array);
        if (tmp != NULL && YAJL_GET_ARRAY (tmp) != NULL)
          {
            size_t i;
            size_t len = YAJL_GET_ARRAY_NO_CHECK (tmp)->len;
            yajl_val *values = YAJL_GET_ARRAY_NO_CHECK (tmp)->values;
            ret->readonly_paths_len = len;
            ret->readonly_paths = calloc (len + 1, sizeof (*ret->readonly_paths));
            if (ret->readonly_paths == NULL)
              return NULL;
            for (i = 0; i < len; i++)
              {
                yajl_val val = values[i];
                if (val != NULL)
                  {
                    char *str = YAJL_GET_STRING (val);
                    ret->readonly_paths[i] = strdup (str ? str : "");
                    if (ret->readonly_paths[i] == NULL)
                      return NULL;
                  }
              }
        }
      }
    while (0);
    do
      {
        yajl_val val = get_val (tree, "mountLabel", yajl_t_string);
        if (val != NULL)
          {
            char *str = YAJL_GET_STRING (val);
            ret->mount_label = strdup (str ? str : "");
            if (ret->mount_label == NULL)
              return NULL;
          }
      }
    while (0);
    ret->intel_rdt = make_runtime_spec_schema_config_linux_intel_rdt (get_val (tree, "intelRdt", yajl_t_object), ctx, err);
    if (ret->intel_rdt == NULL && *err != 0)
      return NULL;
    ret->personality = make_runtime_spec_schema_defs_linux_personality (get_val (tree, "personality", yajl_t_object), ctx, err);
    if (ret->personality == NULL && *err != 0)
      return NULL;

    if (tree->type == yajl_t_object)
      {
        size_t i;
        size_t j = 0;
        size_t cnt = tree->u.object.len;
        yajl_val resi = NULL;

        if (ctx->options & OPT_PARSE_FULLKEY)
          {
            resi = calloc (1, sizeof(*tree));
            if (resi == NULL)
              return NULL;

            resi->type = yajl_t_object;
            resi->u.object.keys = calloc (cnt, sizeof (const char *));
            if (resi->u.object.keys == NULL)
              {
                yajl_tree_free (resi);
                return NULL;
              }
            resi->u.object.values = calloc (cnt, sizeof (yajl_val));
            if (resi->u.object.values == NULL)
              {
                yajl_tree_free (resi);
                return NULL;
              }
          }

        for (i = 0; i < tree->u.object.len; i++)
          {
            if (strcmp (tree->u.object.keys[i], "devices")
                && strcmp (tree->u.object.keys[i], "uidMappings")
                && strcmp (tree->u.object.keys[i], "gidMappings")
                && strcmp (tree->u.object.keys[i], "namespaces")
                && strcmp (tree->u.object.keys[i], "resources")
                && strcmp (tree->u.object.keys[i], "cgroupsPath")
                && strcmp (tree->u.object.keys[i], "rootfsPropagation")
                && strcmp (tree->u.object.keys[i], "seccomp")
                && strcmp (tree->u.object.keys[i], "sysctl")
                && strcmp (tree->u.object.keys[i], "maskedPaths")
                && strcmp (tree->u.object.keys[i], "readonlyPaths")
                && strcmp (tree->u.object.keys[i], "mountLabel")
                && strcmp (tree->u.object.keys[i], "intelRdt")
                && strcmp (tree->u.object.keys[i], "personality"))
              {
                if (ctx->options & OPT_PARSE_FULLKEY)
                  {
                    resi->u.object.keys[j] = tree->u.object.keys[i];
                    tree->u.object.keys[i] = NULL;
                    resi->u.object.values[j] = tree->u.object.values[i];
                    tree->u.object.values[i] = NULL;
                    resi->u.object.len++;
                  }
                j++;
              }
          }
        if (ctx->options & OPT_PARSE_STRICT)
          {
            if (j > 0 && ctx->errfile != NULL)
                (void) fprintf (ctx->errfile, "WARNING: unknown key found\n");
          }
        if (ctx->options & OPT_PARSE_FULLKEY)
            ret->_residual = resi;
      }
    return move_ptr (ret);
}

void
free_runtime_spec_schema_config_linux (runtime_spec_schema_config_linux *ptr)
{
    if (ptr == NULL)
        return;
    if (ptr->devices != NULL)
      {
        size_t i;
        for (i = 0; i < ptr->devices_len; i++)
          {
          if (ptr->devices[i] != NULL)
            {
              free_runtime_spec_schema_defs_linux_device (ptr->devices[i]);
              ptr->devices[i] = NULL;
            }
          }
        free (ptr->devices);
        ptr->devices = NULL;
      }
    if (ptr->uid_mappings != NULL)
      {
        size_t i;
        for (i = 0; i < ptr->uid_mappings_len; i++)
          {
          if (ptr->uid_mappings[i] != NULL)
            {
              free_runtime_spec_schema_defs_id_mapping (ptr->uid_mappings[i]);
              ptr->uid_mappings[i] = NULL;
            }
          }
        free (ptr->uid_mappings);
        ptr->uid_mappings = NULL;
      }
    if (ptr->gid_mappings != NULL)
      {
        size_t i;
        for (i = 0; i < ptr->gid_mappings_len; i++)
          {
          if (ptr->gid_mappings[i] != NULL)
            {
              free_runtime_spec_schema_defs_id_mapping (ptr->gid_mappings[i]);
              ptr->gid_mappings[i] = NULL;
            }
          }
        free (ptr->gid_mappings);
        ptr->gid_mappings = NULL;
      }
    if (ptr->namespaces != NULL)
      {
        size_t i;
        for (i = 0; i < ptr->namespaces_len; i++)
          {
          if (ptr->namespaces[i] != NULL)
            {
              free_runtime_spec_schema_defs_linux_namespace_reference (ptr->namespaces[i]);
              ptr->namespaces[i] = NULL;
            }
          }
        free (ptr->namespaces);
        ptr->namespaces = NULL;
      }
    if (ptr->resources != NULL)
      {
        free_runtime_spec_schema_config_linux_resources (ptr->resources);
        ptr->resources = NULL;
      }
    free (ptr->cgroups_path);
    ptr->cgroups_path = NULL;
    free (ptr->rootfs_propagation);
    ptr->rootfs_propagation = NULL;
    if (ptr->seccomp != NULL)
      {
        free_runtime_spec_schema_config_linux_seccomp (ptr->seccomp);
        ptr->seccomp = NULL;
      }
    free_json_map_string_string (ptr->sysctl);
    ptr->sysctl = NULL;
    if (ptr->masked_paths != NULL)
      {
        size_t i;
        for (i = 0; i < ptr->masked_paths_len; i++)
          {
            if (ptr->masked_paths[i] != NULL)
              {
                free (ptr->masked_paths[i]);
                ptr->masked_paths[i] = NULL;
              }
          }
        free (ptr->masked_paths);
        ptr->masked_paths = NULL;
    }
    if (ptr->readonly_paths != NULL)
      {
        size_t i;
        for (i = 0; i < ptr->readonly_paths_len; i++)
          {
            if (ptr->readonly_paths[i] != NULL)
              {
                free (ptr->readonly_paths[i]);
                ptr->readonly_paths[i] = NULL;
              }
          }
        free (ptr->readonly_paths);
        ptr->readonly_paths = NULL;
    }
    free (ptr->mount_label);
    ptr->mount_label = NULL;
    if (ptr->intel_rdt != NULL)
      {
        free_runtime_spec_schema_config_linux_intel_rdt (ptr->intel_rdt);
        ptr->intel_rdt = NULL;
      }
    if (ptr->personality != NULL)
      {
        free_runtime_spec_schema_defs_linux_personality (ptr->personality);
        ptr->personality = NULL;
      }
    yajl_tree_free (ptr->_residual);
    ptr->_residual = NULL;
    free (ptr);
}

yajl_gen_status
gen_runtime_spec_schema_config_linux (yajl_gen g, const runtime_spec_schema_config_linux *ptr, const struct parser_context *ctx, parser_error *err)
{
    yajl_gen_status stat = yajl_gen_status_ok;
    *err = NULL;
    (void) ptr;  /* Silence compiler warning.  */
    stat = yajl_gen_map_open ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->devices != NULL))
      {
        size_t len = 0, i;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("devices"), 7 /* strlen ("devices") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->devices != NULL)
            len = ptr->devices_len;
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 0);
        stat = yajl_gen_array_open ((yajl_gen) g);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        for (i = 0; i < len; i++)
          {
            stat = gen_runtime_spec_schema_defs_linux_device (g, ptr->devices[i], ctx, err);
            if (stat != yajl_gen_status_ok)
                GEN_SET_ERROR_AND_RETURN (stat, err);
          }
        stat = yajl_gen_array_close ((yajl_gen) g);
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 1);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->uid_mappings != NULL))
      {
        size_t len = 0, i;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("uidMappings"), 11 /* strlen ("uidMappings") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->uid_mappings != NULL)
            len = ptr->uid_mappings_len;
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 0);
        stat = yajl_gen_array_open ((yajl_gen) g);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        for (i = 0; i < len; i++)
          {
            stat = gen_runtime_spec_schema_defs_id_mapping (g, ptr->uid_mappings[i], ctx, err);
            if (stat != yajl_gen_status_ok)
                GEN_SET_ERROR_AND_RETURN (stat, err);
          }
        stat = yajl_gen_array_close ((yajl_gen) g);
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 1);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->gid_mappings != NULL))
      {
        size_t len = 0, i;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("gidMappings"), 11 /* strlen ("gidMappings") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->gid_mappings != NULL)
            len = ptr->gid_mappings_len;
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 0);
        stat = yajl_gen_array_open ((yajl_gen) g);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        for (i = 0; i < len; i++)
          {
            stat = gen_runtime_spec_schema_defs_id_mapping (g, ptr->gid_mappings[i], ctx, err);
            if (stat != yajl_gen_status_ok)
                GEN_SET_ERROR_AND_RETURN (stat, err);
          }
        stat = yajl_gen_array_close ((yajl_gen) g);
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 1);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->namespaces != NULL))
      {
        size_t len = 0, i;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("namespaces"), 10 /* strlen ("namespaces") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->namespaces != NULL)
            len = ptr->namespaces_len;
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 0);
        stat = yajl_gen_array_open ((yajl_gen) g);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        for (i = 0; i < len; i++)
          {
            stat = gen_runtime_spec_schema_defs_linux_namespace_reference (g, ptr->namespaces[i], ctx, err);
            if (stat != yajl_gen_status_ok)
                GEN_SET_ERROR_AND_RETURN (stat, err);
          }
        stat = yajl_gen_array_close ((yajl_gen) g);
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 1);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->resources != NULL))
      {
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("resources"), 9 /* strlen ("resources") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        stat = gen_runtime_spec_schema_config_linux_resources (g, ptr != NULL ? ptr->resources : NULL, ctx, err);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->cgroups_path != NULL))
      {
        char *str = "";
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("cgroupsPath"), 11 /* strlen ("cgroupsPath") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->cgroups_path != NULL)
            str = ptr->cgroups_path;
        stat = yajl_gen_string ((yajl_gen)g, (const unsigned char *)(str), strlen (str));
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->rootfs_propagation != NULL))
      {
        char *str = "";
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("rootfsPropagation"), 17 /* strlen ("rootfsPropagation") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->rootfs_propagation != NULL)
            str = ptr->rootfs_propagation;
        stat = yajl_gen_string ((yajl_gen)g, (const unsigned char *)(str), strlen (str));
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->seccomp != NULL))
      {
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("seccomp"), 7 /* strlen ("seccomp") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        stat = gen_runtime_spec_schema_config_linux_seccomp (g, ptr != NULL ? ptr->seccomp : NULL, ctx, err);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->sysctl != NULL))
      {
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("sysctl"), 6 /* strlen ("sysctl") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        stat = gen_json_map_string_string (g, ptr ? ptr->sysctl : NULL, ctx, err);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->masked_paths != NULL))
      {
        size_t len = 0, i;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("maskedPaths"), 11 /* strlen ("maskedPaths") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->masked_paths != NULL)
          len = ptr->masked_paths_len;
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 0);
        stat = yajl_gen_array_open ((yajl_gen) g);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        for (i = 0; i < len; i++)
          {
            stat = yajl_gen_string ((yajl_gen)g, (const unsigned char *)(ptr->masked_paths[i]), strlen (ptr->masked_paths[i]));
            if (stat != yajl_gen_status_ok)
                GEN_SET_ERROR_AND_RETURN (stat, err);
          }
        stat = yajl_gen_array_close ((yajl_gen) g);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 1);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->readonly_paths != NULL))
      {
        size_t len = 0, i;
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("readonlyPaths"), 13 /* strlen ("readonlyPaths") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->readonly_paths != NULL)
          len = ptr->readonly_paths_len;
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 0);
        stat = yajl_gen_array_open ((yajl_gen) g);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        for (i = 0; i < len; i++)
          {
            stat = yajl_gen_string ((yajl_gen)g, (const unsigned char *)(ptr->readonly_paths[i]), strlen (ptr->readonly_paths[i]));
            if (stat != yajl_gen_status_ok)
                GEN_SET_ERROR_AND_RETURN (stat, err);
          }
        stat = yajl_gen_array_close ((yajl_gen) g);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (!len && !(ctx->options & OPT_GEN_SIMPLIFY))
            yajl_gen_config (g, yajl_gen_beautify, 1);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->mount_label != NULL))
      {
        char *str = "";
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("mountLabel"), 10 /* strlen ("mountLabel") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        if (ptr != NULL && ptr->mount_label != NULL)
            str = ptr->mount_label;
        stat = yajl_gen_string ((yajl_gen)g, (const unsigned char *)(str), strlen (str));
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->intel_rdt != NULL))
      {
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("intelRdt"), 8 /* strlen ("intelRdt") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        stat = gen_runtime_spec_schema_config_linux_intel_rdt (g, ptr != NULL ? ptr->intel_rdt : NULL, ctx, err);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if ((ctx->options & OPT_GEN_KEY_VALUE) || (ptr != NULL && ptr->personality != NULL))
      {
        stat = yajl_gen_string ((yajl_gen) g, (const unsigned char *)("personality"), 11 /* strlen ("personality") */);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
        stat = gen_runtime_spec_schema_defs_linux_personality (g, ptr != NULL ? ptr->personality : NULL, ctx, err);
        if (stat != yajl_gen_status_ok)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    if (ptr != NULL && ptr->_residual != NULL)
      {
        stat = gen_yajl_object_residual (ptr->_residual, g, err);
        if (yajl_gen_status_ok != stat)
            GEN_SET_ERROR_AND_RETURN (stat, err);
      }
    stat = yajl_gen_map_close ((yajl_gen) g);
    if (stat != yajl_gen_status_ok)
        GEN_SET_ERROR_AND_RETURN (stat, err);
    return yajl_gen_status_ok;
}

