# lfsr-corr-attack
Implementation of a correlation attack on a given combining generator over GF(2): C++ with OpenMP

## Project structore
```
lsfr-corr-attack/
├── src/
│   ├── main.cpp
│   ├── lib.cpp     # functions for project      
│   ├── seq.cpp     # CPU sequential
│   ├── par.cpp     # OpenMP parallel
│   └── gen.cpp     # input data generator
├── include/        # api
├── Makefile
├── README.ru.md
└── README.md
```

## Build and run project
```
make
./lsfr_corr_attack seq
```
