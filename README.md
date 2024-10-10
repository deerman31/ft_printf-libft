# C Standard Library Reimplementation Project

This project consists of three main components:

1. Reimplementation of key C standard library functions
2. Reimplementation of printf
3. Original C language functions

## Project Structure

- `libft/`: Reimplementation of standard library functions
- `printf/`: Reimplementation of printf
- `includes/`: Header files

## How to Compile

This project uses a Makefile for compilation. The following commands are available:

- `make`: Compiles the entire project and generates the `libftprintf.a` library.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the library file.
- `make re`: Recompiles the project.

### Compilation Steps

1. Run the `make` command in the root directory.
2. Upon successful compilation, the `libftprintf.a` library file will be generated.

## Usage

Link the generated `libftprintf.a` library to your own project for use.

Example:
```bash
cc your_program.c -L. -lftprintf -I./includes
```

## Notes

- Compilation requires gcc or clang.
- This project is compiled with the `-Wall -Wextra -Werror` flags.

## License

Please refer to the LICENSE file for licensing information about this project.
