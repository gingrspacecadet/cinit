<p align="center">
  <img src="assets/icon.png" alt="cinit logo" width="20%" />
</p>

# cinit

**cinit** is a lightweight CLI utility for quickly initializing new C or C++ projects.


## Features

- Initialize projects in the current or a new directory
- Supports both C and C++ (C is default)
- Simple, intuitive commands


## Installation

### Clone the repository:

```bash
git clone https://github.com/SzAkos04/cinit
cd cinit
```

### Install the application

```bash
sudo make install
```

#### On Linux

Copies the binary to `/usr/local/bin/` and the man page to `/usr/local/man/man1/`

#### On Windows

You have to add the `build/` directory to your system's environment `PATH` manually.


## Usage
```bash
cinit [create|c] [name] <args>  # Create a project in a new directory
cinit [init|i] ([name]) <args>  # Initialize a project in the current directory
cinit --help                    # Show help message
```

### Commands

| Command       | Description                                              |
| ------------- | -------------------------------------------------------- |
| `create`, `c` | Create a project in a **new** directory                  |
| `init`, `i`   | Initialize a project in the **current** directory        |

### Options

| Option       | Description                   |
| ------------ | ----------------------------- |
| `--c`        | Set language to C *(default)*     |
| `--cpp`      | Set language to C++             |
| `--debug`    | Implement debugging (C and C++) |
| `--help`     | Show help message               |
| `--version`  | Show installed version          |
| `--silent`   | Disable output (except errors)  |
| `--no-color` | Disable output coloring         |

### Examples

Initialize a C project in the current directory:
```bash
cinit init my_project
```

Create a new C project in a new directory:
```bash
cinit create my_project
```

Create a new C++ project in a new directory:
```bash
cinit create my_project --cpp
```


## Contribution Guidelines

If you'd like to contribute to `cinit`, please make sure to read the [`CONTRIBUTING.md`](CONTRIBUTING.md) file first.
It contains important information about the project's coding standards, commit message format, and the contribution process.

Following these guidelines helps us maintain a high-quality codebase and makes collaboration smoother for everyone.

Thank you for helping improve `cinit`!
