# Competitive Programming Solutions

This repository contains solutions to various competitive programming problems from platforms like Codeforces, CSES, and LightOJ. The solutions are organized by problem difficulty and topic.

## Folder Structure

- **codeforces/**: Contains solutions to Codeforces problems.
  - **800/**: Problems with difficulty rating 800.
  - **900/**: Problems with difficulty rating 900.
  - **1200/**: Problems with difficulty rating 1200.
- **cses/**: Contains solutions to CSES problem set.
- **lightOJ/**: Contains solutions to LightOJ problems.
- **topic/**: Contains implementations of various algorithms and data structures.
- **input.txt**: Input file for testing.
- **output.txt**: Output file for testing.

## How to Run

1. **Compile and Run**: Use the provided `.vscode/settings.json` for running the code with input redirection.
2. **Input and Output**: Place your input in `input.txt` and the output will be written to `output.txt`.

## Example

To run a solution, open the corresponding file in Visual Studio Code and use the Code Runner extension.

```sh
# Example command to run a C++ file
g++ codeforces/800/1_Halloumi\ Boxes.cpp -o main && Get-Content input.txt | .\main > output.txt && del main.exe