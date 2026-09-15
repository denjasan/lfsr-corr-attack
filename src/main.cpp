#include <iostream>

#include "lib.hpp"
#include "gen.hpp"
#include "seq.hpp"
#include "par.hpp"

void print_help();

int main(int argc, char** argv) {
    Context ctx = {0};
    if (argc == 1) {
        print_help();
        std::cout << "FATAL: Enter mode argument\n";
        ctx.result_code = 1;
    }
    else if (strcmp(argv[0], "--help") || strcmp(argv[0], "-h")) {
        print_help();
    }
    else if (strcmp(argv[0], "seq")) {
        std::cout << "Start sequential mode...\n";
    }
    else if (strcmp(argv[0], "par")) {
        std::cout << "Start parallel mode...\n";
    }
    std::cout << "Result code: " << ctx.result_code << "\n";
    return ctx.result_code;
}

void print_help() {
    std::cout << "Usage: ./lsfr_corr_attack [mode] [options]\n";
    std::cout << "Mode:\n";
    std::cout << "  seq             CPU sequential mode\n";
    std::cout << "  par             GPU parallel mode\n";
    std::cout << "Options:\n";
    std::cout << "  --help, -h      Show help information and exit\n";
    std::cout << "Example:\n";
    std::cout << "  ./lsfr_corr_attack seq\n";
}
