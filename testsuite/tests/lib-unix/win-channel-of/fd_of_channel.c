#define CAML_INTERNALS
#include <caml/mlvalues.h>

/* We avoid including io.h since it would end up including pthread.h that we
 * can't see in the MSVC port */
struct channel {
  int fd;                       /* Unix file descriptor */
  /* ... */
};

#define Channel(v) (*((struct channel **) (Data_custom_val(v))))

CAMLprim value caml_fd_of_channel(value vchan)
{
  return Val_int(Channel(vchan)->fd);
}
