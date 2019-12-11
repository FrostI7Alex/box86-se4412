#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh....
#endif

GO(dbus_address_entries_free, vFp)
GO(dbus_address_entry_get_method, pFp)
GO(dbus_address_entry_get_value, pFpp)
GO(dbus_address_escape_value, pFp)
GO(dbus_address_unescape_value, pFpp)
GO(dbus_bus_add_match, vFpp)
GO(dbus_bus_get, pFip)
GO(dbus_bus_get_id, pFpp)
GO(dbus_bus_get_private, pFip)
GO(dbus_bus_get_unique_name, pFp)
GO(dbus_bus_get_unix_user, uFppp)
GO(dbus_bus_name_has_owner, iFppp)
GO(dbus_bus_register, iFpp)
GO(dbus_bus_release_name, iFppp)
GO(dbus_bus_remove_match, vFppp)
GO(dbus_bus_request_name, iFppup)
GO(dbus_bus_set_unique_name, iFpp)
GO(dbus_bus_start_service_by_name, iFppupp)
GOM(dbus_connection_add_filter, iFEpppp)
//GO(dbus_connection_allocate_data_slot, 
//GO(dbus_connection_borrow_message, 
GO(dbus_connection_close, vFp)
//GO(dbus_connection_dispatch, 
//GO(dbus_connection_flush, 
//GO(dbus_connection_free_data_slot, 
//GO(dbus_connection_free_preallocated_send, 
//GO(dbus_connection_get_adt_audit_session_data, 
//GO(dbus_connection_get_data, 
GO(dbus_connection_get_dispatch_status, iFp)
//GO(dbus_connection_get_is_anonymous, 
//GO(dbus_connection_get_is_authenticated, 
GO(dbus_connection_get_is_connected, iFp)
//GO(dbus_connection_get_max_message_size, 
//GO(dbus_connection_get_max_received_size, 
//GO(dbus_connection_get_object_path_data, 
//GO(dbus_connection_get_outgoing_size, 
//GO(dbus_connection_get_server_id, 
//GO(dbus_connection_get_socket, 
//GO(dbus_connection_get_unix_fd, 
//GO(dbus_connection_get_unix_process_id, 
//GO(dbus_connection_get_unix_user, 
//GO(dbus_connection_get_windows_user, 
//GO(dbus_connection_has_messages_to_send, 
//GO(dbus_connection_list_registered, 
//GO(dbus_connection_open, 
GO(dbus_connection_open_private, pFpp)
//GO(dbus_connection_pop_message, 
//GO(dbus_connection_preallocate_send, 
//GO(dbus_connection_read_write, 
//GO(dbus_connection_read_write_dispatch, 
//GO(dbus_connection_ref, 
//GO(dbus_connection_register_fallback, 
//GO(dbus_connection_register_object_path, 
GOM(dbus_connection_remove_filter, vFEppp)
//GO(dbus_connection_return_message, 
//GO(dbus_connection_send, 
//GO(dbus_connection_send_preallocated, 
//GO(dbus_connection_send_with_reply, 
//GO(dbus_connection_send_with_reply_and_block, 
//GO(dbus_connection_set_allow_anonymous, 
//GO(dbus_connection_set_change_sigpipe, 
//GO(dbus_connection_set_data, 
//GO(dbus_connection_set_dispatch_status_function, 
GO(dbus_connection_set_exit_on_disconnect, vFpi)
//GO(dbus_connection_set_max_message_size, 
//GO(dbus_connection_set_max_received_size, 
//GO(dbus_connection_set_route_peer_messages, 
GOM(dbus_connection_set_timeout_functions, iFEpppppp)
//GO(dbus_connection_set_unix_user_function, 
//GO(dbus_connection_set_wakeup_main_function, 
//GO(dbus_connection_set_watch_functions, 
//GO(dbus_connection_set_windows_user_function, 
//GO(dbus_connection_steal_borrowed_message, 
//GO(dbus_connection_try_register_fallback, 
//GO(dbus_connection_try_register_object_path, 
GO(dbus_connection_unref, vFp)
//GO(dbus_connection_unregister_object_path, 
GO(dbus_error_free, vFp)
GO(dbus_error_has_name, iFpp)
GO(dbus_error_init, vFp)
GO(dbus_error_is_set, iFp)
//GO(dbus_free, 
//GO(dbus_free_string_array, 
//GO(dbus_get_local_machine_id, 
//GO(dbus_get_version, 
//GO(dbus_internal_do_not_use_create_uuid, 
//GO(dbus_internal_do_not_use_get_uuid, 
//GO(dbus_malloc, 
//GO(dbus_malloc0, 
//GO(dbus_message_allocate_data_slot, 
//GO(dbus_message_append_args, 
//GO(dbus_message_append_args_valist, 
//GO(dbus_message_copy, 
//GO(dbus_message_demarshal, 
//GO(dbus_message_demarshal_bytes_needed, 
//GO(dbus_message_free_data_slot, 
GOM(dbus_message_get_args, iFEppiV)
GOM(dbus_message_get_args_valist, iFEppiV)
//GO(dbus_message_get_auto_start, 
//GO(dbus_message_get_data, 
//GO(dbus_message_get_destination, 
//GO(dbus_message_get_error_name, 
//GO(dbus_message_get_interface, 
//GO(dbus_message_get_member, 
//GO(dbus_message_get_no_reply, 
//GO(dbus_message_get_path, 
//GO(dbus_message_get_path_decomposed, 
//GO(dbus_message_get_reply_serial, 
//GO(dbus_message_get_sender, 
//GO(dbus_message_get_serial, 
//GO(dbus_message_get_signature, 
//GO(dbus_message_get_type, 
//GO(dbus_message_has_destination, 
//GO(dbus_message_has_interface, 
//GO(dbus_message_has_member, 
//GO(dbus_message_has_path, 
//GO(dbus_message_has_sender, 
//GO(dbus_message_has_signature, 
//GO(dbus_message_is_error, 
//GO(dbus_message_is_method_call, 
//GO(dbus_message_is_signal, 
//GO(dbus_message_iter_abandon_container, 
//GO(dbus_message_iter_append_basic, 
//GO(dbus_message_iter_append_fixed_array, 
//GO(dbus_message_iter_close_container, 
//GO(dbus_message_iter_get_arg_type, 
//GO(dbus_message_iter_get_array_len, 
GO(dbus_message_iter_get_basic, vFpp)
//GO(dbus_message_iter_get_element_type, 
//GO(dbus_message_iter_get_fixed_array, 
//GO(dbus_message_iter_get_signature, 
//GO(dbus_message_iter_has_next, 
GO(dbus_message_iter_init, iFpp)
GO(dbus_message_iter_init_append, vFpp)
//GO(dbus_message_iter_next, 
//GO(dbus_message_iter_open_container, 
//GO(dbus_message_iter_recurse, 
//GO(dbus_message_lock, 
//GO(dbus_message_marshal, 
//GO(dbus_message_new, 
//GO(dbus_message_new_error, 
//GO(dbus_message_new_error_printf, 
//GO(dbus_message_new_method_call, 
//GO(dbus_message_new_method_return, 
//GO(dbus_message_new_signal, 
//GO(dbus_message_ref, 
//GO(dbus_message_set_auto_start, 
//GO(dbus_message_set_data, 
//GO(dbus_message_set_destination, 
//GO(dbus_message_set_error_name, 
//GO(dbus_message_set_interface, 
//GO(dbus_message_set_member, 
//GO(dbus_message_set_no_reply, 
//GO(dbus_message_set_path, 
//GO(dbus_message_set_reply_serial, 
//GO(dbus_message_set_sender, 
//GO(dbus_message_set_serial, 
//GO(dbus_message_type_from_string, 
//GO(dbus_message_type_to_string, 
//GO(dbus_message_unref, 
GO(dbus_move_error, vFpp)
GO(dbus_parse_address, iFpppp)
//GO(dbus_pending_call_allocate_data_slot, 
//GO(dbus_pending_call_block, 
//GO(dbus_pending_call_cancel, 
//GO(dbus_pending_call_free_data_slot, 
//GO(dbus_pending_call_get_completed, 
//GO(dbus_pending_call_get_data, 
//GO(dbus_pending_call_ref, 
//GO(dbus_pending_call_set_data, 
//GO(dbus_pending_call_set_notify, 
//GO(dbus_pending_call_steal_reply, 
//GO(dbus_pending_call_unref, 
//GO(dbus_realloc, 
//GO(dbus_server_allocate_data_slot, 
//GO(dbus_server_disconnect, 
//GO(dbus_server_free_data_slot, 
//GO(dbus_server_get_address, 
//GO(dbus_server_get_data, 
//GO(dbus_server_get_id, 
//GO(dbus_server_get_is_connected, 
//GO(dbus_server_listen, 
//GO(dbus_server_ref, 
//GO(dbus_server_set_auth_mechanisms, 
//GO(dbus_server_set_data, 
//GO(dbus_server_set_new_connection_function, 
//GO(dbus_server_set_timeout_functions, 
//GO(dbus_server_set_watch_functions, 
//GO(dbus_server_unref, 
GO(dbus_set_error, vFpppppppppp)    //vaarg
GO(dbus_set_error_const, vFppp)
//GO(dbus_set_error_from_message, 
//GO(dbus_shutdown, 
//GO(dbus_signature_iter_get_current_type, 
//GO(dbus_signature_iter_get_element_type, 
//GO(dbus_signature_iter_get_signature, 
//GO(dbus_signature_iter_init, 
//GO(dbus_signature_iter_next, 
//GO(dbus_signature_iter_recurse, 
//GO(dbus_signature_validate, 
//GO(dbus_signature_validate_single, 
//GO(dbus_threads_init, 
//GO(dbus_threads_init_default, 
GO(dbus_timeout_get_data, pFp)
GO(dbus_timeout_get_enabled, iFp)
GO(dbus_timeout_get_interval, iFp)
GO(dbus_timeout_handle, iFp)
GOM(dbus_timeout_set_data, vFppp)
//GO(dbus_type_is_basic, 
//GO(dbus_type_is_container, 
//GO(dbus_type_is_fixed, 
//GO(dbus_watch_get_data, 
//GO(dbus_watch_get_enabled, 
//GO(dbus_watch_get_fd, 
//GO(dbus_watch_get_flags, 
//GO(dbus_watch_get_socket, 
//GO(dbus_watch_get_unix_fd, 
//GO(dbus_watch_handle, 
//GO(dbus_watch_set_data, 
