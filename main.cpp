#include <crow.h>

using namespace std;
using namespace crow;

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")
    ([](){
        return "Hello, World!";
    });

    app.port(8080);  // Use the default SSL port (443)
    app.bindaddr("192.168.110.190");  // Listen on all interfaces

    // app.ssl_file("certificate.crt","private.key");  // Set the SSL context

    app.run();

    return 0;
}

