# lfsr-corr-attack
Implementation of a correlation attack on a given combining generator over GF(2): C++ with OpenMP

## Project structore
```
gf2-corr-attack/
├── src/
│   ├── lib/        # libs for all project      
│   ├── seq/        # CPU sequential
│   ├── par/        # OpenMP parallel
│   └── gen/        # input data generator
├── Makefile
├── README.ru.md
└── README.md
```

## Build project
```
make
./seq
./par
```
