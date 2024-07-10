#include "server.h"
#include <iostream>
#include <stdexcept>

int main(int argc, char* argv[]) {
    int port = 8080;  // Default port

    if (argc > 1) {
        try {
            port = std::stoi(argv[1]);
            if (port < 1 || port > 65535) {
                throw std::out_of_range("Port number out of range");
            }
        } catch (const std::exception& e) {
            std::cerr << "Invalid port number. Using default port 8080." << std::endl;
            port = 8080;
        }
    }

    try {
        HTTPServer server(port);
        server.start();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}