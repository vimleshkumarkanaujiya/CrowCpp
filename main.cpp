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

    app.port(8080);  // Use the default web server port (8080)
    
    app.bindaddr("127.0.0.1");  // localhost (127.0.0.1)

    // app.ssl_file("certificate.crt","private.key");  // Set the SSL contextl, define port 443 for HTTPS connection

    app.run();

    return 0;
}

