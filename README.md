# Industrial Power Quality Analyzer - RMS Calculator

An industrial-grade, high-performance C++ command-line tool designed to calculate the Root Mean Square (RMS) from dynamic continuous hardware samples (such as an Analog-to-Digital Converter output in electrical power grids).

This project follows strict production-level compilation constraints, ensuring memory optimization, structural safety, and high-performance computing in native Linux environments.

## Technical Specifications & Features
- **Strict Compilation Constraints:** Compiled using rigorous compiler flags (`-Wall -Wextra -Wundef -Werror -Wunitialized -Winit-self`) to guarantee code reliability and eliminate any potential memory or pointer anomalies before execution.
- **Dynamic Memory Manipulation:** Utilizes continuous standard template library containers managed natively to optimize cache performance during signal processing loops.
- **Robust Argument Parsing:** Validates runtime arguments directly via the Linux command line (`argc`,`argv`), featuring robust exception tracking and clean system return codes.

## Mathematical Modeling
The Root Mean Square (RMS) voltage is computed sequentally using the standard discrete time formulation:

$$V_{RMS} = \sqrt{\frac{1}{N} \sum_{i=1}^{N} v_i^2}$$

Where $N$ represents the total number of dynamic voltage samples processed in the heap, and $v_i$ represents each discrete voltage magnitude input.

## Compilation and Execution

This project uses an automated `Makefile` for compilation control.

### Prerequisites
Ensure you have a native Linux environment (such as Ubuntu/WSL) and the standard `build-essential` packages installed.

## Building the Project
To clean previous builds and compile the binary with strict engineering safety flags, execute:
```bash
make clean
make
```

### Running Inferences
Run the compiled binary by passing the continuous voltage samples directly through the terminal:
```bash
./analizador 220.5 218.2 221.4 219.0
```

## Repository Structure
- `main.cpp`: Main source file containing low-level computation logic and linear processing loops.
- `Makelife`: Automated build script containing strict optimization rules for `g++`.
- `README.md`: Technical documentation of the power quality analyzer.
