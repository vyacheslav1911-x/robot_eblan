// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from roarm_msgs:srv/MoveToXYZ.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roarm_msgs/srv/move_to_xyz.h"


#ifndef ROARM_MSGS__SRV__DETAIL__MOVE_TO_XYZ__FUNCTIONS_H_
#define ROARM_MSGS__SRV__DETAIL__MOVE_TO_XYZ__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "roarm_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "roarm_msgs/srv/detail/move_to_xyz__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
const rosidl_type_hash_t *
roarm_msgs__srv__MoveToXYZ__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
const rosidl_runtime_c__type_description__TypeDescription *
roarm_msgs__srv__MoveToXYZ__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
const rosidl_runtime_c__type_description__TypeSource *
roarm_msgs__srv__MoveToXYZ__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
roarm_msgs__srv__MoveToXYZ__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/MoveToXYZ message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * roarm_msgs__srv__MoveToXYZ_Request
 * )) before or use
 * roarm_msgs__srv__MoveToXYZ_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
bool
roarm_msgs__srv__MoveToXYZ_Request__init(roarm_msgs__srv__MoveToXYZ_Request * msg);

/// Finalize srv/MoveToXYZ message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
void
roarm_msgs__srv__MoveToXYZ_Request__fini(roarm_msgs__srv__MoveToXYZ_Request * msg);

/// Create srv/MoveToXYZ message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * roarm_msgs__srv__MoveToXYZ_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
roarm_msgs__srv__MoveToXYZ_Request *
roarm_msgs__srv__MoveToXYZ_Request__create(void);

/// Destroy srv/MoveToXYZ message.
/**
 * It calls
 * roarm_msgs__srv__MoveToXYZ_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
void
roarm_msgs__srv__MoveToXYZ_Request__destroy(roarm_msgs__srv__MoveToXYZ_Request * msg);

/// Check for srv/MoveToXYZ message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
bool
roarm_msgs__srv__MoveToXYZ_Request__are_equal(const roarm_msgs__srv__MoveToXYZ_Request * lhs, const roarm_msgs__srv__MoveToXYZ_Request * rhs);

/// Copy a srv/MoveToXYZ message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
bool
roarm_msgs__srv__MoveToXYZ_Request__copy(
  const roarm_msgs__srv__MoveToXYZ_Request * input,
  roarm_msgs__srv__MoveToXYZ_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
const rosidl_type_hash_t *
roarm_msgs__srv__MoveToXYZ_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
const rosidl_runtime_c__type_description__TypeDescription *
roarm_msgs__srv__MoveToXYZ_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
const rosidl_runtime_c__type_description__TypeSource *
roarm_msgs__srv__MoveToXYZ_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
roarm_msgs__srv__MoveToXYZ_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/MoveToXYZ messages.
/**
 * It allocates the memory for the number of elements and calls
 * roarm_msgs__srv__MoveToXYZ_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
bool
roarm_msgs__srv__MoveToXYZ_Request__Sequence__init(roarm_msgs__srv__MoveToXYZ_Request__Sequence * array, size_t size);

/// Finalize array of srv/MoveToXYZ messages.
/**
 * It calls
 * roarm_msgs__srv__MoveToXYZ_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
void
roarm_msgs__srv__MoveToXYZ_Request__Sequence__fini(roarm_msgs__srv__MoveToXYZ_Request__Sequence * array);

/// Create array of srv/MoveToXYZ messages.
/**
 * It allocates the memory for the array and calls
 * roarm_msgs__srv__MoveToXYZ_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
roarm_msgs__srv__MoveToXYZ_Request__Sequence *
roarm_msgs__srv__MoveToXYZ_Request__Sequence__create(size_t size);

/// Destroy array of srv/MoveToXYZ messages.
/**
 * It calls
 * roarm_msgs__srv__MoveToXYZ_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
void
roarm_msgs__srv__MoveToXYZ_Request__Sequence__destroy(roarm_msgs__srv__MoveToXYZ_Request__Sequence * array);

/// Check for srv/MoveToXYZ message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
bool
roarm_msgs__srv__MoveToXYZ_Request__Sequence__are_equal(const roarm_msgs__srv__MoveToXYZ_Request__Sequence * lhs, const roarm_msgs__srv__MoveToXYZ_Request__Sequence * rhs);

/// Copy an array of srv/MoveToXYZ messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
bool
roarm_msgs__srv__MoveToXYZ_Request__Sequence__copy(
  const roarm_msgs__srv__MoveToXYZ_Request__Sequence * input,
  roarm_msgs__srv__MoveToXYZ_Request__Sequence * output);

/// Initialize srv/MoveToXYZ message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * roarm_msgs__srv__MoveToXYZ_Response
 * )) before or use
 * roarm_msgs__srv__MoveToXYZ_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
bool
roarm_msgs__srv__MoveToXYZ_Response__init(roarm_msgs__srv__MoveToXYZ_Response * msg);

/// Finalize srv/MoveToXYZ message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
void
roarm_msgs__srv__MoveToXYZ_Response__fini(roarm_msgs__srv__MoveToXYZ_Response * msg);

/// Create srv/MoveToXYZ message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * roarm_msgs__srv__MoveToXYZ_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
roarm_msgs__srv__MoveToXYZ_Response *
roarm_msgs__srv__MoveToXYZ_Response__create(void);

/// Destroy srv/MoveToXYZ message.
/**
 * It calls
 * roarm_msgs__srv__MoveToXYZ_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
void
roarm_msgs__srv__MoveToXYZ_Response__destroy(roarm_msgs__srv__MoveToXYZ_Response * msg);

/// Check for srv/MoveToXYZ message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
bool
roarm_msgs__srv__MoveToXYZ_Response__are_equal(const roarm_msgs__srv__MoveToXYZ_Response * lhs, const roarm_msgs__srv__MoveToXYZ_Response * rhs);

/// Copy a srv/MoveToXYZ message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
bool
roarm_msgs__srv__MoveToXYZ_Response__copy(
  const roarm_msgs__srv__MoveToXYZ_Response * input,
  roarm_msgs__srv__MoveToXYZ_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
const rosidl_type_hash_t *
roarm_msgs__srv__MoveToXYZ_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
const rosidl_runtime_c__type_description__TypeDescription *
roarm_msgs__srv__MoveToXYZ_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
const rosidl_runtime_c__type_description__TypeSource *
roarm_msgs__srv__MoveToXYZ_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
roarm_msgs__srv__MoveToXYZ_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/MoveToXYZ messages.
/**
 * It allocates the memory for the number of elements and calls
 * roarm_msgs__srv__MoveToXYZ_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
bool
roarm_msgs__srv__MoveToXYZ_Response__Sequence__init(roarm_msgs__srv__MoveToXYZ_Response__Sequence * array, size_t size);

/// Finalize array of srv/MoveToXYZ messages.
/**
 * It calls
 * roarm_msgs__srv__MoveToXYZ_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
void
roarm_msgs__srv__MoveToXYZ_Response__Sequence__fini(roarm_msgs__srv__MoveToXYZ_Response__Sequence * array);

/// Create array of srv/MoveToXYZ messages.
/**
 * It allocates the memory for the array and calls
 * roarm_msgs__srv__MoveToXYZ_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
roarm_msgs__srv__MoveToXYZ_Response__Sequence *
roarm_msgs__srv__MoveToXYZ_Response__Sequence__create(size_t size);

/// Destroy array of srv/MoveToXYZ messages.
/**
 * It calls
 * roarm_msgs__srv__MoveToXYZ_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
void
roarm_msgs__srv__MoveToXYZ_Response__Sequence__destroy(roarm_msgs__srv__MoveToXYZ_Response__Sequence * array);

/// Check for srv/MoveToXYZ message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
bool
roarm_msgs__srv__MoveToXYZ_Response__Sequence__are_equal(const roarm_msgs__srv__MoveToXYZ_Response__Sequence * lhs, const roarm_msgs__srv__MoveToXYZ_Response__Sequence * rhs);

/// Copy an array of srv/MoveToXYZ messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
bool
roarm_msgs__srv__MoveToXYZ_Response__Sequence__copy(
  const roarm_msgs__srv__MoveToXYZ_Response__Sequence * input,
  roarm_msgs__srv__MoveToXYZ_Response__Sequence * output);

/// Initialize srv/MoveToXYZ message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * roarm_msgs__srv__MoveToXYZ_Event
 * )) before or use
 * roarm_msgs__srv__MoveToXYZ_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
bool
roarm_msgs__srv__MoveToXYZ_Event__init(roarm_msgs__srv__MoveToXYZ_Event * msg);

/// Finalize srv/MoveToXYZ message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
void
roarm_msgs__srv__MoveToXYZ_Event__fini(roarm_msgs__srv__MoveToXYZ_Event * msg);

/// Create srv/MoveToXYZ message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * roarm_msgs__srv__MoveToXYZ_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
roarm_msgs__srv__MoveToXYZ_Event *
roarm_msgs__srv__MoveToXYZ_Event__create(void);

/// Destroy srv/MoveToXYZ message.
/**
 * It calls
 * roarm_msgs__srv__MoveToXYZ_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
void
roarm_msgs__srv__MoveToXYZ_Event__destroy(roarm_msgs__srv__MoveToXYZ_Event * msg);

/// Check for srv/MoveToXYZ message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
bool
roarm_msgs__srv__MoveToXYZ_Event__are_equal(const roarm_msgs__srv__MoveToXYZ_Event * lhs, const roarm_msgs__srv__MoveToXYZ_Event * rhs);

/// Copy a srv/MoveToXYZ message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
bool
roarm_msgs__srv__MoveToXYZ_Event__copy(
  const roarm_msgs__srv__MoveToXYZ_Event * input,
  roarm_msgs__srv__MoveToXYZ_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
const rosidl_type_hash_t *
roarm_msgs__srv__MoveToXYZ_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
const rosidl_runtime_c__type_description__TypeDescription *
roarm_msgs__srv__MoveToXYZ_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
const rosidl_runtime_c__type_description__TypeSource *
roarm_msgs__srv__MoveToXYZ_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
roarm_msgs__srv__MoveToXYZ_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/MoveToXYZ messages.
/**
 * It allocates the memory for the number of elements and calls
 * roarm_msgs__srv__MoveToXYZ_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
bool
roarm_msgs__srv__MoveToXYZ_Event__Sequence__init(roarm_msgs__srv__MoveToXYZ_Event__Sequence * array, size_t size);

/// Finalize array of srv/MoveToXYZ messages.
/**
 * It calls
 * roarm_msgs__srv__MoveToXYZ_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
void
roarm_msgs__srv__MoveToXYZ_Event__Sequence__fini(roarm_msgs__srv__MoveToXYZ_Event__Sequence * array);

/// Create array of srv/MoveToXYZ messages.
/**
 * It allocates the memory for the array and calls
 * roarm_msgs__srv__MoveToXYZ_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
roarm_msgs__srv__MoveToXYZ_Event__Sequence *
roarm_msgs__srv__MoveToXYZ_Event__Sequence__create(size_t size);

/// Destroy array of srv/MoveToXYZ messages.
/**
 * It calls
 * roarm_msgs__srv__MoveToXYZ_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
void
roarm_msgs__srv__MoveToXYZ_Event__Sequence__destroy(roarm_msgs__srv__MoveToXYZ_Event__Sequence * array);

/// Check for srv/MoveToXYZ message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
bool
roarm_msgs__srv__MoveToXYZ_Event__Sequence__are_equal(const roarm_msgs__srv__MoveToXYZ_Event__Sequence * lhs, const roarm_msgs__srv__MoveToXYZ_Event__Sequence * rhs);

/// Copy an array of srv/MoveToXYZ messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_roarm_msgs
bool
roarm_msgs__srv__MoveToXYZ_Event__Sequence__copy(
  const roarm_msgs__srv__MoveToXYZ_Event__Sequence * input,
  roarm_msgs__srv__MoveToXYZ_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // ROARM_MSGS__SRV__DETAIL__MOVE_TO_XYZ__FUNCTIONS_H_
