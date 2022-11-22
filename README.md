# conversion
A conversion program that i used to make for school homework

# [Currency/](https://github.com/get543/conversion/tree/main/Currency)
- This is a currency converter program that runs in the terminal.
- It can convert from 8 different currency to USD ($) or IDR (Rp).
- The data is from 2022.

# [Temperature/](https://github.com/get543/conversion/tree/main/Temperature)
- This is a temperature converter program that runs in the terminal.
- It can convert all types of temperature.

# Run the file
- Download g++ compiler on your machine.
  - For Linux : Download it using your distros default repo, example: `sudo apt install g++`
  - For Windows : Download [MinGW](https://www.mingw-w64.org/downloads/) compiler and put it in `Environment Variables`

- Check if `g++` is installed or not
```bash
# get the version number
g++ --version

# using the help command
g++ --help
```

- Using this command to make it executable
```shell
# for windows
g++ temperature.cpp -o temperature.exe

# for linux
g++ temperature.cpp -o temperature
```

- Run the file
```bash
# for windows
./temperature.exe

# for linux
./temperature
```