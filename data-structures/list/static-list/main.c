#include "main.h"

struct __static_list__data_structure__ {
    unsigned __size;
    size_t __item_size;
    _Generic_type __item;
};

static_list* __static_list__(unsigned N, size_t item_size) {
    static_list *list;

    //  allocate the static list memory block
    list = (static_list *)malloc(
        sizeof(unsigned) + sizeof(size_t) + (size_t)N * item_size
    );
    if (!list) {    // if list couldn't be properly allocated
        perror("error while allocating 'static_list'\n");
        return NULL;
    }

    //  setup static list attributes
    list->__size = 0u;
    list->__item_size = item_size;
    list->__item = (list + 2u);

    return list;
}

bool is_static_list_full(static_list* list) {
    if (!list) {    //  if list is the NULL pointer
        return false;
    } else {
        byte* byte_array = (byte *)list->__item;
        // check if the list cover all the allocated bytes
        return (
            (list->__size * list->__item_size) == __size_of_array(byte_array)
        );
    }
}
bool is_static_list_empty(static_list* list) {
    if (!list) {    // if list is the NULL pointer
        return true;
    } else {
        // check if the size of list items is zero
        return (list->__size == 0u);
    }
}

inline unsigned __static_list_size__(static_list* list) {
    return list->__size;
}
inline void* __static_list_items__(static_list* list) {
    return list->__item;
}
