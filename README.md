# Minitalk

## Description
Minitalk is a simple data exchange program using UNIX signals. It serves as an introductory project for more complex UNIX inter-process communication (IPC) projects. The program consists of a client and a server that communicate by sending and receiving signals (SIGUSR1 and SIGUSR2) to transmit messages one character at a time.

## Features
- **Client**: Sends a string message to the server using UNIX signals.
- **Server**: Receives signals from the client, reconstructs the message, and displays it.
- **Bonus Features**:
  - **Acknowledgment**: The server sends acknowledgment signals back to the client after receiving each bit.

## Learning Outcomes
This project helps in understanding:
- UNIX signals and inter-process communication
- Signal handling with `sigaction`
- Bitwise operations and binary data transmission
- Process synchronization

## Files Structure
```
Minitalk/
├── client.c            # Client program
├── server.c            # Server program
├── client_bonus.c      # Client with bonus features
├── server_bonus.c      # Server with bonus features
├── minitalk.h          # Header file
├── libft/              # Custom library functions
├── Makefile            # Compilation script
└── README.md           # Project documentation
```

## Installation
To compile the project, run:
```sh
make
```
This will generate the `server` and `client` executables.
For the bonus features, compile using:
```sh
make bonus
```

## Usage
### 1. Start the server
Run the following command to start the server:
```sh
./server
```
The server will display its **Process ID (PID)**, which is needed to send messages from the client.

### 2. Send a message from the client
Use the client to send a message to the server by specifying the server's PID and the message:
```sh
./client <server_pid> "Your message here"
```
For example:
```sh
./client 12345 "Hello, Minitalk!"
```
The server will then receive and display the message.

### 3. Using the Bonus Features
To use the bonus client and server:
```sh
./server_bonus
./client_bonus <server_pid> "Your message here"
```
The bonus version includes acknowledgments.

## Signal Communication
Minitalk transmits data bit by bit using UNIX signals:
- **SIGUSR1** represents a binary `0`
- **SIGUSR2** represents a binary `1`

Each character is sent as 8 bits (1 byte), and the server reconstructs the message from these signals.

## Cleanup
To remove compiled files, use:
```sh
make clean
```
To remove all executables and object files:
```sh
make fclean
```
To recompile the project from scratch:
```sh
make re
```
