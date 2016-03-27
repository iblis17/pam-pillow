#include <stdio.h>
#include <pillowtalk.h>


int main(int argc, char *argv[])
{
    const char *auth_endpoint = "http://test:test@localhost:5984/_session";

    pt_init();  // pillowtalk init
    pt_node_t *req = pt_map_new();  // request json obj
    pt_response_t *res = pt_get(auth_endpoint);

    printf("res: %ld\n", res->response_code);

    pt_free_node(req);
    pt_free_response(res);
    pt_cleanup();  // pillowtalk cleanup
    return 0;
}
