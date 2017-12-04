#include <string>
#include <iostream>
#include <stdexcept>

void parse_options(int argc, char *argv[], bool &active_d, std::string &out)
{
    // TODO: Should also check if there are too many arguments
    
    for (int i = 0; i < argc; ++i) {
        // convert to std::string to simplify string comparison
        std::string val = argv[i];

        if (val == "-d") {
            active_d = true;
        } else if (val == "-o") {
            // read out and jump one ahead
            if (i == argc - 1) { // no more following argument
                throw std::runtime_error("Need to specify an option for -o");
            } else {
                ++i;
                out = argv[i];
            }
        }
    }
}

int main(int argc, char *argv[])
{
    bool active_d = false;
    std::string out = "";
    std::string data;

    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " [options] data" << std::endl;
        return 1;
    }

    data = argv[argc - 1];

    try {
        // pass one element less, because last element is the main
        // argument which should not be parsed as an option
        parse_options(argc - 1, argv, active_d, out);
    } catch (std::runtime_error err) {
        std::cerr << err.what() << std::endl;
        return 1;
    }

    std::cout << "Option -d: " << (active_d ? "true" : "false") << std::endl;
    std::cout << "Option -o: " << (out.empty() ? "[not specified]" : out)
              << std::endl;
    std::cout << "Main argument: " << data << std::endl;

    return 0;
}
