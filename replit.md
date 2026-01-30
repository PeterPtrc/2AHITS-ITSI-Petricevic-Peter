# replit.md

## Overview

This repository contains educational materials and exercises for a 2AHITS ITSI (IT Systems and Information Technology) course at HTL Braunau. It serves as a student's workspace for learning Linux command-line fundamentals, including shell commands, file system operations, stdin/stdout redirection, and basic C programming.

The repository consists of:
- Practice text files used for command-line exercises
- Markdown-based work reports documenting learned concepts
- Simple file/directory structures created during exercises

## User Preferences

Preferred communication style: Simple, everyday language.

## System Architecture

### Repository Structure

The project follows a simple educational workspace pattern:

1. **Root Directory**: Contains practice files (`.txt`) used for various shell exercises
   - Text files for testing commands like `cat`, `echo`, file redirection
   - Sample data files (e.g., `shopping.txt` for data processing exercises)

2. **Reports Directory (`berichte/`)**: Markdown documentation of lessons learned
   - Named by date (format: `YY.MM.DD.md` or `DD.MM.YYYY.md`)
   - Each report includes: student info, topic, exercises with solutions

3. **Practice Directories (`abcd/`)**: File system structure created during exercises
   - Demonstrates `mkdir`, `touch`, `cp`, `mv` command practice

### Content Type

This is a documentation/exercise repository, not an application. There is no:
- Frontend or backend architecture
- Database
- Authentication system
- API structure

### Technologies Used

- **Shell/Bash**: Primary focus for learning Linux commands
- **Markdown**: Documentation format for work reports
- **C/C++**: Basic programming exercises (referenced `sum.cpp` in reports)
- **Common Linux tools**: `cat`, `ls`, `mkdir`, `touch`, `wget`, `date`, etc.

## External Dependencies

### Development Environment

- **Replit**: The repository is designed to run on Replit's Linux-based environment
- **Nix Package Manager**: Used by Replit to install tools on-demand (e.g., `wget`)
- **GCC/G++**: C/C++ compiler for programming exercises

### External Resources

- Course homepage: `https://www.franzmatejka.at/htl/doc/_SJ_2025/2AHITS_ITSI.html`

### No Database or API Dependencies

This educational repository does not require any database connections, external APIs, or third-party services beyond the basic Linux shell environment provided by Replit.