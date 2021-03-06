static method_table_entry sf_methods[] = {
    { "add_field", sf_add_field, -1 },
    { "close", sf_close, 0 },
    { "delete_shape", sf_delete_shape, 1 },
    { "each", sf_each, 0 },
    { "field_count", sf_field_count, 0 },
    { "field_index", sf_field_index, 1 },
    { "field_name", sf_field_name, 1 },
    { "field_type", sf_field_type, 1 },
    { "field_width", sf_field_width, 1 },
    { "field_decimals", sf_field_decimals, 1 },
    { "fields", sf_fields, 0 },
    { "minbound", sf_minbound, 0 },
    { "maxbound", sf_maxbound, 0 },
    { "read", sf_read, -1 },
    { "rewind", sf_rewind, 0 },
    { "shape_type", sf_shape_type, 0 },
    { "size", sf_size, 0 },
    { "write", sf_write, -1 },
    { NULL, NULL, 0 }
};
