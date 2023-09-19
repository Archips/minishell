# minishell

## Project Highlights

- **Description:** This project involves creating a custom shell.
- **Features:**
  - Displays a prompt when waiting for a new command.
  - Implements a working history.
  - Searches and launches the right executable based on PATH, relative, or absolute path.
  - Uses minimal global variables, ensuring signal handlers do not interfere with main data structures.
  - Handles single quotes ('), preventing interpretation of metacharacters within.
  - Handles double quotes (") and interprets the dollar sign ($) within.
  - Implements redirections: < (input), > (output), << (input with delimiter), >> (output in append mode).
  - Supports pipes (|) to connect command output in a pipeline.
  - Handles environment variables ($ followed by characters) and expands them.
  - Supports $? to expand to the exit status of the most recent foreground pipeline.
  - Handles ctrl-C (prompt display), ctrl-D (exit), and ctrl-\ (no action) in interactive mode.
  - Implements built-in commands: echo (-n option), cd (relative/absolute path), pwd, export, unset, env, exit.

## Usage

1. Clone the repository to your local machine.
2. Run `make` to compile the minishell program.
3. Execute `./minishell` to start the custom shell.
4. You can enter commands, use built-ins, and take advantage of shell features as described in the project highlights.

## Authors

- [Archibald Thirion](https://github.com/Archips)
- [Clement Vidon](https://github.com/clemedon)
