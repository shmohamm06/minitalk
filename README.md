# minitalk

## Overview
minitalk is a project that implements client-server communication using UNIX signals (SIGUSR1 and SIGUSR2). This project demonstrates signal handling, inter-process communication, and binary data transmission in C.

## Features
- **Signal-Based Communication**: Uses SIGUSR1 and SIGUSR2 for data transmission
- **Client-Server Architecture**: Separate client and server programs
- **Binary Data Transmission**: Sends data bit by bit using signals
- **Real-time Communication**: Instantaneous data transfer
- **Process Management**: Handles multiple client connections
- **Error Handling**: Robust error handling for various scenarios

## How It Works
1. **Server**: Listens for incoming signals and reconstructs messages
2. **Client**: Sends messages by converting characters to binary and transmitting bit by bit
3. **Signal Encoding**: SIGUSR1 represents bit '0', SIGUSR2 represents bit '1'
4. **Synchronization**: Uses acknowledgment signals for reliable transmission

## Project Structure
```
minitalk/
├── minitalk.h              # Header file with function declarations
├── server.c                # Server program implementation
├── client.c                # Client program implementation
├── utils.c                 # Utility functions
├── Makefile                # Build configuration
└── .git/                   # Git repository
```

## Programs

### Server
- Listens for incoming signals
- Reconstructs messages from binary signals
- Displays received messages
- Handles multiple clients

### Client
- Takes a message and server PID as arguments
- Converts message to binary representation
- Sends each bit using appropriate signals
- Waits for acknowledgment from server

## Usage
```bash
# Compile both programs
make

# Start the server (in one terminal)
./server

# Send a message from client (in another terminal)
./client <server_pid> "Hello, World!"

# Clean build files
make clean
```



## Signal Protocol
- **SIGUSR1**: Represents binary bit '0'
- **SIGUSR2**: Represents binary bit '1'
- **Transmission**: Each character is sent as 8 bits
- **Acknowledgment**: Server sends confirmation after each bit

## Requirements
- GCC compiler
- Make utility
- Standard C libraries
- Signal handling capabilities
- Libft library (dependency)

## Dependencies
This project depends on the Libft library for basic string and memory functions.

## Communication Flow
1. Client converts message to binary
2. Client sends each bit using SIGUSR1/SIGUSR2
3. Server receives signals and reconstructs bits
4. Server acknowledges each bit received
5. Server displays complete message when all bits are received

## Notes
- Follows 42 coding style (norminette)
- Implements reliable signal-based communication
- Handles edge cases and error conditions
- Memory-safe implementation
- Efficient binary data transmission

## Author
shmohamm - 42 Abu Dhabi
