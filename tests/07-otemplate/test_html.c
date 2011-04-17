/** Autogenerated by otemplate v. 0.0.0 */

#include <libintl.h>
#include <onion/onion.h>
#include <onion/dict.h>

int work(onion_dict *context, onion_request *req){
  onion_response *res=onion_response_new(req);
  onion_response_write_headers(res);

  onion_response_write(res, "\012<html>\012<head>\012 <title>", 23);
  onion_response_write0(res, onion_dict_get(context, "title"));
  onion_response_write(res, "</title>\012</head>\012<body>\012\012<h1>", 29);
  onion_response_write0(res, onion_dict_get(context, "title"));
  onion_response_write(res, "</h1>\012\012", 7);
  onion_response_write0(res, gettext("This is a test."));
  onion_response_write(res, "\012<p>\012", 5);
  onion_response_write0(res, gettext("Random value"));
  onion_response_write(res, " ", 1);
  onion_response_write0(res, onion_dict_get(context, "random"));
  onion_response_write(res, ".\012\012</body>\012</html>\012", 19);

  return onion_response_free(res);
}